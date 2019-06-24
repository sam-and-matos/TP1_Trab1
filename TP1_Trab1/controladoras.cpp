#include "controladoras.h"
#include <iostream>
#include <string.h>


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

list<ElementoResultado> ControladoraSQL::listaResultado;

int ControladoraSQL::callback(void* NotUsed, int argc, char** valorColuna, char** nomeColuna) {
	NotUsed = 0;
	ElementoResultado elemento;
	int i;
	for (i = 0; i < argc; i++) {
		elemento.setNomeColuna(nomeColuna[i]);
		elemento.setValorColuna(valorColuna[i] ? valorColuna[i] : "NULL");
		listaResultado.emplace(listaResultado.begin(),elemento);
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
	
	nr_cartao = cartao.getNumeroCartaoCredito();
	dt_validade = cartao.getDataValidade();
	cd_seg = cartao.getCodigoSeguranca();

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

bool ControladoraServicoEvento::cadatrar(CPF cpf, Evento evento) throw(ErroBanco) {
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

bool ControladoraServicoEvento::pesquisar(NomeEvento nome) throw(ErroBanco) {
	ControladoraSQL CtrSQL;
	string cmd;
	
	cmd = "SELECT CODIGO FROM EVENTOS WHERE CODIGO = ";
	cmd = nome.getNomeEvento();

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();

	if (CtrSQL.listaResultado.empty()) {
		throw ErroBanco("Evento não existe!");
		return false;
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

	CtrSQL.listaResultado.clear();
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
			if (cpf.getCPF() != CtrSQL.listaResultado.front().getValorColuna())
				throw ErroBanco("Evento não relacionado a esse CPF.");
			else
			CtrSQL.listaResultado.pop_front();
		}

		cmd = "DELETE FROM EVENTOS WHERE CPF = ";
		cmd += cpf.getCPF();
		cmd += "AND CODIGO = " + evento.getCodigoEvento().getCodigoEvento();

		CtrSQL.comandoSQL = cmd;
		CtrSQL.executar();
	}
	return true;
}

list<ElementoResultado> ControladoraServicoVendas::vendas(Evento evto)  throw(ErroBanco){
	ControladoraSQL CtrSQL;
	string cmd;
	list<ElementoResultado> resultado;
	ElementoResultado vendas;

	cmd = "SELECT DISTINCT(CPF) FROM INGRESSOS";

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();
	resultado = CtrSQL.listaResultado;


	cmd = "SELECT SUM(PRECO) FROM EVENTOS INNER JOIN APRESENTACOES ON APRESENTACOES.EVENTO = EVENTOS.CODIGO	INNER JOIN INGRESSOS ON INGRESSOS.APRESENTACAO = APRESENTACOES.CODIGO";

	CtrSQL.comandoSQL = cmd;
	CtrSQL.executar();
	resultado.emplace_front(CtrSQL.listaResultado.front());

	return resultado;
}

bool ControladoraApresentacaoAutenticacao::autenticar(CPF cpf, Senha senha) throw(invalid_argument){
	ControladoraServicoAutenticacao CtrServ;
	
	try
	{
		CtrServ.autenticar(cpf, senha);
	}
	catch (ErroBanco exp)
	{
		cout << exp.what() << endl;
		return false;
	}
	return true;
}

void ControladoraApresentacaoUsuario::executar(Usuario usu) throw(invalid_argument) {
	ControladoraServicoUsuario CtrServUsu;
	ControladoraServicoEvento CtrServEve;
	Evento evento;
	string aux;
	CodigoEvento codigo;
	NomeEvento nome;
	NomeEvento nome_aux;
	Cidade cidade;
	ClasseEvento classe;
	Estado estado;
	FaixaEtaria faixa;

	int choice, classeE;

	
}

void ControladoraApresentacaoUsuario::executar() throw(invalid_argument) {

}

void ControladoraApresentacaoEventos::executar() throw(invalid_argument) {
	ControladoraServicoEvento CtrServEve;
	int linha, coluna;
	NomeEvento nome;
	string aux_str;
	char aux[20];
	getmaxyx(stdscr, linha, coluna);
	
	while (true)
	{
		mvwprintw(stdscr, 5, 3, "Digite o nome do evento que deseja procurar: ");
		getstr(aux);
		aux_str = aux;
		nome.setNomeEvento(aux_str);
		try
		{
			CtrServEve.pesquisar(nome);
		}
		catch (ErroBanco exp)
		{
			mvwprintw(stdscr, 10, 3, exp.what().c_str());
			getstr(aux);
		}
		break;
	}
}

void ControladoraApresentacaoEventos::executar(CPF cpf) throw(invalid_argument) {
	ControladoraServicoEvento CtrServEve;
	int linha, coluna, highlight = 0, tam_str, choice;
	Evento evento;
	CodigoEvento codigo;
	NomeEvento nome;
	Cidade cidade;
	ClasseEvento classe;
	Estado estado;
	FaixaEtaria faixa;
	string aux_str;
	char aux[20];
	vector<string> choices = { "Cadastar Evento", "Alterar Evento", "Exluir Evento" };

	getmaxyx(stdscr, linha, coluna);
	keypad(stdscr, true);

	while (true)
	{
		for (int i = 0; i < 3; i++) {
			if (i == highlight)
				wattron(stdscr, A_STANDOUT);
			tam_str = strlen(choices.at(i).c_str());
			mvprintw(linha / 2, (coluna - tam_str) / 2, choices.at(i).c_str());
			wattroff(stdscr, A_STANDOUT);
		}
		choice = wgetch(stdscr);
		switch (choice)
		{
		case KEY_UP:
			highlight--;
			if (highlight == -1)
				highlight = 0;
			break;
		case KEY_DOWN:
			highlight++;
			if (highlight == 3)
				highlight = 2;
			break;
		default:
			break;
		}
		if (choice == 10)// Tecla Enter
			break;
	}

	switch (highlight)
	{
	case 0:
		mvprintw(0, (coluna - strlen(choices.at(highlight).c_str())) / 2, choices.at(highlight).c_str());
		while (true)
		{
			try
			{
				mvprintw(5, 3, "Digite o Nome do evento: ");
				getstr(aux);
				aux_str = aux;
				nome.setNomeEvento(aux_str);
				evento.setNomeEvento(nome);
				mvprintw(6, 3, "Digite o : ");
				getstr(aux);
			}
			catch (const std::exception&)
			{

			}
	default:
		break;
	}
	
}

void ControladoraApresentacaoVendas::executar(Evento evento) throw(invalid_argument) {

}