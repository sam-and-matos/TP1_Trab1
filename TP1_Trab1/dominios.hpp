
#include <stdexcept>

using namespace std;

// Declara��o de classes

class Agencia {
private:
	int AgenciaNum;

	const static int Lim = 5;

	// M�todo respons�vel por valida��o
	void validar(int) throw (invalid_argument);
public:
	// M�todos de acesso

	void setAgencia(int) throw (invalid_argument);

	int getAgencia() const {
		return AgenciaNum;
	}

};

class Banco {
private:
	int BancoNum;

	const static int Lim = 3;

	// M�todo respons�vel pela valida��o

	void validar(int) throw (invalid_argument);
public:
	// M�todos de acesso

	void setBanco(int) throw (invalid_argument);

	int getBanco() const {
		return BancoNum;
	}
};

class CapacidadeDeAcomodacao {
private:
	int CapacidadeDeAcomodacaoNum;

	const static int LimMin = 1;
	const static int LimMax = 9;

	// M�todo respons�vel pela valida��o

	void validar(int) throw(invalid_argument);

public:
	// M�todos de acesso

	void setCapacidadeDeAcomadacao(int) throw(invalid_argument);

	int getCapacidadeDeAcomodacao() const {
		return CapacidadeDeAcomodacaoNum;
	}
};

class Diaria {
private:
	float ValorDiaria;

	// M�todo respos�vel pela valida��o

	void validar(float) throw (invalid_argument);
public:
	// M�todos de acesso

	void setDiaria(float) throw (invalid_argument);

	float getDiaria() const {
		return ValorDiaria;
	}
};

class Data {
private:
	int Dia;
	char Mes[5];
	int Ano;
	
	// Defin��o dos limites para Dia e Ano

	const static int DiaMin = 1;
	const static int DiaMax = 31;
	const static int AnoMin = 2000;
	const static int AnoMax = 2099;

	// M�todo respos�vel pela valida��o

	void validar(int, char[5], int) throw(invalid_argument);
public:
	// M�todos de acesso

	void setData(int, char[5], int) throw (invalid_argument);

	char getData() const {
		return (Dia, Mes, Ano);
	}
};

class DataDeValidade {
private:
	int month, year;
	
	const static int MONTH_MIN = 1;
	const static int MONTH_MAX = 12;
	const static int YEAR_MIN = 2000;
	const static int YEAR_MAX = 2099;

	void validar(int, int) throw(invalid_argument);
public:

	void setDataDeValidade(int, int) throw(invalid_argument);

	int getDataDeValidade(int, int) const {
		return month, year;
	}
};