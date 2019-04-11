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
* Funcao que checa se dada string é composta só por números.
*
* A função analisa todos os caracteres da string e retorna True se
* a string for composta só por números e False se ao menos um caracter
* não for número.
*
* @param string fornecida pelo usuário.
*/
bool checkNumero (string numero);

// Declara��o de classes


/** 
 *  Classe da agência.
 *  
 *  A classe descreve uma agência. Seus métodos validam a agência,
 *  criam essa agência e retornam a agência criada ao usuário.  
 */

class CodigoEvento {
	private:

		string agencia; /**< string que contém o número da agência */

		// Limite de caracters que agencia pode ter e os codigos ASCII que podem compor agencia

		const static int ASCII_0 = '0'; /**< inteiro correspondente ao caracter "0" na tabela ASCII */
		const static int ASCII_9 = '9'; /**< inteiro correspondente ao caracter "9" na tabela ASCII */
		const static int LIMITE = 5; /**< inteiro correspondente ao limite de caracteres da string agencia */

		string codigo;

		// Limite do tamanho da string, i.e. quantidade de digitos.
		const static int LIMITE = 5;

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
		 * Esse método acessa a agência relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da agência. 
		 * 
		*/
		string getAgencia() const {
			return agencia;


		void setCodigoEvento(string) throw (invalid_argument);

		string getCodigoEvento() const {
			return codigo;

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
		const static int ASCII_0 = '0'; /**< inteiro correspondente ao caracter "0" na tabela ASCII */
		const static int ASCII_9 = '9'; /**< inteiro correspondente ao caracter "9" na tabela ASCII */
		const static int LIMITE = 3; /**< inteiro correspondente ao limite de caracteres da string banco */

class CodigoApresentacao {
	private:
		string codigo;

		// Limite do tamanho da string, i.e. quantidade de digitos.
		const static int LIMITE = 3;


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
		 * Esse método acessa o número do banco relacionado a ele no 
		 * código principalpassado e retorna o seu valor. 
		 * 
		 * @return valor do número do banco. 
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
		 * de 9 algarismos.
		 * 
		 * @param capacidadeAcomodacao inteiro correspondente à capacidade de acomodação. 
		*/
		void validar(int) throw(invalid_argument);

		void setCodigoApresetacao(string) throw (invalid_argument);

		string getCodigoApresetacao() const {
			return codigo;
		}
};

class CodigoIngresso {
	private:
		string codigo;

		// Limite do tamanho da string, i.e. quantidade de digitos.
		const static int LIMITE_MIN = 1;

		// Metodo de validacao

		void validar(string) throw(invalid_argument);


	public:
		// Metodos de acesso


		/**
		 * Método para criação da capacidade de acomodação.
		 * 
		 * Esse método invoca o outro método CapacidadeAcomodacao::validar() 
		 * para validar o valor fornecido pelo usuário para o inteiro 
		 * correspondente à capacidade de acomodação. Se ele for válido, a 
		 * capacidade de acomodação é criada contendo aquele valor específico. 
		 * Se ele não for válido, a capacidade de acomodação não é criada. 
		 * 
		 * @param capacidadeAcomodacao inteiro correspondente à capacidade de acomodação. 
		 * 
		 * @see CapacidadeAcomodacao::validar()
		*/
		void setCapacidade(int) throw(invalid_argument);

		/**
		 * Método para o acesso à capacidade de acomodação.
		 * 
		 * Esse método acessa a capacidade de acomodação relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da capacidade de acomodação. 
		 * 
		*/
		int getCapacidade() const {
			return CapacidadeDeAcomodacaoNum;

		void setCodigoIngresso(string) throw(invalid_argument);

		string getCodigoIngresso() const {
			return codigo;
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
		float valorDiaria; /**< float que contém o valor da diária */

		// Metodo de validacao

		/**
		 * Método para validação da diária.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para o float 
		 * correspondente ao preço da diária. Se ele for inválido, é lançada 
		 * a exceção de argumento inválido. Se for válido, nada é feito. O 
		 * valor será inválido se for menor que o preço mínimo da diária (1.00), 
		 * ou maior que o preço máximo (10000.00).
		 * 
		 * @param valorDiaria float correspondente ao preço diária. 
		*/
		void validar(float) throw (invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação da diária.
		 * 
		 * Esse método invoca o outro método Diaria::validar() para validar
		 * o valor fornecido pelo usuário para o float valorDiaria. Se ele 
		 * for válido, a diária é criada contendo aquele valor específico. 
		 * Se ele não for válido, a diária não é criada. 
		 * 
		 * @param valorDiaria float correspondente ao preço diária.  
		 * 
		 * @see Diaria::validar()
		*/
		void setDiaria(float) throw (invalid_argument);

		/**
		 * Método para o acesso à diária.
		 * 
		 * Esse método acessa o valor da diária relacionado a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da diária. 
		 * 
		*/
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
		int dia; /**< inteiro que corresponde ao dia */
		string mes; /**< string que corresponde ao mês */
		int ano; /**< inteiro que corresponde ao ano */

		// Defincao dos limites para Dia e Ano

		const static int DIA_MIN = 1; /**< inteiro que corresponde ao dia mínimo */
		const static int DIA_MAX = 31; /**< inteiro que corresponde ao dia máximo */
		const static int ANO_MIN = 2000; /**< inteiro que corresponde ao ano mínimo */
		const static int ANO_MAX = 2099; /**< inteiro que corresponde ao ano máximo */

		// Metodo de validacao
		/**
		 * Método para validação da data.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para os inteiros
		 * correspondentes ao dia e ao ano, e também analisa a string fornecida 
		 * pelo usuário para o mês. Se esses parâmetros forem inválidos, é 
		 * lançada a exceção de argumento inválido. Se for válido, nada é feito.
		 * O dia será inválido se for menor do que 1 e maior do que 31; o mês
		 * será inválido se for diferente de "jan", "fev", "mar", "abr", "mai",
		 * "jun", "jul", "ago", "set", "out", "nov", "dez"; o ano será inválido
		 * se for menor que 2000 ou maior que 2099.
		 * 
		 * @param dia inteiro que corresponde ao dia.
		 * @param mes string que corresponde ao mês.
		 * @param ano inteiro que corresponde ao ano.
		 * 		   
		*/
		void validar(int, string, int) throw(invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação da data.
		 * 
		 * Esse método invoca o outro método Data::validar() para validar
		 * o valor fornecido pelo usuário para o inteiro dia, a string mês
		 * e o inteiro ano. Se eles forem válidos, a data é criada contendo 
		 * aqueles valores específicos. Se eles não forem válidos, a data 
		 * não é criada. 
		 * 
		 * @param dia inteiro que corresponde ao dia.
		 * @param mes string que corresponde ao mês.
		 * @param ano inteiro que corresponde ao ano.
		 * 
		 * @see Data::validar()
		*/
		void setData(int, string, int) throw (invalid_argument);

		/**
		 * Método para o acesso à data.
		 * 
		 * Esse método acessa a data relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da data. 
		 * 
		*/
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
		int mes, ano; /**< inteiros que corresponde ao dia e ao ano */
		
		const static int MES_MIN = 1; /**< inteiro que corresponde ao dia mínimo */
		const static int MES_MAX = 12; /**< inteiro que corresponde ao dia máximo */
		const static int ANO_MIN = 00; /**< inteiro que corresponde ao ano mínimo */
		const static int ANO_MAX = 99; /**< inteiro que corresponde ao ano  máximo */
		
		// Metodos de validacao

		/**
		 * Método para validação da data de validade.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para os inteiros
		 * correspondentes ao mês e ao ano. Se esses parâmetros forem inválidos, 
		 * é lançada a exceção de argumento inválido. Se for válido, nada é 
		 * feito. O mês será inválido se for menor do que 1 e maior do que 12; 
		 * o ano será inválido se for menor que 00 ou maior que 99.
		 * 
		 * @param mes inteiro que corresponde ao mês.
		 * @param ano inteiro que corresponde ao ano.
		 * 		   
		*/
		void validar(int, int) throw(invalid_argument);

	public:

		/**
		 * Método para criação da data de validade.
		 * 
		 * Esse método invoca o outro método DataValidade::validar() para validar
		 * os inteiros de dia e de ano fornecidos pelo usuário para . Se eles forem 
		 * válidos, a data de validade é criada contendo aqueles valores específicos. 
		 * Se não forem válidos, a data de validade não é criada. 
		 * 
		 * @param mes inteiro que corresponde ao mês.
		 * @param ano inteiro que corresponde ao ano.
		 * 
		 * @see DataValidade::validar()
		*/
		void setDataDeValidade(int, int) throw(invalid_argument);

		/**
		 * Método para o acesso à data de validade.
		 * 
		 * Esse método acessa a data de validade relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da data de validade. 
		 * 
		*/
		int getDataDeValidade(int, int) const {
			return mes, ano;
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
		string estado; /**< string que contém a sigla de um estado brasileiro */

		// Limite de tamanho de estado

		const static int LIMITE = 2; /**< inteiro correspondente ao limite de caracteres da string estado */

		// Metodo de valdiacao

		/**
		 * Método para validação do estado.
		 * 
		 * Esse método analisa a string fornecido pelo usuário para corresponder
		 * à sigla de um estado do Brasil. Se ele for inválido, é lançada a 
		 * exceção de argumento inválido. Se for válido, nada é feito. O valor 
		 * será inválido se for diferente de "AC", "AL", "AP", "AM", "BA", "CE",
		 * "DF", "ES", "GO", "MA", "MG", "MS", "MT", "PA", "PB", "PE", "PI",
		 * "PR", "RJ", "RN", "RO", "RR", "RS", "SC", "SE", "SP", "TO".
		 * 
		 * @param estado string que contém a sigla de um estado brasileiro. 
		*/
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação do estado.
		 * 
		 * Esse método invoca o outro método Estado::validar() para validar
		 * a string com a sigla do estado fornecida pelo usuário. Se ela for 
		 * válida, o estado é criado contendo aquela string específica. Se 
		 * ela não for válida, o estado não é criada. 
		 * 
		 * @param estado string que contém a sigla de um estado brasileiro. 
		 * 
		 * @see Estado::validar()
		*/
		void setEstado(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao estado.
		 * 
		 * Esse método acessa o estado relacionado a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do estado. 
		 * 
		*/
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
		string identificador; /**< string que contém o identificador */

		// Limite do tamanho minimo do identificador e dos caractere ASCII que podem compor ele.
		const static int LIMITE = 5; /**< inteiro correspondente ao limite de caracteres da string identificador */
		const static int ASCII_a = 'a'; /**< inteiro correspondente ao caracter "a" na tabela ASCII */
		const static int ASCII_z = 'z'; /**< inteiro correspondente ao caracter "z" na tabela ASCII */

		// Metodo de validacao
		/**
		 * Método para validação do identificador.
		 * 
		 * Esse método analisa a string fornecida pelo usuário para o
		 * identificador. Se ele for inválido, é lançada a exceção de 
		 * argumento inválido. Se for válido, nada é feito. O valor será
		 * inválido se tiver caracteres diferentes dos de "a" até "z" na
		 * tabela ASCII, e também se tiver um número de caracteres diferente
		 * de 5 caracteres.
		 * 
		 * @param identificador string que contém as letras de "a" até "z" 
		 * correspondente ao identificador. 
		*/
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação do identificador.
		 * 
		 * Esse método invoca o outro método Identificador::validar() para 
		 * validar a string fornecida pelo usuário para o identificador. Se 
		 * ela for válida, o identificador é criado contendo aquela string 
		 * específica. Se ela não for válida, a string não é criada. 
		 * 
		 * @param identificador string que contém as letras de "a" até "z" 
		 * correspondente ao identificador. 
		 * 
		 * @see Identificador::validar()
		*/
		void setIdentificador(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao identificador.
		 * 
		 * Esse método acessa o identificador relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do identificador. 
		 * 
		*/
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
		string nome; /**< string que contém o nome */

		// Definicoes de limites para os caracteres do nome em codigo ASCII 

		const static int LIMITE = 15; /**< inteiro correspondente ao limite de caracteres da string nome */
		const static int ASCII_a = 'a'; /**< inteiro correspondente ao caracter "a" na tabela ASCII */
		const static int ASCII_z = 'z'; /**< inteiro correspondente ao caracter "z" na tabela ASCII */
		const static int ASCII_A = 'A'; /**< inteiro correspondente ao caracter "A" na tabela ASCII */
		const static int ASCII_Z = 'Z'; /**< inteiro correspondente ao caracter "Z" na tabela ASCII */
		const static int SPACO = ' '; /**< inteiro correspondente ao caracter " " na tabela ASCII */
		const static int PONTO = '.'; /**< inteiro correspondente ao caracter "." na tabela ASCII */

		// Metodo de validacao
		/**
		 * Método para validação do nome.
		 * 
		 * Esse método analisa a string fornecida pelo usuário para o nome. 
		 * Se ele for inválido, é lançada a exceção de argumento inválido. 
		 * Se for válido, nada é feito. O valor será inválido se tiver 
		 * caracteres diferentes dos de "a" até "z", de "A" até "Z" e de
		 * "." e " " na tabela ASCII; se tiver um número de caracteres 
		 * diferente de 15 caracteres; se tiver um "." sem ser precedido
		 * de uma letra; se tiver um número no meio do nome.
		 * 
		 * @param nome string que contém as letras de "a" até "z", de "A" até
		 * "Z", " " e ".", correspondente ao nome. 
		 * 	
		 */
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação do nome.
		 * 
		 * Esse método invoca o outro método Nome::validar() para validar
		 * a string nome fornecida pelo usuário. Se ela for válida, o nome
		 * é criado contendo aquela string específica. Se ele não for válida, 
		 * o nome não é criado. 
		 * 
		 * @param nome string que contém as letras de "a" até "z", de "A" até
		 * "Z", " " e ".", correspondente ao nome. 
		 * 
		 * @see Nome::validar()
		*/
		void setNome(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao nome.
		 * 
		 * Esse método acessa o nome relacionado a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do nome. 
		 * 
		*/
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
		string numero; /**< string que contém o número do cartão de crédito */

		// Quantidade minima de numeros que o numero do cartao deve ter

		const static int LIMITE = 16; /**< inteiro correspondente ao limite de caracteres da string numero */

		// Metodo de validacao
		/**
		 * Método para validação do número do cartão de crédito.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número do cartão de crédito. Se ele for inválido, é lançada a 
		 * exceção de argumento inválido. Se for válido, nada é feito. O valor 
		 * será inválido se não obedecer ao algoritmo de Luhn, implementado
		 * na função checkLuhn().
		 * 
		 * @param numero string que contém os números correspondente ao 
		 * número do cartão de crédito. 
		 * 
		 * @see checkLuhn()
		*/
		void validar(string) throw (invalid_argument);

	public:

		//Metodos de acesso

		/**
		 * Método para criação do número do cartão de crédito.
		 * 
		 * Esse método invoca o outro método NumeroCartaoCredito::validar() 
		 * para validar o valor fornecido pelo usuário para a string numero. 
		 * Se ele for válido, o número do cartão de crédito é criado contendo 
		 * aquele valor específico. Se ele não for válido, o número do cartão
		 * de crédito não é criado. 
		 * 
		 * @param numero string que contém os números correspondente ao 
		 * número do cartão de crédito. 
		 * 
		 * @see NumeroCartaoCredito::validar()
		*/
		void setNumero(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao número cartão de crédito.
		 * 
		 * Esse método acessa o número do cartão de crédito relacionado a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do número do cartão de crédito. 
		 * 
		*/
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
		string numero; /**< string que contém o número da conta corrente */

		// Limite do minimo de numeros que a conta tem que ter e os valors do codigo ASCIIII dos 0 e do 9
		const static int LIMITE = 6; /**< inteiro correspondente ao limite de caracteres da string numero */
		const static int ASCII_0 = '0'; /**< inteiro correspondente ao caracter "0" na tabela ASCII */
		const static int ASCII_9 = '9'; /**< inteiro correspondente ao caracter "9" na tabela ASCII */

		// Metodo de validacao

		/**
		 * Método para validação do número da conta corrente.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * do número da conta corrente. Se ele for inválido, é lançada a 
		 * exceção de argumento inválido. Se for válido, nada é feito. O valor 
		 * será inválido se tiver um número de caracteres diferente de 6, e/ou
		 * se seus caracteres forem diferentes dos numéros de 0 a 9 na 
		 * tabela ASCII.
		 * 
		 * @param numero string que contém os números correspondente ao 
		 * número da conta corrente. 
		 * 
		 * @see checkLuhn()
		*/
		void validar(string) throw(invalid_argument);

	public:

		// Metodos de acesso

		/**
		 * Método para criação do número da conta corrente.
		 * 
		 * Esse método invoca o outro método NumeroContaCorrente::validar() 
		 * para validar o valor fornecido pelo usuário para a string numero. 
		 * Se ele for válido, o número da conta corrente é criado contendo 
		 * aquele valor específico. Se ele não for válido, o número da conta 
		 * corrente não é criado. 
		 * 
		 * @param numero string que contém os números correspondente ao 
		 * número da conta corrente.  
		 * 
		 * @see NumeroContaCorrente::validar()
		*/
		void setNumero(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao número da conta corrente.
		 * 
		 * Esse método acessa o número da conta corrente relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do número da conta corrente. 
		 * 
		*/
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
		string senha; /**< string que contém a senha */
		
		// Limite de carcters que a senha deve ter bem 
		// como os codigos ASCII dos caracteres permitidos
		const static int LIMITE = 8; /**< inteiro correspondente ao limite de caracteres da string senha */
		const static int ASCII_a = 'a'; /**< inteiro correspondente ao caracter "a" na tabela ASCII */
		const static int ASCII_z = 'z'; /**< inteiro correspondente ao caracter "z" na tabela ASCII */
		const static int ASCII_A = 'A'; /**< inteiro correspondente ao caracter "A" na tabela ASCII */
		const static int ASCII_Z = 'Z'; /**< inteiro correspondente ao caracter "Z" na tabela ASCII */
		const static int ASCII_0 = '0'; /**< inteiro correspondente ao caracter "0" na tabela ASCII */
		const static int ASCII_9 = '9'; /**< inteiro correspondente ao caracter "9" na tabela ASCII */
		const static int ASCII_SIMB_MIN = 33; /**< inteiro correspondente ao símbolo mínimo da tabela ASCII a ser usado */
		const static int ASCII_SIMB_MAX = 38; /**< inteiro correspondente ao símbolo máximo da tabela ASCII a ser usado */
		const static char SIMBOLO_EXCESSAO = '"'; /**< inteiro correspondente ao caracter de exceção " " " da tabela ASCII */

		// Metodo para validacao
		/**
		 * Método para validação da senha.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * da senha. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 8 caracteres; se houver caracteres
		 * repetidos; se não houver, pelo menos, uma letra maiúscula (A-Z), 
		 * uma minúscula (a-z), um dígito (0 a 9) e um símbolo (! # $ % &).
		 * 
		 * @param senha string que contém os caracteres correspondentes à senha. 
		*/
		void validar(string) throw(invalid_argument);
	public:

		// Metodos de acesso

		/**
		 * Método para criação da senha.
		 * 
		 * Esse método invoca o outro método Senha::validar() para validar
		 * o valor fornecido pelo usuário para a string senha. Se ele for 
		 * válido, a senha é criada contendo aquele valor específico. Se 
		 * ele não for válido, a senha não é criada. 
		 * 
		 * @param senha string que contém os números correspondente à senha. 
		 * 
		 * @see Senha::validar()
		*/
		void setSenha(string) throw(invalid_argument);

		/**
		 * Método para o acesso à senha.
		 * 
		 * Esse método acessa a senha relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da senha. 
		 * 
		*/
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
		string tipo; /**< string que contém o tipo de acomodação */

		// Metodo de validacao

		/**
		 * Método para validação do tipo de acomodação.
		 * 
		 * Esse método analisa a string fornecida pelo usuário para o tipo de 
		 * acomodação. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * for diferente de "Apartamento", "Casa" ou "Flat".
		 * 
		 * @param tipo string que contém o tipo de acomodação. 
		*/
		void validar(string) throw(invalid_argument);

	public:

		// Metodos de acesso

		/**
		 * Método para criação do tipo de acomodação.
		 * 
		 * Esse método invoca o outro método TipoAcomodacao::validar() 
		 * para validar a string tipo. Se ela for válida, o tipo de 
		 * acomodação é criado contendo aquela string específica. Se 
		 * ele não for válida, o tipo de acomodação não é criado. 
		 * 
		 * @param tipo string que contém o tipo de acomodação. 
		 * 
		 * @see TipoAcomodacao::validar()
		*/
		void setAcomodacao(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao tipo de acomodação.
		 * 
		 * Esse método acessa o tipo de acomodação relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do tipo de acomodação. 
		 * 
		*/
		string getAcomodacao() const {
			return tipo;
		}
};

#endif // DOMINIOS_H_INCLUDED
