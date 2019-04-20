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
#include <array>
#include <regex>

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

/**
* Funcao que checa se dado número está dentro de um  vetor de números.
*
* A função compara o número com todos os valores dentro do vetor, se esse valor
* estiver dentro do vetor ela retorna True e se o vetor não contiver o valor retorna False .
*
* @param num int número o qual quer se verificar estar dentro do vetor.
* @param vector int vetor de 4 número inteiros.
*/
bool checkPresent(int num, int vector[4]);

/**
* Funcao que checa se dado objeto tipo string é um cpf válido.
*
* A função analisa todos os caracteres da string e retorna True se
* a string for um CPF válido e False caso contrário.
*
* @param string fornecida pelo usuário.
*/
bool checkCPF(string cpf);

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
	string cidade; 

	const static int LIMITE = 15; 

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
	int classe; 

	const static int VALOR_MIN = 1; 
	const static int VALOR_MAX = 4; 

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

		string codigo; 

		const static int LIMITE = 3; 

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
		string codigo; 

		const static int LIMITE = 4; 


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
		string codigo; 

		const static int LIMITE = 5;  

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
 *  Classe do código de segurança.
 *
 *  A classe descreve o número do código de segurança de um
 *  determinado evento. Seus métodos validam uma
 *  string do código de segurança, criam essa string e retornam
 *  o string criada ao usuário.
 */

class CodigoSeguranca {
private:
	string codigo; 

	const static int LIMITE = 3;  

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

	void setCodigoSeguranca(string) throw(invalid_argument);

	/**
	 * Método para o acesso ao código de segurança.
	 *
	 * Esse método acessa o código de segurança relacionado a ele no
	 * programa e retorna o seu valor.
	 *
	 * @return codigo número do código de segurança.
	 *
	*/

	string getCodigoSeguranca() const {
		return codigo;
	}
};

/**
 *  Classe do CPF.
 *
 *  A classe descreve o nome de uma cidade. Seus
 *  métodos validam o nome da cidade, criam
 *  essa cidade e retornam o nome da cidade ao usuário.
 */

class CPF {
private:
	string cpf;
	
	// Metodo de validacao

	/**
	 * Método para validação do nome da cidade.
	 *
	 * Esse método analisa o valor fornecido pelo usuário para a string
	 * cpf. Se ele for inválido, é lançada a exceção de argumento inválido. 
	 * Se for válido, nada é feito. O valor será inválido se tiver fora do padrão
	 * 000.000.000-00 e ainda se o valor do CPF não for válido.
	 *
	 * @param cpf string que contém o número de cpf.
	 *
	*/
	void validar(string) throw(invalid_argument);

public:

	// Metodos de acesso

	/**
	 * Método para criação do número da conta corrente.
	 *
	 * Esse método invoca o outro método CPF::validar()
	 * para validar o valor fornecido pelo usuário para a string cpf.
	 * Se ele for válido, o número de CPF é criado contendo
	 * aquele valor específico. Se ele não for válido, o número de CPF não é criado.
	 *
	 * @param numero string que contém o número do CPF.
	 *
	 * @see CPF::validar()
	*/
	void setCPF(string) throw(invalid_argument);

	/**
	 * Método para o acesso ao número da conta corrente.
	 *
	 * Esse método acessa o número da conta corrente relacionada a ele no
	 * código principal e retorna o seu valor.
	 *
	 * @return valor do número de CPF.
	 *
	*/
	string getCPF() const {
		return cpf;
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
		string data; 
		
		// Defincao de constantes limites para Dia, Mes e Ano

		const static int DIA_MIN = 01;
		const static int DIA_31 = 31;
		const static int DIA_30 = 30;
		const static int DIA_29 = 29;
		const static int DIA_28 = 28;
		const static int MES_MIN = 01;
		const static int MES_MAX = 12;
		const static int ANO_MIN = 00;
		const static int ANO_MAX = 99;


		// Metodo de validacao
		/**
		 * Método para validação da data.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string fornecida 
		 * pelo usuário para a data. Se essa for invalida segundo a Regular Expression é 
		 * lançada a exceção de argumento inválido. Se for válido, nada é feito. Há ainda verificação quanto
		 * aos dias de cada mês, tendo este 28,29(ano bissexto), 30 ou 31. A data será válida se estiver no formado 
		 * dd/mm/yy, onde dd é um valor entra 1 e 31, mm é um valor entre 1 e 12 e yy é um valor entre 00 e 99.
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
		string dt_validade;
		
		
		// Metodos de validacao

		/**
		 * Método para validação da data de validade.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string da data.
		 * Se esses parâmetros forem inválidos,é lançada a exceção de argumento inválido.
		 * Se for válido, nada é feito. O mês será inválido se for menor do que 1 e maior do que 12; 
		 * o ano será inválido se for menor que 00 ou maior que 99.
		 * 
		 * @param dt_validade string que contém a data.
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
		 * @param dt_validade string que contém a data.
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
		 * @return dt_validade data de validade. 
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
	int disponibilidade; 

	const static int LIMITE_MIN = 0; 
	const static int LIMITE_MAX = 250; 


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
		string estado; 

		// Limite de tamanho de estado

		const static int LIMITE = 2; 

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
		string faixa_et;

		// Definicoes de limites para os caracteres do faixa étaria em codigo ASCII 

		const string LIM_FAIXA_L= "L",LIM_FAIXA_10 = "10", LIM_FAIXA_12 = "12", LIM_FAIXA_14 = "14", LIM_FAIXA_16 = "16", LIM_FAIXA_18 = "18";

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
 *  Classe do horário do evento.
 *
 *  A classe descreve uma data. Seus métodos validam a data,
 *  criam essa data e retornam a data criada ao usuário.
 */

class Horario {
private:

	string horario;

	const static int LIMITE_HR_MIN = 07, LIMITE_HR_MAX = 22;
	int LIMITE_MIN[4] = { 00, 15, 30, 45 };

	/**
	 * Método para validação do horário.
	 *
	 * Esse método analisa a string fornecida pelo usuário para o horário.
	 * Se ele for inválido, é lançada a exceção de argumento inválido.
	 * Se for válido, nada é feito. Será valido caso seja: das 7 às 22 hrs e os minutos
	 * forem iguais a 00,15,30 ou 45.
	 *
	 * @param horario string que contém o horário.
	 *
	 */
	void validar(string) throw (invalid_argument);

public:
	// Metodos de acesso


	/**
	 * Método para criação do horário.
	 *
	 * Esse método invoca o outro método Horario::validar() para validar
	 * o valor fornecido pelo usuário para a string horario. Se ele for
	 * válido, o horario de evento é criado contendo aquele valor específico. Se
	 * ele não for válido, o código de evento não é criado.
	 *
	 * @param horario string que contém os horario do evento.
	 *
	 * @see Horario::validar()
	*/
	void setHorario(string) throw (invalid_argument);


	/**
	 * Método para o acesso ao código do evento.
	 *
	 * Esse método acessa a evento relacionada a ele no
	 * código principal e retorna o seu código.
	 *
	 * @return horario string contendo o horário.
	 *
	*/

	string getHorario() const {
		return horario;
	}
};

 /**
  *  Classe do nome do evento.
  *
  *  A classe descreve o nome de uma cidade. Seus
  *  métodos validam o nome da cidade, criam
  *  essa cidade e retornam o nome da cidade ao usuário.
  */

class NomeEvento {
private:
	string nm_evento;

	const static int LIMITE = 20;

	// Metodo de validacao

	/**
	 * Método para validação do nome do evento.
	 *
	 * Esse método analisa o valor fornecido pelo usuário para a string
	 * nome do evento. Se ele for inválido, é lançada a
	 * exceção de argumento inválido. Se for válido, nada é feito. O valor
	 * será inválido se tiver mais que 20 caracteres, ter dois espaço seguidos,
	 * ponto não precedido por letra ou que a string contenha caracteres diferentes
	 * de alfanúmericos,ponto(.) ou espaço.
	 *
	 * @param nm_evento string que contém o nome do evento.
	 *
	*/
	void validar(string) throw(invalid_argument);

public:

	// Metodos de acesso

	/**
	 * Método para criação do número da conta corrente.
	 *
	 * Esse método invoca o outro método NomeEvento::validar()
	 * para validar o valor fornecido pelo usuário para a string numero.
	 * Se ele for válido, o número da conta corrente é criado contendo
	 * aquele valor específico. Se ele não for válido, o número da conta
	 * corrente não é criado.
	 *
	 * @param numero string que contém os números correspondente ao
	 * número da conta corrente.
	 *
	 * @see NomeEvento::validar()
	*/
	void setNomeEvento(string) throw(invalid_argument);

	/**
	 * Método para o acesso ao número da conta corrente.
	 *
	 * Esse método acessa o número da conta corrente relacionada a ele no
	 * código principal e retorna o seu valor.
	 *
	 * @return nome do evento.
	 *
	*/
	string getNomeEvento() const {
		return nm_evento;
	}
};

/**
 *  Classe do número da sala.
 *
 *  A classe descreve um número da sala. Seus
 *  métodos validam o número da sala, criam
 *  esse número e retornam o número da sala criada
 *  ao usuário.
 */

class NumeroSala {
private:
	int numero; 

	const static int LIMITE_MIN = 1; 
	const static int LIMITE_MAX = 10; 

	/**
	 * Método para validação do nome do evento.
	 *
	 * Esse método analisa o valor fornecido pelo usuário para o int
	 * numero. Se ele for inválido, é lançada a exceção de argumento inválido. 
	 * Se for válido, nada é feito. O valor será inválido se tiver mais que 20 caracteres,
	 * ter dois espaço seguidos, ponto não precedido por letra ou que a string contenha
	 * caracteres diferentes de alfanúmericos,ponto(.) ou espaço.
	 *
	 * @param numero int que contém o número da sala.
	 *
	*/
	void validar(int) throw (invalid_argument);

public:

	//Metodos de acesso

	/**
	 * Método para criação do número da sala.
	 *
	 * Esse método invoca o outro método para validar o valor fornecido pelo usuário
	 * para o numero. Se ele for válido, o número da sala é criada contendo
	 * aquele valor específico. Se ele não for válido, o número da sala não é criado.
	 *
	 * @param numero int número correspondente ao número da sala.
	 *
	 * @see NumeroSala::validar()
	*/
	void setNumero(int) throw(invalid_argument);

	/**
	 * Método para o acesso ao número da sala.
	 *
	 * Esse método acessa o número da sala relacionado a ele no
	 * código principal e retorna o seu valor.
	 *
	 * @return valor do número da sala.
	 *
	*/
	int getNumero() const {
		return numero;
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
 *  Classe do preço do evento.
 *
 *  A classe descreve um tipo de acomodação. Seus métodos validam
 *  o tipo de acomodação, criam esse tipo e retornam o tipo de
 *  acomodação criado ao usuário.
 */

class Preco {
private:
	string preco; 

	float PRECO_MIN = 0;
	float PRECO_MAX = 1000;

	// Metodo de validacao

	/**
	 * Método para validação do preço do evento.
	 *
	 * Esse método analisa a string fornecida pelo usuário para o tipo de
	 * acomodação. Se ele for inválido, é lançada a exceção de argumento
	 * inválido. Se for válido, nada é feito. O valor será inválido se
	 * for diferente de "Apartamento", "Casa" ou "Flat".
	 *
	 * @param preco string que contém o preço.
	*/
	void validar(string) throw(invalid_argument);

public:

	// Metodos de acesso

	/**
	 * Método para criação do preço.
	 *
	 * Esse método invoca o outro método Preco::validar()
	 * para validar a string preco. Se ela for válida, o tipo de
	 * acomodação é criado contendo aquela string específica. Se
	 * ele não for válida, o tipo de acomodação não é criado.
	 *
	 * @param preco string que contém o preço.
	 *
	 * @see Preco::validar()
	*/
	void setPreco(string) throw(invalid_argument);

	/**
	 * Método para o acesso ao tipo de acomodação.
	 *
	 * Esse método acessa o tipo de acomodação relacionada a ele no
	 * código principal e retorna o seu valor.
	 *
	 * @return retorna o valor de preco.
	 *
	*/
	string getPreco() const {
		return preco;
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
		
		const static int LIMITE = 6;


		// Metodo para validacao
		/**
		 * Método para validação da senha.
		 * 
		 * Esse método analisa o valor fornecido pelo usuário para a string
		 * da senha. Se ele for inválido, é lançada a exceção de argumento 
		 * inválido. Se for válido, nada é feito. O valor será inválido se 
		 * tiver mais ou menos do que 8 caracteres; se houver caracteres
		 * repetidos; se não houver, pelo menos, uma letra maiúscula (A-Z), 
		 * uma minúscula (a-z), um dígito (0 a 9).
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


#endif // DOMINIOS_H_INCLUDED
