#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

using namespace std;

class Usuario {
private:
	Nome nome;
	Identificador identificador;
	Senha senha;

public:

	// Metodos de acesso

	void setNome(const Nome &nome);
	void setIdent(const Identificador &identificador);
	void setSenha(const Senha &senha);

	Senha getSenha() const {
		return senha;
	}

	Nome getNome() const {
		return nome;
	}

	Identificador getIdent() const {
		return identificador;
	}
};

class Acomodacao {
private:
	Identificador identificador;
	TipoDeAcomodacao tipo;
	CapacidadeDeAcomodacao capacidade;
	Data dataIni;
	Data dataFim;
	Nome cidade;
	Estado estado;
	Diaria diaria;

public:

};

class CartaoDeCredito {
private:
	NumeroCartaoDeCredito numero;
	DataDeValidade validade;

public:

};

class ContaCorrente {
private:
	NumeroContaCorrente conta;
	Agencia agenica;
	Banco banco;

public:

};



#endif // ENTIDADES_H_INCLUDED