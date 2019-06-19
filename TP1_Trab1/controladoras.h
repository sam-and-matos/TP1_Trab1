#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "sqlite3.h"
#include <list>

class ControladoraApresentacaoAutenticacao :public InterfaceApresentacaoAutenticacao{
public:
	bool autenticar(CPF);
};

class ControladoraApresentacaoUsuario :public InterfaceApresentacaoUsuario{
public:
	void executar(CPF);
	void executar();
};

class ControladoraApresentacaoEventos :public InterfaceApresentacaoEventos{
public:
	void executar(Evento);
	void executar();
};

class ControladoraApresentacaoVendas :public InterfaceApresentacaoVendas{
public:
	void executar(Evento);
};

class ControladoraServicoAutenticacao :public InterfaceServicoAutenticacao{
public:
	bool autenticar(CPF, Senha) throw (ErroBanco);
};

class ControladoraServicoUsuario :public InterfaceServicoUsuario{
public:
	bool cadastrar(CPF, Senha, CartaoDeCredito) throw(ErroBanco);
	bool excluir(CPF) throw(ErroBanco);
};

class ControladoraServicoEvento :public InterfaceServicoEvento{
public:
	bool cadastar(CPF, Evento);
	bool alterar(Evento, CPF);
	bool excluir(Evento, CPF);
};

class ControladoraServicoVendas :public InterfaceServicoVendas{
public:
	float vendas(Evento);
};

class ControladoraSQL {
private:
	const char* nm_DB;
	sqlite3* db;
	char* mensagem;
	int rc;
	void conectar() throw(ErroBanco);
	void desconectar() throw(ErroBanco);
	static int callback(void*, int, char**, char**);
public:
	static list<ElementoResultado> listaResultado;
	string comandoSQL;
	ControladoraSQL() {
		nm_DB = "DB_Dados";
	}
	void executar() throw(ErroBanco);
};

#endif