#include "testes.h"
#include "dominios.h"
#include "entidades.h"
#include <iostream>
#include <stdlib.h>


// Definições de métodos.

void TUCodigoEvento::setUp(){
    agencia = new CodigoEvento();
    estado = SUCESSO;
}

void TUCodigoEvento::tearDown(){
    delete agencia;
}

void TUCodigoEvento::testarCenarioSucesso(){
    try{
        agencia->setAgencia(VALOR_VALIDO);
        if (agencia->getAgencia() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoEvento::testarCenarioFalha(){
    try{
        agencia->setAgencia(VALOR_INVALIDO);
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

void TUBanco::setUp(){
    banco = new Banco();
    estado = SUCESSO;
}

void TUBanco::tearDown(){
    delete banco;
}

void TUBanco::testarCenarioSucesso(){
    try{
        banco->setBanco(VALOR_VALIDO);
        if (banco->getBanco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUBanco::testarCenarioFalha(){
    try{
        banco->setBanco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCapacidadeAcomodacao::setUp(){
    capacidadeAcomodacao = new CapacidadeAcomodacao();
    estado = SUCESSO;
}

void TUCapacidadeAcomodacao::tearDown(){
    delete capacidadeAcomodacao;
}

void TUCapacidadeAcomodacao::testarCenarioSucesso(){
    try{
        capacidadeAcomodacao->setCapacidade(VALOR_VALIDO);
        if (capacidadeAcomodacao->getCapacidade() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCapacidadeAcomodacao::testarCenarioFalha(){
    try{
        capacidadeAcomodacao->setCapacidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCapacidadeAcomodacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDiaria::setUp(){
    diaria = new Diaria();
    estado = SUCESSO;
}

void TUDiaria::tearDown(){
    delete diaria;
}

void TUDiaria::testarCenarioSucesso(){
    try{
        diaria->setDiaria(VALOR_VALIDO);
        if (diaria->getDiaria() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUDiaria::testarCenarioFalha(){
    try{
        diaria->setDiaria(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUDiaria::run(){
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
        data->setData(VALOR_VALIDO_DIA, VALOR_VALIDO_MES, VALOR_VALIDO_ANO);
        if (data->getData() != "20/fev/2002") // checar! 
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO_DIA, VALOR_INVALIDO_MES, VALOR_INVALIDO_ANO);
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
        dataValidade->setDataDeValidade(VALOR_VALIDO_MES, VALOR_VALIDO_ANO);
        if (dataValidade->getDataDeValidade(VALOR_VALIDO_MES, VALOR_VALIDO_ANO) != (VALOR_VALIDO_MES, VALOR_VALIDO_ANO)) // checar! 
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUDataValidade::testarCenarioFalha(){
    try{
        dataValidade->setDataDeValidade(VALOR_INVALIDO_MES, VALOR_INVALIDO_ANO);
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
        nome->setNome(VALOR_INVALIDO);
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
        numeroCartaoCredito->setNumero(VALOR_INVALIDO);
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
        senha->setSenha(VALOR_INVALIDO);
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
