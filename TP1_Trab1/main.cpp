#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
    int contador = 0; 
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    TUCodigoEvento testeAgencia;

    switch(testeAgencia.run()){
        case TUCodigoEvento::SUCESSO: contador = SUCESSO;
                                break;
        case TUCodigoEvento::FALHA  : cout << "CodigoEvento: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUCodigoApresentacao testeBanco;

    switch(testeBanco.run()){
        case TUCodigoApresentacao::SUCESSO: contador = SUCESSO;
                                break;
        case TUCodigoApresentacao::FALHA  : cout << "Codigo de Apresentacao: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUCodigoIngresso testeCapacidadeAcomodacao;

    switch(testeCapacidadeAcomodacao.run()){
        case TUCodigoIngresso::SUCESSO: contador = SUCESSO;
                                break;
        case TUCodigoIngresso::FALHA  : cout << "Codigo de Ingresso: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUNomeEvento testeDiaria;

    switch(testeDiaria.run()){
        case TUNomeEvento::SUCESSO: contador = SUCESSO;
                                break;
        case TUNomeEvento::FALHA  : cout << "Nome do Evento: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: contador = SUCESSO;
                                break;
        case TUData::FALHA  : cout << "Data: FALHA\n";
                                contador = FALHA;
                                break;
    }

   TUDataValidade testeDataValidade;

    switch(testeDataValidade.run()){
        case TUDataValidade::SUCESSO: contador = SUCESSO;
                                break;
        case TUDataValidade::FALHA  : cout << "DataValidade: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUEstado testeEstado;

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: contador = SUCESSO;
                                break;
        case TUEstado::FALHA  : cout << "Estado: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUHorario testeIdentificador;

    switch(testeIdentificador.run()){
        case TUHorario::SUCESSO: contador = SUCESSO;
                                break;
        case TUHorario::FALHA  : cout << "Identificador: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUPreco testeNome;

    switch(testeNome.run()){
        case TUPreco::SUCESSO: contador = SUCESSO;
                                break;
        case TUPreco::FALHA  : cout << "Nome: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUNumeroCartaoCredito testeNumeroCartaoCredito;

    switch(testeNumeroCartaoCredito.run()){
        case TUNumeroCartaoCredito::SUCESSO: contador = SUCESSO;
                                break;
        case TUNumeroCartaoCredito::FALHA  : cout << "NumeroCartaoCredito: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUNumeroSala testeNumeroContaCorrente;

    switch(testeNumeroContaCorrente.run()){
        case TUNumeroSala::SUCESSO: contador = SUCESSO;
                                break;
        case TUNumeroSala::FALHA  : cout << "NumeroContaCorrente: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: contador = SUCESSO;
                                break;
        case TUSenha::FALHA  : cout << "Senha: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUCidade testeTipoAcomodacao;

    switch(testeTipoAcomodacao.run()){
        case TUCidade::SUCESSO: contador = SUCESSO;
                                break;
        case TUCidade::FALHA  : cout << "TipoAcomodacao: FALHA\n";
                                contador = FALHA;
                                break;
    }

    if (contador == 0)
    {
        cout << "OK!\n";
    }

    return 0;
}
