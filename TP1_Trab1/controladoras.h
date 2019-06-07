#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "sqlite3.h"

class ControladoraApresentacaoAutenticacao :public InterfaceApresentacaoAutenticacao {

};

class ControladoraApresentacaoUsuario :public InterfaceApresentacaoUsuario {

};

class ControladoraApresentacaoEventos :public InterfaceApresentacaoEventos {

};

class ControladoraApresentacaoVendas :public InterfaceApresentacaoVendas {

};

class ControladoraServicoAutenticacao :public InterfaceServicoAutenticacao {

};

class ControladoraServicoUsuario :public InterfaceServicoUsuario {

};

class ControladoraServicoEvento :public InterfaceServicoEvento {

};

class ControladoraServicoVendas :public InterfaceServicoVendas {

};

#endif