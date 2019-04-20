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

    TUCodigoEvento testeCodigoEvento;

    switch(testeCodigoEvento.run()){
        case TUCodigoEvento::SUCESSO: cout << "CodigoEvento: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUCodigoEvento::FALHA  : cout << "CodigoEvento: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUCodigoApresentacao testeCodigoApresentacao;

    switch(testeCodigoApresentacao.run()){
        case TUCodigoApresentacao::SUCESSO: cout << "CodigoApresentacao: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUCodigoApresentacao::FALHA  : cout << "CodigoApresentacao: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUCodigoIngresso testeCodigoIngresso;

    switch(testeCodigoIngresso.run()){
        case TUCodigoIngresso::SUCESSO: cout << "CodigoIngresso: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUCodigoIngresso::FALHA  : cout << "CodigoIngresso: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUNomeEvento testeNomeEvento;

    switch(testeNomeEvento.run()){
        case TUNomeEvento::SUCESSO: cout << "NomeEvento: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUNomeEvento::FALHA  : cout << "NomeEvento: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "Data: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUData::FALHA  : cout << "Data: FALHA\n";
                                contador = FALHA;
                                break;
    }

   TUDataValidade testeDataValidade;

    switch(testeDataValidade.run()){
        case TUDataValidade::SUCESSO: cout << "DataValidade: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUDataValidade::FALHA  : cout << "DataValidade: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUEstado testeEstado;

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: cout << "Estado: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUEstado::FALHA  : cout << "Estado: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUHorario testeHorario;

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "Horario: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUHorario::FALHA  : cout << "Horario: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUPreco testePreco;

    switch(testePreco.run()){
        case TUPreco::SUCESSO: cout << "Preco: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUPreco::FALHA  : cout << "Preco: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUNumeroCartaoCredito testeNumeroCartaoCredito;

    switch(testeNumeroCartaoCredito.run()){
        case TUNumeroCartaoCredito::SUCESSO: cout << "NumeroCartaoCredito: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUNumeroCartaoCredito::FALHA  : cout << "NumeroCartaoCredito: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUNumeroSala testeNumeroSala;

    switch(testeNumeroSala.run()){
        case TUNumeroSala::SUCESSO: cout << "NumeroSala: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUNumeroSala::FALHA  : cout << "NumeroSala: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "Senha: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUSenha::FALHA  : cout << "Senha: FALHA\n";
                                contador = FALHA;
                                break;
    }

    TUCidade testeCidade;

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "Cidade: SUCESSO\n";
								contador = SUCESSO;
                                break;
        case TUCidade::FALHA  : cout << "Cidade: FALHA\n";
                                contador = FALHA;
                                break;
    }

	TUDisponibilidade testeDisponibilidade;

	switch (testeDisponibilidade.run()) {
		case TUDisponibilidade::SUCESSO: cout << "Disponibilidade: SUCESSO\n";
								contador = SUCESSO;
								break;
		case TUDisponibilidade::FALHA: cout << "Disponibilidade: FALHA\n";
								contador = FALHA;
								break;
	}

	TUClasseEvento testeClasseEvento;

	switch (testeClasseEvento.run()) {
		case TUClasseEvento::SUCESSO: cout << "ClasseEvento: SUCESSO\n";
								contador = SUCESSO;
								break;
		case TUClasseEvento::FALHA: cout << "ClasseEvento: FALHA\n";
								contador = FALHA;
								break;
	}

	TUFaixaEtaria testeFaixaEtaria;

	switch (testeFaixaEtaria.run()) {
		case TUFaixaEtaria::SUCESSO: cout << "FaixaEtaria: SUCESSO\n";
								contador = SUCESSO;
								break;
		case TUFaixaEtaria::FALHA: cout << "FaixaEtaria: FALHA\n";
								contador = FALHA;
								break;
	}

	TUCPF testeCPF;

	switch (testeCPF.run()) {
		case TUCPF::SUCESSO: cout << "CPF: SUCESSO\n";
								contador = SUCESSO;
								break;
		case TUCPF::FALHA: cout << "CPF: FALHA\n";
								contador = FALHA;
								break;
	}

	TUCodigoSeguranca testeCodigoSeguranca;

	switch (testeCodigoSeguranca.run()) {
		case TUCodigoSeguranca::SUCESSO: cout << "CodigoSeguranca: SUCESSO\n";
								contador = SUCESSO;
								break;
		case TUCodigoSeguranca::FALHA: cout << "CodigoSeguranca: FALHA\n";
								contador = FALHA;
								break;
	}

    if (contador == 0)
    {
        cout << "OK!\n";
    }

    return 0;
}
