#include "testes.h"
#include "dominios.h"
#include "entidades.h"
#include <iostream>
#include <stdlib.h>


// Definições de métodos.

void TUCodigoEvento::setUp(){
    codigo = new CodigoEvento();
    estado = SUCESSO;
}

void TUCodigoEvento::tearDown(){
    delete codigo;
}

void TUCodigoEvento::testarCenarioSucesso(){
    try{
        codigo->setCodigoEvento(VALOR_VALIDO);
        if (codigo->getCodigoEvento() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoEvento::testarCenarioFalha(){
    try{
        codigo->setCodigoEvento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoEvento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigoApresentacao::setUp(){
    codigo = new CodigoApresentacao();
    estado = SUCESSO;
}

void TUCodigoApresentacao::tearDown(){
    delete codigo;
}

void TUCodigoApresentacao::testarCenarioSucesso(){
    try{
        codigo->setCodigoApresentacao(VALOR_VALIDO);
        if (codigo->getCodigoApresentacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoApresentacao::testarCenarioFalha(){
    try{
        codigo->setCodigoApresentacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoApresentacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigoIngresso::setUp(){
    codigo = new CodigoIngresso();
    estado = SUCESSO;
}

void TUCodigoIngresso::tearDown(){
    delete codigo;
}

void TUCodigoIngresso::testarCenarioSucesso(){
    try{
        codigo->setCodigoIngresso(VALOR_VALIDO);
        if (codigo->getCodigoIngresso() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoIngresso::testarCenarioFalha(){
    try{
        codigo->setCodigoIngresso(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoIngresso::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNomeEvento::setUp(){
    nm_evento = new NomeEvento();
    estado = SUCESSO;
}

void TUNomeEvento::tearDown(){
    delete nm_evento;
}

void TUNomeEvento::testarCenarioSucesso(){
    try{
        nm_evento->setNomeEvento(VALOR_VALIDO);
        if (nm_evento->getNomeEvento() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNomeEvento::testarCenarioFalha(){
    try{
        nm_evento->setNomeEvento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNomeEvento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)  
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDataValidade::setUp(){
    dataValidade = new DataValidade();
    estado = SUCESSO;
}

void TUDataValidade::tearDown(){
    delete dataValidade;
}

void TUDataValidade::testarCenarioSucesso(){
    try{
        dataValidade->setDataDeValidade(VALOR_VALIDO);
        if (dataValidade->getDataDeValidade() != (VALOR_VALIDO)) // checar! 
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUDataValidade::testarCenarioFalha(){
    try{
        dataValidade->setDataDeValidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUDataValidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEstado::setUp(){
    estadoBr = new Estado();
    estado = SUCESSO;
}

void TUEstado::tearDown(){
    delete estadoBr;
}

void TUEstado::testarCenarioSucesso(){
    try{
        estadoBr->setEstado(VALOR_VALIDO);
        if (estadoBr->getEstado() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEstado::testarCenarioFalha(){
    try{
        estadoBr->setEstado(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEstado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUIdentificador::setUp(){
    identificador = new Identificador();
    estado = SUCESSO;
}

void TUIdentificador::tearDown(){
    delete identificador;
}

void TUIdentificador::testarCenarioSucesso(){
    try{
        identificador->setIdentificador(VALOR_VALIDO);
        if (identificador->getIdentificador() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUIdentificador::testarCenarioFalha(){
    try{
        identificador->setIdentificador(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUIdentificador::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
   try{
        nome->setNome(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
    try{
        nome->setNome(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
    try{
        nome->setNome(VALOR_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
    try{
        nome->setNome(VALOR_INVALIDO5);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNumeroCartaoCredito::setUp(){
    numeroCartaoCredito = new NumeroCartaoCredito();
    estado = SUCESSO;
}

void TUNumeroCartaoCredito::tearDown(){
    delete numeroCartaoCredito;
}

void TUNumeroCartaoCredito::testarCenarioSucesso(){
    try{
        numeroCartaoCredito->setNumero(VALOR_VALIDO);
        if (numeroCartaoCredito->getNumero() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNumeroCartaoCredito::testarCenarioFalha(){
    try{
        numeroCartaoCredito->setNumero(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
 try{
        numeroCartaoCredito->setNumero(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNumeroCartaoCredito::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNumeroContaCorrente::setUp(){
    numeroContaCorrente = new NumeroContaCorrente();
    estado = SUCESSO;
}

void TUNumeroContaCorrente::tearDown(){
    delete numeroContaCorrente;
}

void TUNumeroContaCorrente::testarCenarioSucesso(){
    try{
        numeroContaCorrente->setNumero(VALOR_VALIDO);
        if (numeroContaCorrente->getNumero() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNumeroContaCorrente::testarCenarioFalha(){
    try{
        numeroContaCorrente->setNumero(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNumeroContaCorrente::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
    try{
        senha->setSenha(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
    try{
        senha->setSenha(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
    try{
        senha->setSenha(VALOR_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTipoAcomodacao::setUp(){
    tipoAcomodacao = new TipoAcomodacao();
    estado = SUCESSO;
}

void TUTipoAcomodacao::tearDown(){
    delete tipoAcomodacao;
}

void TUTipoAcomodacao::testarCenarioSucesso(){
    try{
        tipoAcomodacao->setAcomodacao(VALOR_VALIDO);
        if (tipoAcomodacao->getAcomodacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTipoAcomodacao::testarCenarioFalha(){
    try{
        tipoAcomodacao->setAcomodacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTipoAcomodacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

