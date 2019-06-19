#include "controladoras.h"


using namespace std;

void ControladoraSQL::conectar() throw(ErroBanco) {
	rc = sqlite3_open(nm_DB, &db);
	if (rc != SQLITE_OK)
		throw ErroBanco("Erro na conexão com o banco de dados");
}

void ControladoraSQL::desconectar() throw(ErroBanco){
	rc = sqlite3_close(db);
	if (rc != SQLITE_OK)
		throw ErroBanco("Erro na desconexão com o banco de dados");
}

void ControladoraSQL::executar() throw (ErroBanco) {
	conectar();
	rc = sqlite3_exec(db, comandoSQL.c_str(), callback, 0, &mensagem);
	if (rc != SQLITE_OK) {
		if (mensagem)
			free(mensagem);
		throw ErroBanco("Erro na execucao do comando SQL");
	}
	desconectar();
}

int ControladoraSQL::callback(void* NotUsed, int argc, char** valorColuna, char** nomeColuna) {
	NotUsed = 0;
	ElementoResultado elemento;
	int i;
	for (i = 0; i < argc; i++) {
		elemento.setNomeColuna(nomeColuna[i]);
		elemento.setValorColuna(valorColuna[i] ? valorColuna[i] : "NULL");
		listaResultado.push_front(elemento);
	}
	return 0;
}

bool ControladoraServicoAutenticacao::autenticar(CPF cpf, Senha senha) throw (ErroBanco){
	ControladoraSQL CtrSQL;
	string cmd;

	cmd = "SELECT SENHA FROM USUARIOS WHERE CPF = ";
	cmd += cpf.getCPF();
	
	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	if (CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Usuário não cadastrado.");
		return false;
	}
	else
		return true;
}

bool ControladoraServicoUsuario::cadastrar(CPF cpf, Senha senha, CartaoDeCredito cartao) throw (ErroBanco) {
	ControladoraSQL CtrSQL;
	string cmd;
	NumeroCartaoCredito nr_cartao;
	DataValidade dt_validade;
	CodigoSeguranca cd_seg;
	
	nr_cartao = cartao.getNumeroCartaoCredito;
	dt_validade = cartao.getDataValidade;
	cd_seg = cartao.getCodigoSeguranca;

	cmd = "SELECT NUMERO_CARTAO FROM CARTOES WHERE NUMERO_CARTAO = ";
	cmd += nr_cartao.getNumero();


	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();
	
	if (!CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Cartão já cadastrado.");
		return false;
	}
	else {
		cmd = "INSERT INTO CARTOES VALUES(";
		cmd += "'" + nr_cartao.getNumero() + "',";
		cmd += "'" + cd_seg.getCodigoSeguranca() + "',";
		cmd += "'" + dt_validade.getDataDeValidade() + "')";

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();

		cmd = "INSERT INTO USUARIOS VALUES(";
		cmd += "'" + cpf.getCPF() + "',";
		cmd += "'" + senha.getSenha() + "',";
		cmd += "'" + nr_cartao.getNumero() + "')";

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
	}
	return true;
}

bool ControladoraServicoUsuario::excluir(CPF cpf) throw(ErroBanco) {
	ControladoraSQL CtrSQL;
	string cmd;

	cmd = "SELECT CPF FROM USUARIOS WHERE CPF = ";
	cmd += cpf.getCPF();

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	if (CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Usuario não cadastrado.");
		return false;
	}
	else {
		cmd = "DELETE FROM USUARIOS WHERE CPF = ";
		cmd += cpf.getCPF();

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
	}
	return true;
}

bool ControladoraServicoEvento::cadastar(CPF cpf, Evento evento) throw(ErroBanco) {
	ControladoraSQL CtrSQL;
	string cmd;
	CodigoEvento codigo;
	NomeEvento nome;
	Cidade cidade;
	ClasseEvento classe;
	Estado estado;
	FaixaEtaria faixa;

	codigo = evento.getCodigoEvento();
	nome = evento.getNomeEvento();
	cidade = evento.getCidade();
	classe = evento.getClasseEvento();
	estado = evento.getEstado();
	faixa = evento.getFaixaEtaria();

	cmd = "SELECT CODIGO FROM EVENTOS WHERE CODIGO = ";
	cmd += codigo.getCodigoEvento();

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	if (!CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Evento já cadastrado.");
		return false;
	}
	else {
		cmd = "INSERT INTO EVENTOS VALUES(";
		cmd += "'" + codigo.getCodigoEvento() + "',";
		cmd += "'" + nome.getNomeEvento() + "',";
		cmd += "'" + cidade.getCidade() + "',";
		cmd += "'" + to_string(classe.getClasseEvento()) + "',";
		cmd += "'" + estado.getEstado() + "',";
		cmd += "'" + faixa.getFaixaEtaria() + "',";
		cmd += "'" + cpf.getCPF() + "')";

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
	}
	return true;
}

bool ControladoraServicoEvento::alterar(Evento evento, CPF cpf) throw(ErroBanco) {
	ControladoraSQL CtrSQL;
	string cmd;
	CodigoEvento codigo;
	NomeEvento nome;
	Cidade cidade;
	ClasseEvento classe;
	Estado estado;
	FaixaEtaria faixa;

	codigo = evento.getCodigoEvento();
	nome = evento.getNomeEvento();
	cidade = evento.getCidade();
	classe = evento.getClasseEvento();
	estado = evento.getEstado();
	faixa = evento.getFaixaEtaria();

	cmd = "SELECT CODIGO FROM EVENTOS WHERE CODIGO = ";
	cmd += codigo.getCodigoEvento();

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	if (CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Evento não cadastrado.");
		return false;
	}
	else {
		cmd = "UPDATE EVENTOS SET ";
		cmd += "NOME = " + nome.getNomeEvento() + ",";
		cmd += "NOME = " + cidade.getCidade() + ",";
		cmd += "NOME = " + to_string(classe.getClasseEvento()) + ",";
		cmd += "NOME = " + estado.getEstado() + ",";
		cmd += "NOME = " + faixa.getFaixaEtaria();
		cmd += "WHERE CODIGO = ";
		cmd += codigo.getCodigoEvento();

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
	}
	return true;
}

bool ControladoraServicoEvento::excluir(Evento evento, CPF cpf) throw(ErroBanco) {
	ControladoraSQL CtrSQL;
	string cmd;
	CodigoEvento codigo;
	NomeEvento nome;
	Cidade cidade;
	ClasseEvento classe;
	Estado estado;
	FaixaEtaria faixa;
	
	codigo = evento.getCodigoEvento();
	nome = evento.getNomeEvento();
	cidade = evento.getCidade();
	classe = evento.getClasseEvento();
	estado = evento.getEstado();
	faixa = evento.getFaixaEtaria();

	cmd = "SELECT CODIGO FROM EVENTOS WHERE CODIGO = ";
	cmd += codigo.getCodigoEvento();

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	if (CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Evento não cadastrado");
		return false;
	}
	else {
		cmd = "SELECT CPF FROM EVENTOS WHERE CODIGO = ";
		cmd += codigo.getCodigoEvento();
		
		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
		for (auto it = CtrSQL.listaResultado.begin(); it != CtrSQL.listaResultado.end(); it++) {
			if (cpf.getCPF != CtrSQL.listaResultado.front().getValorColuna)
				throw ErroBanco("Evento não relacionado a esse CPF.");
		}

		cmd = "DELETE FROM EVENTOS WHERE CPF = ";
		cmd += cpf.getCPF();

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
	}
	return true;
}

float ControladoraServicoVendas::vendas(Evento aprs) {
	ControladoraSQL CtrSQL;
	string cmd;
	CodigoEvento codigo;

	codigo = aprs.getCodigoEvento();
	
	cmd = "SELECT A.SUM(PRECO) FROM EVENTOS C INNER JOIN APRESENTACOES A ON C.CODIGO = A.CODIGO INNER JOIN INGRESSOS B ON B.APRESENTACAO = A.CODIGO";

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	return float(CtrSQL.listaResultado.front().getValorColuna);
}