/**
*  @file controladoras.h

*  Assinatura de todas as controladoras do software de venda de ingressos.
*
*  Estas controladoras são implementados por classes contendo os domínios e entidades do
*  software de hospedagem em viagens e métodos para o usuário conseguir trabalhar 
* com as controladoras desse software.
*/
#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

/**
*  Classe Controladora da camada de Apresentação.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraApresentacao {

};

/**
*  Classe Controladora de Autenticação da camada de Apresentação.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraApresentacaAutenticacao :public InterfaceApresentacaoAutenticacao {

};

/**
*  Classe Controladora de Usuário da camada de Apresentação.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraApresentacaUsuario :public IntefaceApresentacaoUsuario {

};

/**
*  Classe Controladora de Eventos da camada de Apresentação.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraApresentacaEventos :public InterfaceApresentacaoEvento {

};

/**
*  Classe Controladora de Vendas da camada de Apresentação.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraApresentacaVendas :public InterfaceApresentacaoVendas {

};

/**
*  Classe Controladora de Autenticação da camada de Serviço.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraServicoAutenticacao :public InterfaceServicoAuteticacao {

};

/**
*  Classe Controladora de Usuario da camada de Serviço.
*
*  Controladora responsável por toda as informações referentes a apresentação ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraServicoUsuario :public InterfaceServicoUsuario {

};

/**
*  Classe Controladora de Evento da camada de Serviço.
*
*  Controladora responsável por toda as informações referentes a serviço ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraServicoEvento :public InterfaceServicoEvento {

};

/**
*  Classe Controladora de Vendas da camada de Serviço.
*
*  Controladora responsável por toda as informações referentes a serviço ao usuário,i.e interface pela qual o usuário utiliza
* o sistema, e captura dos comandos do usuário.
*
*/
class ControladoraServicoVendas :public InterfaceServicoVendas {

};

#endif