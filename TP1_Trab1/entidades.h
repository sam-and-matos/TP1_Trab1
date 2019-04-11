/** 
 *  @file entidades.h
 *  Assinatura de todas as entidades do software de hospedagem em viagens.
 *  
 *  Estas entidades são implementados por classes contendo os domínios do
 *  software de hospedagem em viagens e métodos para o usuário conseguir
 *  trabalhar com as entidades desse software.
 */

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

using namespace std;

/** 
 *  Classe do Usuário.
 *  
 *  A classe descreve um usuário, composto pelas seguintes classes de
 *  domínios: Nome, Identificador e Senha. Seus métodos criam os domínios 
 *  e o retornam se necessário.  
 */
class Usuario {

	private:
		Nome nome; /**< classe que contém o nome do usuário */
		Identificador identificador; /**< classe que contém o identificador do usuário */
		Senha senha; /**< classe que contém a senha do usuário */

	public:

		// Metodos de acesso

		/**
		 * Método para criação da classe do nome.
		 * 
		 * Esse método cria uma classe Nome para o nome da entidade "Usuário".
		 * 
		 * @param nome o ponteiro para a classe "nome" que será criada
		 * 
		 * @see Nome
		 * 
		*/
		void setNome(const Nome &nome) {
			this->nome = nome;
		}

		/**
		 * Método para criação da classe do identificador.
		 * 
		 * Esse método cria uma classe Identificador para o 
		 * identificador da entidade "Usuário".
		 * 
		 * @param identificador o ponteiro para a classe "identificador" 
		 * que será criada
		 * 
		 * @see Identificador
		 * 
		*/
		void setIdentificador(const Identificador &identificador) {
			this->identificador = identificador;
		}

		/**
		 * Método para criação da classe da senha.
		 * 
		 * Esse método cria uma classe Senha para a senha da entidade "Usuário".
		 * 
		 * @param senha o ponteiro para a classe "senha" que será criada
		 * 
		 * @see Senha
		 * 
		*/
		void setSenha(const Senha &senha) {
			this->senha = senha;
		}

		/**
		 * Método para o acesso à classe da senha.
		 * 
		 * Esse método acessa a classe da senha relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe da senha. 
		 * 
		*/
		Senha getSenha() const {
			return senha;
		}

		/**
		 * Método para o acesso à classe do nome.
		 * 
		 * Esse método acessa a classe do nome relacionado a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe do nome. 
		 * 
		*/
		Nome getNome() const {
			return nome;
		}

		/**
		 * Método para o acesso à classe do identificador.
		 * 
		 * Esse método acessa a classe do identificador relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe do identificador. 
		 * 
		*/
		Identificador getIdentificador() const {
			return identificador;
		}
};

/** 
 *  Classe da Acomodação.
 *  
 *  A classe descreve uma acomodação, composta pelas seguintes classes de
 *  domínios: Identificador, TipoAcomodacao (tipo de acomodação), uma 
 *  CapacidadeAcomodacao (capacidade de acomodação), duas classes de Data 
 *  (uma de início e uma de fim), Nome, Estado e Diária. Seus métodos 
 *  criam os domínios e o retornam se necessário.  
 */
class Acomodacao {
	private:
		Identificador identificador; /**< classe que contém o identificador da acomodação */
		TipoAcomodacao tipoAcomodacao; /**< classe que contém o tipo da acomodação */
		CapacidadeAcomodacao capacidadeAcomodacao; /**< classe que contém a capacidade da acomodação */
		Data dataInicio; /**< classe que contém a data de início da acomodação */
		Data dataFim; /**< classe que contém a data de fim da acomodação */
		Nome cidade; /**< classe que contém o nome da cidade da acomodação */
		Estado estado; /**< classe que contém o estado brasileiro da acomodação */
		Diaria diaria; /**< classe que contém a diária da acomodação */

	public:

		// Metodos de acesso

		/**
		 * Método para criação da classe do identificador da acomodação.
		 * 
		 * Esse método cria uma classe Identificador para a entidade 
		 * "Acomodacao".
		 * 
		 * @param identificador o ponteiro para a classe "identificador" que será criada
		 * 
		 * @see Identificador
		 * 
		*/
		void setIdentificador(const Identificador &identificador) {
			this->identificador = identificador;
		}
		
		/**
		 * Método para criação da classe do tipo da acomodação.
		 * 
		 * Esse método cria uma classe TipoAcomodacao para a entidade 
		 * "Acomodacao".
		 * 
		 * @param tipoAcomodacao o ponteiro para a classe "tipoAcomodacao" que será criada
		 * 
		 * @see TipoAcomodacao
		 * 
		*/
		void setTipoAcomodacao(const TipoAcomodacao &tipoAcomodacao) {
			this->tipoAcomodacao = tipoAcomodacao;
		}

		/**
		 * Método para criação da classe da capacidade da acomodação.
		 * 
		 * Esse método cria uma classe CapacidadeAcomodacao para a entidade 
		 * "Acomodacao".
		 * 
		 * @param capaidadeAcomodacao o ponteiro para a classe "capaidadeAcomodacao" que será criada
		 * 
		 * @see CapacidadeAcomodacao
		 * 
		*/
		void setCapacidadeAcomodacao(const CapacidadeAcomodacao &capaidadeAcomodacao) {
			this->capacidadeAcomodacao = capaidadeAcomodacao;
		}
		
		/**
		 * Método para criação da classe da data de início da acomodação.
		 * 
		 * Esse método cria uma classe Data correspondente à data de início 
		 * da acomodação para a entidade "Acomodacao".
		 * 
		 * @param dataInicio o ponteiro para a classe "dataInicio" que será criada
		 * 
		 * @see Data
		 * 
		*/
		void setDataInicio(const Data &dataInicio) {
			this->dataInicio = dataInicio;
		}

		/**
		 * Método para criação da classe da data de fim da acomodação.
		 * 
		 * Esse método cria uma classe Data correspondente à data de fim 
		 * da acomodação para a entidade "Acomodacao".
		 * 
		 * @param dataFim o ponteiro para a classe "dataFim" que será criada
		 * 
		 * @see Data
		 * 
		*/
		void setDataFim(const Data &dataFim) {
			this->dataFim = dataFim;
		}

		/**
		 * Método para criação da classe da cidade da acomodação.
		 * 
		 * Esse método cria uma classe Nome correspondente à cidade 
		 * da acomodação para a entidade "Acomodacao".
		 * 
		 * @param cidade o ponteiro para a classe "cidade" que será criada
		 * 
		 * @see Nome
		 * 
		*/
		void setCidade(const Nome &cidade) {
			this->cidade = cidade;
		}

		/**
		 * Método para criação da classe do estado da acomodação.
		 * 
		 * Esse método cria uma classe Estado correspondente ao estado brasileiro 
		 * da acomodação para a entidade "Acomodacao".
		 * 
		 * @param estado o ponteiro para a classe "estado" que será criada
		 * 
		 * @see Estado
		 * 
		*/
		void setEstado(const Estado &estado) {
			this->estado = estado;
		}

		/**
		 * Método para criação da classe da diária da acomodação.
		 * 
		 * Esse método cria uma classe Diaria correspondente à diária 
		 * da acomodação para a entidade "Acomodacao".
		 * 
		 * @param diaria o ponteiro para a classe "diaria" que será criada
		 * 
		 * @see Diaria
		 * 
		*/
		void setDiaria(const Diaria &diaria) {
			this->diaria = diaria;
		}

		/**
		 * Método para o acesso à classe do identificador.
		 * 
		 * Esse método acessa a classe do identificador relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe do identificador. 
		 * 
		*/
		Identificador getIdentificador() const {
			return identificador;
		}

		/**
		 * Método para o acesso à classe do tipo de acomodação.
		 * 
		 * Esse método acessa a classe do tipo de acomodação relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe do tipo de acomodação. 
		 * 
		*/
		TipoAcomodacao getTipoAcomodacao() const {
			return tipoAcomodacao;
		}

		/**
		 * Método para o acesso à classe da capacidade de acomodação.
		 * 
		 * Esse método acessa a classe da capacidade de acomodação relacionada 
		 * a ele no código principal e retorna essa classe. 
		 * 
		 * @return a classe da capacidade de acomodação. 
		 * 
		*/
		CapacidadeAcomodacao getCapacidadeAcomodacao() const {
			return capacidadeAcomodacao;
		}

		/**
		 * Método para o acesso à data de início da hospedagem.
		 * 
		 * Esse método acessa a classe Data que contém data de início 
		 * da hospedagem. Retorna a classe com a data de início. 
		 * 
		 * @return a classe da data de início da hospedagem. 
		 * 
		*/
		Data getDataInicio() const {
			return dataInicio;
		}

		/**
		 * Método para o acesso à data de fim da hospedagem.
		 * 
		 * Esse método acessa a classe Data que contém data de fim 
		 * da hospedagem. Retorna a classe com a data de início.
		 * 
		 * @return a classe da data de fim da hospedagem. 
		 * 
		*/
		Data getDataFim() const {
			return dataFim;
		}

		/**
		 * Método para o acesso à cidade da hospedagem.
		 * 
		 * Esse método acessa a classe Nome que contém cidade 
		 * da hospedagem. Retorna a classe com a cidade.
		 * 
		 * @return a classe da cidade da hospedagem. 
		 * 
		*/
		Nome getCidade() const {
			return cidade;
		}

		/**
		 * Método para o acesso à classe do estado.
		 * 
		 * Esse método acessa a classe do estado relacionado a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe do estado. 
		 * 
		*/
		Estado getEstado() const {
			return estado;
		}

		/**
		 * Método para o acesso à classe da diária.
		 * 
		 * Esse método acessa a classe da diária relacionado a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe da diária. 
		 * 
		*/
		Diaria getDiaria() const {
			return diaria;
		}
};

/** 
 *  Classe do Cartão de Créditos.
 *  
 *  A classe descreve um cartão de crédito, composto pelas seguintes classes de
 *  domínios: NumeroCartaoCredito (número de cartão de crédito) e DataValidade
 *  (data de validade). Seus métodos criam os domínios e o retornam se necessário.  
 */
class CartaoDeCredito {
	private:
		NumeroCartaoCredito numeroCartaoCredito; /**< classe que contém o número do cartão de crédito */
		DataValidade dataValidade; /**< classe que contém a data de validade do cartão de crédito */

	public:

		// Metodos de acesso

		/**
		 * Método para criação da classe do número do cartão de crédito.
		 * 
		 * Esse método cria uma classe NumeroCartaoCredito para a entidade 
		 * "CartaoDeCredito".
		 * 
		 * @param numeroCartaoCredito o ponteiro para a classe "numeroCartaoCredito" 
		 * que será criada
		 * 
		 * @see NumeroCartaoCredito
		 * 
		*/
		void setNumeroCartaoCredito(const NumeroCartaoCredito &numeroCartaoCredito) {
			this->numeroCartaoCredito = numeroCartaoCredito;
		}

		/**
		 * Método para criação da classe da data de validade do cartão de crédito.
		 * 
		 * Esse método cria uma classe DataValidade para a entidade 
		 * "CartaoDeCredito".
		 * 
		 * @param dataValidade o ponteiro para a classe "dataValidade" 
		 * que será criada
		 * 
		 * @see DataValidade
		 * 
		*/
		void setDataValidade(const DataValidade &dataValidade) {
			this->dataValidade = dataValidade;
		}

		/**
		 * Método para o acesso à classe do número cartão de crédito.
		 * 
		 * Esse método acessa a classe do número do cartão de crédito 
		 * relacionado a ele no código principal e retorna essa classe. 
		 * 
		 * @return a classe do número do cartão de crédito. 
		 * 
		*/
		NumeroCartaoCredito getNumeroCartaoCredito() const {
			return numeroCartaoCredito;
		}

		/**
		 * Método para o acesso à classe da data de validade.
		 * 
		 * Esse método acessa a classe da data de validade relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe da data de validade. 
		 * 
		*/
		DataValidade getDataValidade() const {
			return dataValidade;
		}
};

/** 
 *  Classe da Conta Corrente.
 *  
 *  A classe descreve uma conta corrente, composta pelas seguintes classes de
 *  domínios: NumeroContaCorrente (número de conta corrente), Agencia e Banco.
 *  Seus métodos criam os domínios e o retornam se necessário.  
 */
class ContaCorrente {
	private:
		NumeroContaCorrente conta; /**< classe que contém o número da conta corrente */
		Agencia agencia; /**< classe que contém a agência da conta corrente */
		Banco banco; /**< classe que contém o banco da conta corrente */

	public:

		// Metodos de acesso

		/**
		 * Método para criação da classe do número da conta corrente.
		 * 
		 * Esse método cria uma classe NumeroContaCorrente para a entidade 
		 * "ContaCorrente".
		 * 
		 * @param conta o ponteiro para a classe "conta" que será criada
		 * 
		 * @see NumeroContaCorrente
		 * 
		*/
		void setConta(const NumeroContaCorrente &conta) {
			this->conta = conta;
		}

		/**
		 * Método para criação da classe da agência da conta corrente.
		 * 
		 * Esse método cria uma classe Agencia para a entidade 
		 * "ContaCorrente".
		 * 
		 * @param agencia o ponteiro para a classe "agencia" que será criada
		 * 
		 * @see Agencia
		 * 
		*/
		void setAgencia(const Agencia &agencia) {
			this->agencia = agencia;
		}
		
		/**
		 * Método para criação da classe do banco da conta corrente.
		 * 
		 * Esse método cria uma classe Banco para a entidade 
		 * "ContaCorrente".
		 * 
		 * @param banco o ponteiro para a classe "banco" que será criada
		 * 
		 * @see Banco
		 * 
		*/
		void setCodigoApresentacao(const Banco &banco) {
			this->banco = banco;
		}

		/**
		 * Método para o acesso à da conta corrente.
		 * 
		 * Esse método acessa a classe da conta corrente relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe da conta corrente. 
		 * 
		*/
		NumeroContaCorrente getConta() const {
			return conta;
		}

		/**
		 * Método para o acesso à classe da agência.
		 * 
		 * Esse método acessa a classe da agência relacionada a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe de agência. 
		 * 
		*/
		Agencia getAgencia() const {
			return agencia;
		}

		/**
		 * Método para o acesso à classe do banco.
		 * 
		 * Esse método acessa a classe do banco relacionado a ele no 
		 * código principal e retorna essa classe. 
		 * 
		 * @return a classe de banco. 
		 * 
		*/
		Banco getBanc() const {
			return banco;
		}
};



#endif // ENTIDADES_H_INCLUDED