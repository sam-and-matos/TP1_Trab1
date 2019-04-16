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

// Declaração de classes


/**
 *  Classe da cidade.
 *
 *  A classe descreve o nome de uma cidade. Seus
 *  métodos validam o nome da cidade, criam
 *  essa cidade e retornam o nome da cidade ao usuário.
 */
class Cidade {
private:
	string cidade; /**< string que contém o nome da cidade */

	const static int LIMITE = 15; /**< inteiro correspondente ao limite de caracteres da string cidade */
	const string REGEX_EXP = "^((([A-Z]|[a-z]){1,}|[0-9]{1,})|((\w{1}\W{1}))|(([A-Z]*[a-z]*)[.]*)){1,15}$"; /**< Expressão regular para checar se a string tem ao menos
																											 1 letra, não há espaços seguidos, ponto é precido por letra./

	// Metodo de validacao

	/**
	 * Método para validação do nome da cidade.
	 *
	 * Esse método analisa o valor fornecido pelo usuário para a string
	 * nome da cidade. Se ele for inválido, é lançada a
	 * exceção de argumento inválido. Se for válido, nada é feito. O valor
	 * será inválido se tiver mais que 15 caracteres, ter dois espaço seguidos,
	 * ponto não precedido por letra ou que a string contenha caracteres diferentes
	 * de alfanúmericos,ponto(.) ou espaço.
	 *
	 * @param cidade string que contém o nome da cidade.
	 *
	*/
	void validar(string) throw(invalid_argument);

public:

	// Metodos de acesso

	/**
	 * Método para criação do número da conta corrente.
	 *
	 * Esse método invoca o outro método Cidade::validar()
	 * para validar o valor fornecido pelo usuário para a string numero.
	 * Se ele for válido, o número da conta corrente é criado contendo
	 * aquele valor específico. Se ele não for válido, o número da conta
	 * corrente não é criado.
	 *
	 * @param numero string que contém os números correspondente ao
	 * número da conta corrente.
	 *
	 * @see Cidade::validar()
	*/
	void setCidade(string) throw(invalid_argument);

	/**
	 * Método para o acesso ao número da conta corrente.
	 *
	 * Esse método acessa o número da conta corrente relacionada a ele no
	 * código principal e retorna o seu valor.
	 *
	 * @return valor do número da conta corrente.
	 *
	*/
	string getCidade() const {
		return cidade;
	}
};

/**
*Classe da classificação do evento.
*
* A classe descreve a classificação do evento de um
* determinado evento.Seus métodos validam uma
* string do classificação do evento, criam essa string e retornam
* o string criada ao usuário.
*/

class ClasseEvento {
private:
	int classe; /**< string que contém o valor correspondente a classificação do evento */

	const static int VALOR_MIN = 1; /**< inteiro com o valor minimo para classe de evento. */
	const static int VALOR_MAX = 4;  /**< inteiro com o valor máximo para classe de evento. */

	// Metodo de validacao

	/**
	 * Método para validação da classificação do evento.
	 *
	 * Esse método analisa o valor fornecido pelo usuário para a string
	 * correspondente a classificação do evento. Se ele for inválido, é
	 * lançada a exceção de argumento inválido. Se for válido, nada é
	 * feito. O valor será inválido se não tiver 5 digitos.
	 *
	 * @param classe string correspondente ao classificação do evento.
	*/

	void validar(int) throw(invalid_argument);

public:
	// Metodos de acesso


	/**
	 * Método para criação do classificação do evento
	 *
	 * Esse método invoca o outro método CodigoIngresso::validar()
	 * para validar o valor fornecido pelo usuário para a string
	 * correspondente a classificação do evento. Se ele for válido, o
	 * classificação do evento é criado contendo aquele valor específico.
	 * Se ela não for válido, o classificação do evento não é criado.
	 *
	 * @param classe string correspondente ao classificação do evento.
	 *
	 * @see CodigoIngresso::validar()
	*/

	void setClasseEvento(int) throw(invalid_argument);

	/**
	 * Método para o acesso ao classificação do evento.
	 *
	 * Esse método acessa o classificação do evento relacionado a ele no
	 * programa e retorna o seu valor.
	 *
	 * @return codigo número do classificação do evento.
	 *
	*/

	int getClasseEvento() const {
		return classe;
	}
};

/** 
 *  Classe do código do evento.
 *  
 *  A classe descreve um código do evento. Seus métodos validam o código do evento,
 *  criam esse código e retornam o código criado ao usuário.  
 */

class CodigoEvento {
	private:

		string codigo; /**< string que contém o valor correspondente 
		ao código do evento */

		const static int LIMITE = 3; /**< inteiro correspondente ao limite mínimo e máximo de 
		digitos que a string codigo tem que ter. */

		// Metodo de validacao
		/**
		 * Método para validação do código do evento.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * código. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 digitos.
		 * 
		 * @param codigo string que contém o código correspondente ao evento. 
		*/
		void validar(string) throw (invalid_argument); 

	public:
		// Metodos de acesso

		
		/**
		 * Método para criação do código de evento.
		 * 
		 * Esse método invoca o outro método CodigoEvento::validar() para validar
		 * o valor fornecido pelo usuário para a string código. Se ele for 
		 * válido, o código de evento é criado contendo aquele valor específico. Se 
		 * ele não for válido, o código de evento não é criado. 
		 * 
		 * @param codigo string que contém os números correspondente ao código de evento. 
		 * 
		 * @see CodigoEvento::validar()
		*/
		void setCodigoEvento(string) throw (invalid_argument);


		/**
		 * Método para o acesso ao código do evento.
		 * 
		 * Esse método acessa a evento relacionada a ele no 
		 * código principal e retorna o seu código. 
		 * 
		 * @return valor do código de evento. 
		 * 
		*/

		string getCodigoEvento() const {
			return codigo;

		}
};


/** 
 *  Classe do código da apresentação.
 *  
 *  A classe descreve um código da apresentacao. Seus métodos validam um 
 *  código, criam esse código e retornam o código criado 
 *  ao usuário.  
 */

class CodigoApresentacao {
	private:
		string codigo; /**< string que contém o valor correspondente 
		ao código da apresentação*/

		const static int LIMITE = 4; /**< inteiro correspondente ao limite mínimo e máximo de 
		digitos que a string código tem que ter. */


		// Metodo de validacao
		
		/**
		 * Método para validação do código da apresentação.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * código. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 4 digitos.
		 * 
		 * @param codigo string que contém os números correspondente ao código da apresentação. 
		*/
		void validar(string) throw (invalid_argument);

	public:
		// Metodos de acesso


		/**
		 * Método para criação do código de aparesentação.
		 * 
		 * Esse método invoca o outro método CodigoApresentacao::validar() para validar
		 * o valor fornecido pelo usuário para a string código. Se ele for 
		 * válido, o objeto com o número do código de apresentação é criada contendo aquele 
		 * valor específico. Se ele não for válido, o objeto não é criada. 
		 * 
		 * @param codigo string que contém os números correspondente ao banco. 
		 * 
		 * @see CodigoApresentacao::validar()
		*/
		void setCodigoApresentacao(string) throw (invalid_argument);

		/**
		 * Método para o acesso ao código de apresentação.
		 * 
		 * Esse método acessa o número do código de apresentação relacionado a ele no 
		 * código principal passado e retorna o seu valor. 
		 * 
		 * @return valor do código da apresentação. 
		 * 
		*/
		string getCodigoApresentacao() const {
			return codigo;
		}
};

/** 
 *  Classe do código do ingresso.
 *  
 *  A classe descreve o número do código do ingresso de um 
 *  determinado evento. Seus métodos validam uma
 *  string do código do ingresso, criam essa string e retornam 
 *  o string criada ao usuário.   
 */

class CodigoIngresso {
	private:
		string codigo; /**< string que contém o valor correspondente 
		ao código de ingresso */

		const static int LIMITE = 5;  /**< inteiro correspondente ao limite mínimo e máximo de 
		digitos que a string código tem que ter. */

		// Metodo de validacao

		/**
		 * Método para validação do código do ingresso.
		 *
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * correspondente ao código do ingresso. Se ele for inválido, é
		 * lançada a exceção de argumento inválido. Se for válido, nada é
		 * feito. O valor será inválido se não tiver 5 digitos.
		 *
		 * @param codigo string correspondente ao código do ingresso.
		*/

		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso


		/**
		 * Método para criação do código do ingresso
		 * 
		 * Esse método invoca o outro método CodigoIngresso::validar() 
		 * para validar o valor fornecido pelo usuário para a string 
		 * correspondente ao código do ingresso. Se ele for válido, o 
		 * código do ingresso é criado contendo aquele valor específico. 
		 * Se ela não for válido, o código do ingresso não é criado. 
		 * 
		 * @param codigo string correspondente ao código do ingresso. 
		 * 
		 * @see CodigoIngresso::validar()
		*/

		void setCodigoIngresso(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao código do ingresso.
		 * 
		 * Esse método acessa o código do ingresso relacionado a ele no 
		 * programa e retorna o seu valor. 
		 * 
		 * @return codigo número do código do ingresso. 
		 * 
		*/	

		string getCodigoIngresso() const {
			return codigo;
		}
};

/** 
 *  Classe da data.
 *  
 *  A classe descreve uma data. Seus métodos validam a data,
 *  criam essa data e retornam a data criada ao usuário.  
 */

class CodigoEvento {
	private:

		string codigo; /**< string que contém o valor correspondente 
		ao código do evento */

		const static int LIMITE = 3; /**< inteiro correspondente ao limite mínimo e máximo de 
		digitos que a string codigo tem que ter. */

		// Metodo de validacao
		/**
		 * Método para validação do código do evento.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * código. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 3 digitos.
		 * 
		 * @param codigo string que contém o código correspondente ao evento. 
		*/
		void validar(string) throw (invalid_argument); 

	public:
		// Metodos de acesso

		
		/**
		 * Método para criação do código de evento.
		 * 
		 * Esse método invoca o outro método CodigoEvento::validar() para validar
		 * o valor fornecido pelo usuário para a string código. Se ele for 
		 * válido, o código de evento é criado contendo aquele valor específico. Se 
		 * ele não for válido, o código de evento não é criado. 
		 * 
		 * @param codigo string que contém os números correspondente ao código de evento. 
		 * 
		 * @see CodigoEvento::validar()
		*/
		void setCodigoEvento(string) throw (invalid_argument);


		/**
		 * Método para o acesso ao código do evento.
		 * 
		 * Esse método acessa a evento relacionada a ele no 
		 * código principal e retorna o seu código. 
		 * 
		 * @return valor do código de evento. 
		 * 
		*/

		string getCodigoEvento() const {
			return codigo;

		}
};

/**
 *  Classe do código de segurança.
 *
 *  A classe descreve o número do código de segurança de um
 *  determinado evento. Seus métodos validam uma
 *  string do código de segurança, criam essa string e retornam
 *  o string criada ao usuário.
 */

class CodigoSeguranca {
private:
	string codigo; /**< string que contém o valor correspondente
	ao código de ingresso */

	const static int LIMITE = 3;  /**< inteiro correspondente ao limite mínimo e máximo de
	digitos que a string código tem que ter. */

	// Metodo de validacao

	/**
	 * Método para validação do código de segurança.
	 *
	 * Esse método analisa o valor fornecido pelo usuário para a string
	 * correspondente ao código de segurança. Se ele for inválido, é
	 * lançada a exceção de argumento inválido. Se for válido, nada é
	 * feito. O valor será inválido se não tiver 5 digitos.
	 *
	 * @param codigo string correspondente ao código de segurança.
	*/

	void validar(string) throw(invalid_argument);

public:
	// Metodos de acesso


	/**
	 * Método para criação do código de segurança
	 *
	 * Esse método invoca o outro método CodigoIngresso::validar()
	 * para validar o valor fornecido pelo usuário para a string
	 * correspondente ao código de segurança. Se ele for válido, o
	 * código de segurança é criado contendo aquele valor específico.
	 * Se ela não for válido, o código de segurança não é criado.
	 *
	 * @param codigo string correspondente ao código de segurança.
	 *
	 * @see CodigoIngresso::validar()
	*/

	void setCodigoIngresso(string) throw(invalid_argument);

	/**
	 * Método para o acesso ao código de segurança.
	 *
	 * Esse método acessa o código de segurança relacionado a ele no
	 * programa e retorna o seu valor.
	 *
	 * @return codigo número do código de segurança.
	 *
	*/

	string getCodigoIngresso() const {
		return codigo;
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
		string data; /**< string que corresponde a data no formato dd/mm/yy */
		
		// Defincao dos limites para Dia e Ano

		static string REGEX_EXP = "^([0-2][0-9]|(3)[0-1])(\/)(((0)[0-9])|((1)[0-2]))(\/)\d{2}$";

		// Metodo de validacao
		/**
		 * Método para validação da data.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string fornecida 
		 * pelo usuário para a data. Se essa for invalida segundo a Regular Expression 
		 * {^([0-2][0-9]|(3)[0-1])(\/)(((0)[0-9])|((1)[0-2]))(\/)\d{2}$}, que representa a seguinte expressão:
		 * dois digitos entre 1 e 31, dois digitos entre 1 e 12 e 2 digitos entre 00 e 99, é 
		 * lançada a exceção de argumento inválido. Se for válido, nada é feito.
		 * A data será válida se estiver no formado dd/mm/yy, onde dd é um valor entra 1 e 31
		 * mm é um valor entre 1 e 12 e yy é um valor entre 00 e 99.
		 * 
		 * @param data string que corresponde a data no formato dd/mm/yy.
		 * 		   
		*/
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação da data.
		 * 
		 * Esse método invoca o método Data::validar() para validar
		 * o valor fornecido pelo usuário para a string data.
		 * Se a string for válida, a data é criada contendo 
		 * a string. Se eles não forem válidos, a data 
		 * não é criada. 
		 * 
		 * @param data string que corresponde a data no formato dd/mm/yy.
		 * 
		 * @see Data::validar()
		*/
		void setData(string) throw (invalid_argument);

		/**
		 * Método para o acesso à data.
		 * 
		 * Esse método acessa a data relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return string com o a data. 
		 * 
		*/
		string getData() const {
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
		string dt_validade; /**< inteiros que corresponde ao dia e ao ano */
		
		const static string REGEX_EXP = "^(((0)[0-9])|((1)[0-2]))(\/)\d{2}";
		
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
		void validar(string) throw(invalid_argument);

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
		void setDataDeValidade(string) throw(invalid_argument);

		/**
		 * Método para o acesso à data de validade.
		 * 
		 * Esse método acessa a data de validade relacionada a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor da data de validade. 
		 * 
		*/
		string getDataDeValidade() const {
			return dt_validade;
		}
};

/**
 *  Classe do disponibilidade.
 *
 *  A classe descreve a disponibilidade para um evento. Seus métodos validam a disponibilidade,
 *  criam esse disponibilidade e retornam a disponibilidade criada ao usuário.
 */
class Disponibilidade {
private:
	int disponibilidade; /**< string que contém o disponibilidade */

	const static int LIMITE_MIN = 0; /**< inteiro correspondente ao limite minimo de disponibilidade */
	const static int LIMITE_MAX = 250; /**< inteiro correspondente ao limite máximo de disponibilidade */


	// Metodo de validacao
	/**
	 * Método para validação do disponibilidade.
	 *
	 * Esse método analisa a string fornecida pelo usuário para o
	 * disponibilidade. Se ele for inválido, é lançada a exceção de
	 * argumento inválido. Se for válido, nada é feito. O valor será
	 * inválido se tiver caracteres diferentes dos de "a" até "z" na
	 * tabela ASCII, e também se tiver um número de caracteres diferente
	 * de 5 caracteres.
	 *
	 * @param disponibilidade int entre 0 e 250 correspondendo a disponibilidade.
	*/
	void validar(int) throw(invalid_argument);

public:
	// Metodos de acesso

	/**
	 * Método para criação da disponibilidade.
	 *
	 * Esse método invoca o outro método Disponibilidade::validar() para
	 * validar o inteiro fornecido pelo usuário para a disponibilidade. Se
	 * ela for válida, a disponibilidade é criada contendo o valor forneciso.
	 * Se o valor não for valido, a disponibilidade não é criada.
	 *
	 * @param disponibilidade int enrta 0 e 250 correspondendo a disponibilidade.
	 *
	 * @see Disponibilidade::validar()
	*/
	void setDisponibilidade(int) throw(invalid_argument);

	/**
	 * Método para o acesso ao disponibilidade.
	 *
	 * Esse método acessa o disponibilidade relacionada a ele no
	 * código principal e retorna o seu valor.
	 *
	 * @return valor do disponibilidade.
	 *
	*/
	int getDisponibilidade() const {
		return disponibilidade;
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
 *  Classe da faixa étaria.
 *  
 *  A classe descreve um faixa étaria. Seus métodos validam o faixa étaria,
 *  criam esse faixa étaria e retornam o faixa étaria criado ao usuário.  
 */
class FaixaEtaria {
	private:
		string faixa_et; /**< string que contém o faixa étaria */

		// Definicoes de limites para os caracteres do faixa étaria em codigo ASCII 

		const static string LIM_FAIXA[] = { "L", "10", "12", "14", "16", "18" };

		// Metodo de validacao
		/**
		 * Método para validação do faixa étaria.
		 * 
		 * Esse método analisa a string fornecida pelo usuário para a faixa étaria. 
		 * Se ele for inválido, é lançada a exceção de argumento inválido. 
		 * Se for válido, nada é feito. Será valido caso seja: {L,10,12,14,16 e 18}. 
		 * 
		 * @param faixa_et string que contém a faixa étaria. 
		 * 	
		 */
		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		/**
		 * Método para criação do faixa étaria.
		 * 
		 * Esse método invoca o outro método FaixaEtaria::validar() para validar
		 * a string faixa étaria fornecida pelo usuário. Se ela for válida, a faixa étaria
		 * é criada contendo aquela string específica. Se ele não for válida, 
		 * o faixa étaria não é criada. 
		 * 
		 * @param faixa_et string que contém a faixa étaria. 
		 * 
		 * @see FaixaEtaria::validar()
		*/
		void setFaixaEtaria(string) throw(invalid_argument);

		/**
		 * Método para o acesso ao faixa étaria.
		 * 
		 * Esse método acessa o faixa étaria relacionado a ele no 
		 * código principal e retorna o seu valor. 
		 * 
		 * @return valor do faixa étaria. 
		 * 
		*/
		string getFaixaEtaria() const {
			return faixa_et;
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
 *  Classe da senha.
 *  
 *  A classe descreve uma senha. Seus métodos validam a senha,
 *  criam essa senha e retornam a senha criada ao usuário.  
 */
class Senha{
	private:
		string senha; /**< string que contém a senha */
		
		const static int LIMITE_TAM = 6;


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
