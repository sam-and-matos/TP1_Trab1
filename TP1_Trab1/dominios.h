/** 
 *  @file dominios.h
 *  Assinatura de todos os domínios do software de hospedagem em viagens.
 *  
 *  Estes domínios são implementados por um misto de classes e funções, e estas
 *  são capazes de descrever cada um dos domínios necessários para o software de 
 *  hospedagem em viagens.
 */

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <list>


using namespace std;

// Funções auxiliares

/** 
 *  Função que checa se o número do cartão de crédito é válido.
 *  
 *  A função analisa o número informado pelo usuário como seu
 *  número de cartão de crédito e checa se esse número é válido
 *  ou não.
 * 
 *  @param numero string que contém o número informado pelo usuário.  
 */
bool checkLuhn(string numero);
 
// Declaração de classes

/** 
 *  Classe da agência.
 *  
 *  A classe descreve uma agência. Seus métodos validam a agência,
 *  criam essa agência e retornam a agência criada ao usuário.  
 */
class Agencia {
	private:
		string agencia; /**< string que contém o número da agência */

		// Limite de caracters que agencia pode ter e os codigos ASCII que podem compor agencia

		const static int ASCII_0 = '0'; /**< inteiro correspondente ao caracter 0 na tabela ASCII */
		const static int ASCII_9 = '9'; /**< inteiro correspondente ao caracter 9 na tabela ASCII */
		const static int LIMITE = 5; /**< inteiro correspondente ao limite de caracteres da string agencia */

		// Metodo de validacao
		/**
		 * Método para validação da agência.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * agencia. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 5 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param agencia string que contém os números correspondente à agência. 
		*/
		void validar(string) throw (invalid_argument); 

	public:
		// Metodos de acesso
		
		/**
		 * Método para criação da agência.
		 * 
		 * Esse método invoca o outro método Agencia::validar() para validar
		 * o valor fornecido pelo usuário para a string agencia. Se ele for 
		 * válido, a agência é criada contendo aquele valor específico. Se 
		 * ele não for válido, a agência não é criada. 
		 * 
		 * @param agencia string que contém os números correspondente à agência. 
		 * 
		 * @see Agencia::validar()
		*/
		void setAgencia(string) throw (invalid_argument);

		/**
		 * Método para o acesso à agência.
		 * 
		 * Esse método acessa a agência passada como parâmetro e 
		 * retorna o seu valor. 
		 * 
		 * @param agencia string que contém os números correspondente à agência. 
		 * 
		*/
		string getAgencia() const {
			return agencia;
		}
};

/** 
 *  Classe do número banco.
 *  
 *  A classe descreve um número de banco. Seus métodos validam um 
 *  número de banco, criam esse número e retornam o número criado 
 *  ao usuário.  
 */
class Banco {
	private:
		string banco; /**< string que contém o número do banco */

		// Limite do tamanho da string e limite de caracters ASCII aceitos
		const static int ASCII_0 = '0'; /**< inteiro correspondente ao caracter 0 na tabela ASCII */
		const static int ASCII_9 = '9'; /**< inteiro correspondente ao caracter 9 na tabela ASCII */
		const static int LIMITE = 3; /**< inteiro correspondente ao limite de caracteres da string banco */

		// Metodo de validacao
		
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw (invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação do banco.
		 * 
		 * Esse método invoca o outro método Banco::validar() para validar
		 * o valor fornecido pelo usuário para a string banco. Se ele for 
		 * válido, a string com o número do banco é criada contendo aquele 
		 * valor específico. Se ele não for válido, a string não é criada. 
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		 * 
		 * @see Banco::validar()
		*/
		void setBanco(string) throw (invalid_argument);

		/**
		 * Método para o acesso ao banco.
		 * 
		 * Esse método acessa o número do banco passado como parâmetro e 
		 * retorna o seu valor. 
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		 * 
		*/
		string getBanco() const {
			return banco;
		}
};

/** 
 *  Classe da capacidade de acomodação.
 *  
 *  A classe descreve o número da capacidade de acomodação de uma 
 *  determinada seção da hospedagem. Seus métodos validam um 
 *  número de capacidade de acomodação, criam esse número e retornam 
 *  o número criado ao usuário.   
 */
class CapacidadeAcomodacao {
	private:
		int CapacidadeDeAcomodacaoNum; /**< inteiro que contém o valor correspondente 
		à capacidade de acomodação */

		const static int LIMITE_MIN = 1; /**< inteiro correspondente ao limite mínimo de 
		algarismos do inteiro CapacidadeDeAcomodacaoNum */
		const static int LIMITE_MAX = 9; /**< inteiro correspondente ao limite máximo de 
		algarismos do inteiro CapacidadeDeAcomodacaoNum */

		// Metodo de validacao

		/**
		 * Método para validação da capacidade de acomodação.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para o inteiro 
		 * correspondente à capacidade de acomodação. Se ele for inválido, é 
		 * lançada a exceção de argumento inválido. Se for válido, nada é 
		 * feito. O valor será inválido se tiver menos de 1 algarismo ou mais 
		 * de 9 algorismos.
		 * 
		 * @param capacidadeAcomodacao inteiro correspondente à capacidade de acomodação. 
		*/
		void validar(int) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setCapacidade(int) throw(invalid_argument);

		int getCapacidade() const {
			return CapacidadeDeAcomodacaoNum;
		}
};

/** 
 *  Classe do valor da diária.
 *  
 *  A classe descreve o valor de uma diária. Seus métodos validam o 
 *  valor da diária, criam esse valor e retornam o valor criado 
 *  ao usuário.  
 */
class Diaria {
	private:
		float valorDiaria;

		// Metodo de validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(float) throw (invalid_argument);

	public:
		// Metodos de acesso

		void setDiaria(float) throw (invalid_argument);

		float getDiaria() const {
			return valorDiaria;
		}
};

/** 
 *  Classe da data.
 *  
 *  A classe descreve uma data. Seus métodos validam a data,
 *  criam essa data e retornam a data criada ao usuário.  
 */
class Data {
	private:
		int dia;
		string mes;
		int ano;

		// Defincao dos limites para Dia e Ano

		const static int DIA_MIN = 1;
		const static int DIA_MAX = 31;
		const static int ANO_MIN = 2000;
		const static int ANO_MAX = 2099;

		// Metodo de validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(int, string, int) throw(invalid_argument);
	public:
		// Metodos de acesso

		void setData(int, string, int) throw (invalid_argument);

		string getData() const {
			string data;
			data += std::to_string(dia);
			data += '/';
			data += mes;
			data += '/';
			data += std::to_string(ano);
			return data;
		}
};

/** 
 *  Classe da data de validade.
 *  
 *  A classe descreve uma data de validade. Seus métodos validam 
 *  a data de validade, criam essa data de validade e retornam a 
 *  data de validade criada ao usuário.  
 */
class DataValidade {
	private:
		int month, year;

		const static int MES_MIN = 1;
		const static int MES_MAX = 12;
		const static int ANO_MIN = 00;
		const static int ANO_MAX = 99;
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(int, int) throw(invalid_argument);
	public:

		void setDataDeValidade(int, int) throw(invalid_argument);

		int getDataDeValidade(int, int) const {
			return month, year;
		}
};

/** 
 *  Classe do estado.
 *  
 *  A classe descreve um estado. Seus métodos validam a sigla do
 *  estado, criam esse estado com essa sigla e retornam a sigla 
 *  criada ao usuário.  
 */
class Estado {
	private:
		string estado;

		// Limite de tamanho de estado

		const static int LIMITE = 2;

		// Metodo de valdiacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setEstado(string) throw(invalid_argument);

		string getEstado() const {
			return estado;
		}
};

/** 
 *  Classe do identificador.
 *  
 *  A classe descreve um identificador. Seus métodos validam o identificador,
 *  criam esse identificador e retornam o identificador criada ao usuário.  
 */
class Identificador {
	private:
		string identificador;

		// Limite do tamanho minimo do identificador e dos caractere ASCII que podem compor ele.
		const static int LIMITE = 5;
		const static int ASCII_a = 97;
		const static int ASCII_z = 122;

		// Metodo de validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setIdentificador(string) throw(invalid_argument);

		string getIdentificador() const {
			return identificador;
		}
};

/** 
 *  Classe do nome.
 *  
 *  A classe descreve um nome. Seus métodos validam o nome,
 *  criam esse nome e retornam o nome criado ao usuário.  
 */
class Nome {
	private:
		string nome;

		// Definicoes de limites para os caracteres do nome em codigo ASCII 

		const static int LIMITE = 15;
		const static int ASCII_a = 'a';
		const static int ASCII_z = 'z';
		const static int ASCII_A = 'A';
		const static int ASCII_Z = 'Z';
		const static int SPACO = ' ';
		const static int PONTO = '.';

		// Metodo de validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setNome(string) throw(invalid_argument);

		string getNome() const {
			return nome;
		}
};

/** 
 *  Classe do número de cartão de crédito.
 *  
 *  A classe descreve uma número de cartão de crédito. Seus 
 *  métodos validam o número de cartão de crédito, criam 
 *  esse número e retornam o número de cartão de crédito criado 
 *  ao usuário.  
 */
class NumeroCartaoCredito {
	private:
		string numero;

		// Quantidade minima de numeros que o numero do cartao deve ter

		const static int LIMITE = 16;

		// Metodo de validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw (invalid_argument);

	public:

		//Metodos de acesso

		void setNumero(string) throw(invalid_argument);

		string getNumero() const {
			return numero;
		}

};

/** 
 *  Classe do número de conta corrente.
 *  
 *  A classe descreve uma número de conta corrente. Seus 
 *  métodos validam o número de conta corrente, criam 
 *  esse número e retornam o número de conta corrente criado 
 *  ao usuário.  
 */
class NumeroContaCorrente {
	private:
		string numero;

		// Limite do minimo de numeros que a conta tem que ter e os valors do codigo ASCIIII dos 0 e do 9
		const static int LIMITE = 6;
		const static int ASCII_0 = 48;
		const static int ASCII_9 = 57;

		// Metodo de validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw(invalid_argument);

	public:

		// Metodos de acesso

		void setNumero(string) throw(invalid_argument);

		string getNumero() const {
			return numero;
		}
};

/** 
 *  Classe da senha.
 *  
 *  A classe descreve uma senha. Seus métodos validam a senha,
 *  criam essa senha e retornam a senha criada ao usuário.  
 */
class Senha{
	private:
		string senha;
		
		// Limite de carcters que a senha deve ter bem 
		// como os codigos ASCII dos caracteres permitidos
		const static int LIMITE = 8;
		const static int ASCII_a = 'a';
		const static int ASCII_z = 'z';
		const static int ASCII_A = 'A';
		const static int ASCII_Z = 'Z';
		const static int ASCII_0 = '0';
		const static int ASCII_9 = '9';
		const static int ASCII_SIMB_MIN = 33;
		const static int ASCII_SIMB_MAX = 38;
		const static char SIMBOLO_EXCESSAO = '"';

		// Metodo para validacao
		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw(invalid_argument);
	public:

		// Metodos de acesso

		void setSenha(string) throw(invalid_argument);

		string getSenha() const {
			return senha;
		}
};

/** 
 *  Classe do tipo de acomodação.
 *  
 *  A classe descreve um tipo de acomodação. Seus métodos validam 
 *  o tipo de acomodação, criam esse tipo e retornam o tipo de
 *  acomodação criado ao usuário.  
 */
class TipoAcomodacao {
	private:
		string tipo;

		// Metodo de validacao

		/**
		 * Método para validação do banco.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do banco. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 caracteres, e também se seus valores
		 * forem diferentes de 0 até 9 na tabela ASCII.
		 * 
		 * @param banco string que contém os números correspondente ao banco. 
		*/
		void validar(string) throw(invalid_argument);

	public:

		// Metodos de acesso

		void setAcomodacao(string) throw(invalid_argument);

		string getAcomodacao() const {
			return tipo;
		}
};

#endif // DOMINIOS_H_INCLUDED