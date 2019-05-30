#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

class InterfaceApresentacaoAutenticacao {
public:
	virtual bool exectuar();

};

class IntefaceApresentacaoUsuario {
public:
	virtual bool executar();
	virtual bool validar(const CPF &);
	virtual bool cadastrar(const CPF &, const Senha &);
};

class InterfaceApresentacaoEvento {

};

class InterfaceApresentacaoVendas {

};

class InterfaceServicoAuteticacao {

};

class InterfaceServicoUsuario {

};

class InterfaceServicoEvento {

};

class InterfaceServicoVendas {

};
#endif