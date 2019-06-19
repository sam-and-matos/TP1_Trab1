#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "entidades.h"
#include "dominios.h"


class ErroBanco {
private:
	string mensagem;
public:
	ErroBanco(string);
	string what();
};

class ElementoResultado {
private:
	string nomeColuna;
	string valorColuna;
public:
	void setNomeColuna(const string&);
	string getNomeColuna() const {
		return nomeColuna;
	};
	void setValorColuna(const string&);
	string getValorColuna() const {
		return valorColuna;
	};
};

class InterfaceApresentacaoAutenticacao {
public:
	virtual bool autenticar(CPF) throw(invalid_argument);
};

class InterfaceApresentacaoUsuario {
public:
	virtual void executar(CPF) throw(invalid_argument);
	virtual void executar() throw(invalid_argument);
};

class InterfaceApresentacaoEventos {
public:
	virtual void executar(CPF) throw(invalid_argument);
	virtual void executar() throw(invalid_argument);
};

class InterfaceApresentacaoVendas {
public:
	virtual void executar(CPF) throw(invalid_argument);
};

class InterfaceServicoAutenticacao {
public:
	virtual bool autenticar(CPF, Senha);
};

class InterfaceServicoUsuario {
public:
	virtual bool cadastrar(CPF, Senha);
	virtual bool excluir(CPF);
};

class InterfaceServicoEvento {
public:
	virtual Evento cadatrar(CPF);
	virtual bool alterar(Evento, CPF);
	virtual bool excluir(Evento, CPF);
};

class InterfaceServicoVendas {
public:
	virtual float vendas(Evento);
};

#endif
