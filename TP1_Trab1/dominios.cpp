
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

void ClasseEvento::validar(string classe) throw(invalid_argument) {
	if (!all_of(CL_EVENTO.begin(),CL_EVENTO.end(), classe)
		throw invalid_argument("Clase do Evento invalida! Somento digitos de 1 a 4 são aceitos, onde: \n 1 - Teatro\n 2 - Esporte\n 3 - Show Nacional\n 4 - Show Internacional.")
}

void ClasseEvento::setClasseEvento(string classe) throw (invalid_argument) {
	validar(classe);
	this->classe = classe;
}

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

void Data::validar(string data) throw (invalid_argument) {
	regex valida (REGEX_EXP); // Método para criar um objeto regex.
	if (!regex_match(data,valida))
		throw invalid_argument("Data inválida!");
}

void Data::setData(string data) throw (invalid_argument) {
	validar(data);
	this->data = data;
}

void DataValidade::validar(string dt_validade) throw (invalid_argument) {
	regex valida(REGEX_EXP); // Método para criar um objeto regex.
	if (!regex_match(dt_validade, valida))
}

void DataValidade::setDataDeValidade(string dt_validade) throw (invalid_argument) {
	validar(dt_validade);
	this->dt_validade = dt_validade;
}

void Disponibilidade::validar(int disponibilidade) throw (invalid_argument) {
	if (disponibilidade < LIMITE_MIN || disponibilidade > LIMITE_MAX)
		throw invalid_argument("Disponibilidade invalida! Valor precisa estar entre 0 e 250.")
}

void Disponibilidade::setDisponibilidade(int disponibilidade) throw (invalid_argument) {
	validar(disponibilidade);
	this->disponibilidade = disponibilidade;
}

void Disponibilidade::validar(int disponibilidade) throw (invalid_argument) {
	if (disponibilidade < LIMITE_MIN || disponibilidade > LIMITE_MAX)
		throw invalid_argument("Disponibilidade invalida! Valor precisa estar entre 0 e 250.")
}

void Disponibilidade::setDisponibilidade(int disponibilidade) throw (invalid_argument) {
	validar(disponibilidade);
	this->disponibilidade = disponibilidade;
}

void FaixaEtaria::validar(string faixa_et) throw (invalid_argument) {
	if (!all_of(LIM_FAIXA->begin(),LIM_FAIXA->end(), faixa_et)
		throw invalid_argument("Faixa étaria invalida! Valor só pode ser: L, 10, 12, 14, 16 ou 18.")
}

void FaixaEtaria::setFaixaEtaria(string faixa_et) throw (invalid_argument) {
	validar(faixa_et);
	this->faixa_et = faixa_et;
}

void Estado::validar(string estado) throw (invalid_argument) {
	if (estado.size() != LIMITE)
		throw invalid_argument("Estado invalido! Somente as siglas do estado são aceitas.");
	
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
		throw invalid_argument("Estado invalido! Não existe estado com essa sigla.");
}

void Estado::setEstado(string estado) throw (invalid_argument) {
	validar(estado);
	this->estado = estado;
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
