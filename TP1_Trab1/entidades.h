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

	void setNome(const Nome &nome) {
		this->nome = nome;
	}
	void setIdent(const Identificador &identificador) {
		this->identificador = identificador;
	}
	void setSenha(const Senha &senha) {
		this->senha = senha;
	}

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
	TipoAcomodacao tipoAcomodacao;
	CapacidadeAcomodacao capacidadeAcomodacao;
	Data dataInicio;
	Data dataFim;
	Nome cidade;
	Estado estado;
	Diaria diaria;

public:

	// Metodos de acesso

	void setIdentificador(const Identificador &identificador) {
		this->identificador = identificador;
	}
	
	void setTipoAcomodacao(const TipoAcomodacao &tipoAcomodacao) {
		this->tipoAcomodacao = tipoAcomodacao;
	}

	void setCapacidadeAcomodacao(const CapacidadeAcomodacao &capaidadeAcomodacao) {
		this->capacidadeAcomodacao = capaidadeAcomodacao;
	}
	
	void setDataInicio(const Data &dataInicio) {
		this->dataInicio = dataInicio;
	}

	void setDataFim(const Data &dataFim) {
		this->dataFim = dataFim;
	}

	void setCidade(const Nome &cidade) {
		this->cidade = cidade;
	}

	void setEstado(const Estado &estado) {
		this->estado = estado;
	}

	void setDiaria(const Diaria &diaria) {
		this->diaria = diaria;
	}

	Identificador getIdentificador() const {
		return identificador;
	}

	TipoAcomodacao getTipoAcomodacao() const {
		return tipoAcomodacao;
	}

	CapacidadeAcomodacao getCapacidadeAcomodacao() const {
		return capacidadeAcomodacao;
	}

	Data getDataInicio() const {
		return dataInicio;
	}

	Data getDataFim() const {
		return dataFim;
	}

	Nome getCidade() const {
		return cidade;
	}

	Estado getEstado() const {
		return estado;
	}

	Diaria getDiaria() const {
		return diaria;
	}

};

class CartaoDeCredito {
private:
	NumeroCartaoCredito numeroCartaoCredito;
	DataValidade dataValidade;

public:

	// Metodos de acesso

	void setNumeroCartaoCredito(const NumeroCartaoCredito &numeroCartaoCredito) {
		this->numeroCartaoCredito = numeroCartaoCredito;
	}

	void setDataValidade(const DataValidade &dataValidade) {
		this->dataValidade = dataValidade;
	}

	NumeroCartaoCredito getNumeroCartaoCredito() const {
		return numeroCartaoCredito;
	}

	DataValidade getDataValdiade() const {
		return dataValidade;
	}
};

class ContaCorrente {
private:
	NumeroContaCorrente conta;
	Agencia agencia;
	Banco banco;

public:

	// Metodos de acesso

	void setConta(const NumeroContaCorrente &conta) {
		this->conta = conta;
	}
	void setAgencia(const Agencia &agencia) {
		this->agencia = agencia;
	}
	
	void setBanco(const Banco &banco) {
		this->banco = banco;
	}

	NumeroContaCorrente getConta() const {
		return conta;
	}

	Agencia getAgencia() const {
		return agencia;
	}

	Banco getBanc() const {
		return banco;
	}

};



#endif // ENTIDADES_H_INCLUDED