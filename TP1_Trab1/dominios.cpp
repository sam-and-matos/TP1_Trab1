
#include "dominios.h"

using namespace std;

// Limite dos valores da diaria
const static float DIARIA_PRECO_MIN = 1.00;
const static float DIARIA_PRECO_MAX = 10000.00;

// Definicao de funcoes fora das classes

bool checkLuhn(string numero){
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

bool checkNumero(string numero) {
	return std::all_of(numero.begin (),numero.end (), ::isdigit);
}
	
// Defini��es dos m�todos

void CodigoEvento::validar(string cd_evento) throw (invalid_argument) {
	if (!checNumero(cd_evento))
		throw invalid_argument("Codigo de Evento invalido! Somente digitos sao aceitos.")
	if (codigoevento.size() != LIMITE)
		throw invalid_argument("Codigo de Evento invalido! Codigo tem que ter 3 digitos.")
}

void CodigoEvento::setCodigoEvento(string cd_evento) throw(invalid_argument) {
	validar(cd_evento);
	this->codigo = cd_evento;
}

void CodigoApresentacao::validar(string cd_apresentacao) throw (invalid_argument) {
	if (!checkNumero(cd_apresentacao))
		throw invalid_argument("Codigo de Apresentacao invalido! Somente digitos sao aceitos.");
	if (cd_apresentacao.size() != LIMITE)
		throw invalid_argument("Codigo de Apresentacao invalido! Codigo tem que ter 4 digitos.")
}

void CodigoApresentacao::setCodigoApresentacao(string cd_apresentacao) throw(invalid_argument) {
	validar(cd_apresentacao);
	this->codigo = cd_apresentacao;
}

void CodigoIngresso::validar(string cd_ingresso) throw(invalid_argument) {
	if (!checkNumero(cd_ingresso))
		throw invalid_argument("Codigo de Ingresso invalido! Somente digitos sao aceitos.")
	if (cd_ingresso.size() != LIMITE)
		throw invalid_argument("Codigo de Ingresso invalido! Codigo tem que ter 5 digitos.")
}

void CodigoIngresso::setCodigoIngresso(string cd_ingresso) throw (invalid_argument) {
	validar(cd_ingresso);
	this->codigo = cd_ingresso;
}

void Diaria::validar(float valorDiaria) throw (invalid_argument) {
	if (valorDiaria < DIARIA_PRECO_MIN || valorDiaria > DIARIA_PRECO_MAX)
		throw invalid_argument("Valor da diaria invalido.");
}

void Diaria::setDiaria(float valorDiaria) throw (invalid_argument) {
	validar(valorDiaria);
	this->valorDiaria = valorDiaria;
}

void Data::validar(int dia, string mes, int ano) throw (invalid_argument) {
	
	if (dia < DIA_MIN || dia > DIA_MAX)
		throw invalid_argument("Dia invalido!");

	if (mes == "jan");
	else if (mes == "fev");
	else if (mes == "mar");
	else if (mes == "abr");
	else if (mes == "mai");
	else if (mes == "jun");
	else if (mes == "jul");
	else if (mes == "ago");
	else if (mes == "set");
	else if (mes == "out");
	else if (mes == "nov");
	else if (mes == "dez");
	else
		throw invalid_argument("Mes invalido!");
	

	if (ano < ANO_MIN || ano > ANO_MAX)
		throw invalid_argument("Ano invalido!");
}

void Data::setData(int dia, string mes, int ano) throw (invalid_argument) {
	validar(dia, mes, ano);
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

void DataValidade::validar(int mes, int ano) throw (invalid_argument) {
	if (mes < MES_MIN || mes > MES_MAX)
		throw invalid_argument("M�s invalido.");

	if (ano < ANO_MIN || ano > ANO_MAX)
		throw invalid_argument("Ano invalido.");
}

void DataValidade::setDataDeValidade(int mes, int ano) throw (invalid_argument) {
	validar(mes, ano);
	this->mes = mes;
	this->ano = ano;
}

void Estado::validar(string estado) throw (invalid_argument) {
	if (estado.size() != LIMITE)
		throw invalid_argument("Estado invalido!");
	
	if (estado == "AC");
	else if (estado == "AL");
	else if (estado == "AP");
	else if (estado == "AM");
	else if (estado == "BA");
	else if (estado == "CE");
	else if (estado == "DF");
	else if (estado == "ES");
	else if (estado == "GO");
	else if (estado == "MA");
	else if (estado == "MG");
	else if (estado == "MS");
	else if (estado == "MT");
	else if (estado == "PA");
	else if (estado == "PB");
	else if (estado == "PE");
	else if (estado == "PI");
	else if (estado == "PR");
	else if (estado == "RJ");
	else if (estado == "RN");
	else if (estado == "RO");
	else if (estado == "RR");
	else if (estado == "RS");
	else if (estado == "SC");
	else if (estado == "SE");
	else if (estado == "SP");
	else if (estado == "TO");
	else
		throw invalid_argument("Estado invalido!");
}

void Estado::setEstado(string estado) throw (invalid_argument) {
	validar(estado);
	this->estado = estado;
}

void Identificador::validar(string identificador) throw (invalid_argument) {
	if (identificador.size() != LIMITE)
		throw invalid_argument("Identificador invalido. Identificador precisa ter 5 caracteres(a-z)!");

	
	for (std::string::iterator it = identificador.begin(); it != identificador.end(); it++) {
		if (int(*it) < ASCII_a || int(*it) > ASCII_z)
			throw invalid_argument("Identificador invalido, somentes caracteres de a-z são validos!");
	}
}

void Identificador::setIdentificador(string identificador) throw (invalid_argument) {
	validar(identificador);
	this->identificador = identificador;
}

void Nome::validar(string nome) throw (invalid_argument) {
	string aux;

	if (nome.size() != LIMITE)
		throw invalid_argument("Nome invalido!");

	if (nome.empty())
		throw invalid_argument("Nome invalido.");

	for (auto it = nome.begin(); it != nome.end(); it++) {
		if ((int(*it) >= ASCII_a && int(*it) <= ASCII_z) || (int(*it) >= ASCII_A && int(*it) <= ASCII_Z))
			aux = *it;
		else if (int(*it) == PONTO) {
			if (aux.empty() || aux == " ")
				throw invalid_argument("Nome invalido!");
		}
		else if (int(*it) == SPACO) {
			if (aux == " ")
				throw invalid_argument("Nome invalido!");
		}
	}
}

void Nome::setNome(string nome) throw (invalid_argument) {
	validar(nome);
	this->nome = nome;
}

void NumeroCartaoCredito::validar(string numero) throw (invalid_argument) {
	if (numero.size() != LIMITE)
		throw invalid_argument("Numero de cartao invalido! Numero precisa conter 16 digitos(0-9)!");

	if (!checkLuhn(numero))
		throw invalid_argument("Numero de cart�o invalido.");
}

void NumeroCartaoCredito::setNumero(string numero) throw (invalid_argument) {
	validar(numero);
	this->numero = numero;
}

void NumeroContaCorrente::validar(string numero) throw (invalid_argument) {
	if (numero.size() != LIMITE)
		throw invalid_argument("Numero da conta invalido! Conta precisa ter 6 numeros 0-9");

	for (std::string::iterator it = numero.begin(); it != numero.end(); it++) {
		if (int(*it) < ASCII_0 || int(*it) > ASCII_9)
			throw invalid_argument("Numero da conta invalido, somente numeros de 0-9");
	}
}

void NumeroContaCorrente::setNumero(string numero) throw (invalid_argument) {
	validar(numero);
	this->numero = numero;
}

void Senha::validar(string senha) throw (invalid_argument) {
	list<char> auxMaiuscula, auxMinuscula, auxSimbolo, auxNumero;

	if (senha.size() != LIMITE)
		throw invalid_argument("Tamano da senha invalido! Senha precisa conter 8 digitos!");

	for (std::string::iterator it = senha.begin(); it != senha.end(); it++) {
		if (int(*it) >= ASCII_SIMB_MIN && int(*it) <= ASCII_SIMB_MAX && *it != SIMBOLO_EXCESSAO) {
			if (auxSimbolo.empty())
				auxSimbolo.push_front(*it);
			else {
				for (std::list<char>::iterator it2 = auxSimbolo.begin(); it2 != auxSimbolo.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");

				}
				auxSimbolo.push_front(*it);
			}

		}
		else if (int(*it) >= ASCII_a && int(*it) <= ASCII_z) {
			if (auxMinuscula.empty())
				auxMinuscula.push_front(*it);
			else {
				for (std::list<char>::iterator it2 = auxMinuscula.begin(); it2 != auxMinuscula.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");
				}
				auxMinuscula.push_front(*it);
			}
		}
		else if (int(*it) >= ASCII_A && int(*it) <= ASCII_Z) {
			if (auxMaiuscula.empty())
				auxMaiuscula.push_front(*it);
			else {
				for (std::list<char>::iterator it2 = auxMaiuscula.begin(); it2 != auxMaiuscula.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");
				}
				auxMaiuscula.push_front(*it);
			}
		}
		else if (int(*it) >= ASCII_0 && int(*it) <= ASCII_9) {
			if (auxNumero.empty())
				auxNumero.push_front(*it);
			else {
				for (std::list<char>::iterator it2 = auxNumero.begin(); it2 != auxNumero.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");
				}
				auxNumero.push_front(*it);
			}
		}
		else
			throw invalid_argument("Senha invalida! Caracter nao permitido presente!");

	}

	if (auxMaiuscula.empty() || auxMinuscula.empty() || auxNumero.empty() || auxSimbolo.empty())
		throw invalid_argument("Senha invalida! Senha precisa conter ao menos uma letra maiuscula, uma miniscula, um numero e um simbolo");

}

void Senha::setSenha(string senha) throw (invalid_argument) {
	validar(senha);
	this->senha = senha;
}

void TipoAcomodacao::validar(string tipo) throw (invalid_argument) {
	if (tipo == "Apartamento");
	else if (tipo == "Casa");
	else if (tipo == "Flat");
	else
		throw invalid_argument("Tipo de acomoda��o invalido!");
}

void TipoAcomodacao::setAcomodacao(string tipo) throw (invalid_argument) {
	validar(tipo);
	this->tipo = tipo;
}
