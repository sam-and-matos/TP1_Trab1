/**
*  @file controladoras.h

*  Assinatura de todas as controladoras do software de venda de ingressos.
*
*  Estas controladoras s�o implementados por classes contendo os dom�nios e entidades do
*  software de hospedagem em viagens e m�todos para o usu�rio conseguir trabalhar 
* com as controladoras desse software.
*/
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

/**
*  Classe Controladora da camada de Apresenta��o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraApresentacao {

};

/**
*  Classe Controladora de Autentica��o da camada de Apresenta��o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraApresentacaAutenticacao :public InterfaceApresentacaoAutenticacao {

};

/**
*  Classe Controladora de Usu�rio da camada de Apresenta��o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraApresentacaUsuario :public IntefaceApresentacaoUsuario {

};

/**
*  Classe Controladora de Eventos da camada de Apresenta��o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraApresentacaEventos :public InterfaceApresentacaoEvento {

};

/**
*  Classe Controladora de Vendas da camada de Apresenta��o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraApresentacaVendas :public InterfaceApresentacaoVendas {

};

/**
*  Classe Controladora de Autentica��o da camada de Servi�o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraServicoAutenticacao :public InterfaceServicoAuteticacao {

};

/**
*  Classe Controladora de Usuario da camada de Servi�o.
*
*  Controladora respons�vel por toda as informa��es referentes a apresenta��o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraServicoUsuario :public InterfaceServicoUsuario {

};

/**
*  Classe Controladora de Evento da camada de Servi�o.
*
*  Controladora respons�vel por toda as informa��es referentes a servi�o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraServicoEvento :public InterfaceServicoEvento {

};

/**
*  Classe Controladora de Vendas da camada de Servi�o.
*
*  Controladora respons�vel por toda as informa��es referentes a servi�o ao usu�rio,i.e interface pela qual o usu�rio utiliza
* o sistema, e captura dos comandos do usu�rio.
*
*/
class ControladoraServicoVendas :public InterfaceServicoVendas {

};

#endif