#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED



#include <stdexcept>
#include <string>
#include <list>

using namespace std;

// Funçoes auxiliares

bool checkLuhn(string numero)
{
	int nSum = 0;
	int nDigits = numero.size();
	int nParity = (nDigits - 1) % 2;
	char cDigit[2] = "\0";
	for (int i = nDigits; i > 0; i--)
	{
		cDigit[0] = numero.at(i - 1);
		int nDigit = atoi(cDigit);

		if (nParity == i % 2)
			nDigit = nDigit * 2;

		nSum += nDigit / 10;
		nSum += nDigit % 10;
	}
	return 0 == nSum % 10;
}

// Declaração de classes

class Agencia {
private:
	string agencia;

	const static int ASCII_0 = 48;
	const static int ASCII_9 = 57;
	const static int LIMITE = 5;

	// Método responsável por validação
	void validar(string) throw (invalid_argument);
public:
	// Métodos de acesso

	void setAgencia(string) throw (invalid_argument);

	string getAgencia() const {
		return agencia;
	}

};

class Banco {
private:
	string banco;

	const static int ASCII_0 = 48;
	const static int ASCII_9 = 57;
	const static int LIMITE = 3;

	// Método responsável pela validação

	void validar(string) throw (invalid_argument);
public:
	// Métodos de acesso

	void setBanco(string) throw (invalid_argument);

	string getBanco() const {
		return banco;
	}
};

class CapacidadeDeAcomodacao {
private:
	int CapacidadeDeAcomodacaoNum;

	const static int LIMITE_MIN = 1;
	const static int LIMITE_MAX = 9;

	// Método responsável pela validação

	void validar(int) throw(invalid_argument);

public:
	// Métodos de acesso

	void setCapacidadeDeAcomadacao(int) throw(invalid_argument);

	int getCapacidadeDeAcomodacao() const {
		return CapacidadeDeAcomodacaoNum;
	}
};

class Diaria {
private:
	float ValorDiaria;

	const float DIARIA_PRECO_MIN = 1.00;
	const float DIARIA_PRECO_MAX = 10000.00;

	// Método resposável pela validação

	void validar(float) throw (invalid_argument);
public:
	// Métodos de acesso

	void setDiaria(float) throw (invalid_argument);

	float getDiaria() const {
		return ValorDiaria;
	}
};

class Data {
private:
	int dia;
	string mes;
	int ano;

	// Definção dos limites para Dia e Ano

	const static int DIA_MIN = 1;
	const static int DIA_MAX = 31;
	const static int ANO_MIN = 2000;
	const static int ANO_MAX = 2099;

	// Método resposável pela validação

	void validar(int, string, int) throw(invalid_argument);
public:
	// Métodos de acesso

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

class DataDeValidade {
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

	// Método para validar o estado

	void validar(string) throw(invalid_argument);

public:
	// Métodos de acesso

	void setEstado(string) throw(invalid_argument);

	string getEstado() const {
		return estado;
	}

};

class Identificador {
private:
	string identificador;

	const static int LIMITE = 5;
	const static int ASCII_a = 97;
	const static int ASCII_z = 122;

	// Método para validar indentificador

	void validar(string) throw(invalid_argument);

public:
	// Métodos de acesso

	void setIdentificador(string) throw(invalid_argument);

	string getIndentificador() const {
		return identificador;
	}

};

class Nome {
private:
	string nome;

	// Definicoes de limites para os caracteres do nome

	const static int ASCII_a = 97;
	const static int ASCII_z = 122;
	const static int ASCII_A = 65;
	const static int ASCII_Z = 90;
	const static char SPACO = ' ';
	const static char PONTO = '.';

	// Método para validar nome

	void validar(string) throw(invalid_argument);

public:
	// Métodos de acesso

	void setNome(string) throw(invalid_argument);

	string getNome() const {
		return nome;
	}

};

class NumeroCartaoDeCredito {
private:
	string numero;

	// Quantidade minima de numeros que o numero do cartao deve ter

	const static int LIMITE = 16;

	// Método de validaçao

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setNumero(string) throw(invalid_argument);

	string getNumero() const {
		return numero;
	}

};



class NumeroContaCorrente {
public:
	string numero;

	// Limite do minimo de numeros que a conta tem que ter e os valors do codigo ASCIIII dos 0 e do 9
	const static int LIMITE = 6;
	const static int ASCII_0 = 48;
	const static int ASCII_9 = 57;

	// Método de validaçao

	void validar(string) throw(invalid_argument);

public:

	// Métodos de acesso

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

	// Método para validaçao

	void validar(string) throw(invalid_argument);
public:

	// Métodos de acesso

	void setSenha(string) throw(invalid_argument);

	string getSenha() const {
		return senha;
	}

};

class TipoDeAcomodacao {
private:
	string tipo;

	// Método de validação

	void validar(string) throw(invalid_argument);

public:

	// Métodos de acesso

	void setAcomodacao(string) throw(invalid_argument);

	string getAcomodacao() const {
		return tipo;
	}
};

#endif // DOMINIOS_H_INCLUDED