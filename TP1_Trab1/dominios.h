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

// Fun�oes auxiliares

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


// Declara��o de classes

/** 
 *  Classe da agência.
 *  
 *  A classe descreve uma agência, e seus métodos validam a agência,
 *  criam essa agência e retornam a agência criada ao usuário.  
 */
class Agencia {
	private:
		string agencia;

		// Limite de caracters que agencia pode ter e os codigos ASCII que podem compor agencia
		const static int ASCII_0 = 48;
		const static int ASCII_9 = 57;
		const static int LIMITE = 5;

		// Metodo de validacao
		void validar(string) throw (invalid_argument);

	public:
		// Metodos de acesso

		void setAgencia(string) throw (invalid_argument);

		string getAgencia() const {
			return agencia;
		}

};

class Banco {
	private:
		string banco;

		// Limite do tamanho da string e limite de caracters ASCII aceitos
		const static int ASCII_0 = 48;
		const static int ASCII_9 = 57;
		const static int LIMITE = 3;

		// Metodo de validacao

		void validar(string) throw (invalid_argument);
	public:
		// Metodos de acesso

		void setBanco(string) throw (invalid_argument);

		string getBanco() const {
			return banco;
		}
};

class CapacidadeAcomodacao {
	private:
		int CapacidadeDeAcomodacaoNum;

		const static int LIMITE_MIN = 1;
		const static int LIMITE_MAX = 9;

		// Metodo de validacao

		void validar(int) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setCapacidade(int) throw(invalid_argument);

		int getCapacidade() const {
			return CapacidadeDeAcomodacaoNum;
		}
};

class Diaria {
	private:
		float valorDiaria;

		// Metodo de validacao

		void validar(float) throw (invalid_argument);

	public:
		// Metodos de acesso

		void setDiaria(float) throw (invalid_argument);

		float getDiaria() const {
			return valorDiaria;
		}
};

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

		void validar(int, string, int) throw(invalid_argument);
	public:
		// Metodos de acesso

		void setData(int, string, int) throw (invalid_argument);

		string getData() const {
			string data;
			data += dia;
			data += '/';
			data += mes;
			data += '/';
			data += ano;
			return data;
		}
};

class DataValidade {
	private:
		int month, year;

		const static int MES_MIN = 1;
		const static int MES_MAX = 12;
		const static int ANO_MIN = 00;
		const static int ANO_MAX = 99;

		void validar(int, int) throw(invalid_argument);
	public:

		void setDataDeValidade(int, int) throw(invalid_argument);

		int getDataDeValidade(int, int) const {
			return month, year;
		}
};

class Estado {
	private:
		string estado;

		// Limite de tamanho de estado

		const static int LIMITE = 2;

		// Metodo de valdiacao

		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setEstado(string) throw(invalid_argument);

		string getEstado() const {
			return estado;
		}
};

class Identificador {
	private:
		string identificador;

		// Limite do tamanho minimo do identificador e dos caractere ASCII que podem compor ele.
		const static int LIMITE = 5;
		const static int ASCII_a = 97;
		const static int ASCII_z = 122;

		// Metodo de validacao

		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setIdentificador(string) throw(invalid_argument);

		string getIdentificador() const {
			return identificador;
		}
};

class Nome {
	private:
		string nome;

		// Definicoes de limites para os caracteres do nome em codigo ASCII 

		const static int ASCII_a = 97;
		const static int ASCII_z = 122;
		const static int ASCII_A = 65;
		const static int ASCII_Z = 90;
		const static int SPACO = 32;
		const static int PONTO = 46;

		// Metodo de validacao

		void validar(string) throw(invalid_argument);

	public:
		// Metodos de acesso

		void setNome(string) throw(invalid_argument);

		string getNome() const {
			return nome;
		}
};

class NumeroCartaoCredito {
	private:
		string numero;

		// Quantidade minima de numeros que o numero do cartao deve ter

		const static int LIMITE = 16;

		// Metodo de validacao

		void validar(string) throw (invalid_argument);

	public:

		//Metodos de acesso

		void setNumero(string) throw(invalid_argument);

		string getNumero() const {
			return numero;
		}

};

class NumeroContaCorrente {
	private:
		string numero;

		// Limite do minimo de numeros que a conta tem que ter e os valors do codigo ASCIIII dos 0 e do 9
		const static int LIMITE = 6;
		const static int ASCII_0 = 48;
		const static int ASCII_9 = 57;

		// Metodo de validacao

		void validar(string) throw(invalid_argument);

	public:

		// Metodos de acesso

		void setNumero(string) throw(invalid_argument);

		string getNumero() const {
			return numero;
		}
};

class Senha{
	private:
		string senha;
		
		// Limite de carcters que a senha deve ter bem como os codigos ASCII dos caracteres permitidos
		const static int LIMITE = 8;
		const static int ASCII_a = 97;
		const static int ASCII_z = 122;
		const static int ASCII_A = 65;
		const static int ASCII_Z = 90;
		const static int ASCII_0 = 48;
		const static int ASCII_9 = 57;
		const static int ASCII_SIMB_MIN = 33;
		const static int ASCII_SIMB_MAX = 38;
		const static char SIMBOLO_EXCESSAO = '"';

		// Metodo para validacao

		void validar(string) throw(invalid_argument);
	public:

		// Metodos de acesso

		void setSenha(string) throw(invalid_argument);

		string getSenha() const {
			return senha;
		}
};

class TipoAcomodacao {
	private:
		string tipo;

		// Metodo de validacao

		void validar(string) throw(invalid_argument);

	public:

		// Metodos de acesso

		void setAcomodacao(string) throw(invalid_argument);

		string getAcomodacao() const {
			return tipo;
		}
};

#endif // DOMINIOS_H_INCLUDED