
#include "dominios.h"
#include <algorithm>
#include <regex>
#include <time.h>
#include <cctype>

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
	return all_of(numero.begin (),numero.end (), ::isdigit);
}

bool checkCPF(string cpf) {
	int aux_cpf = stoi(cpf);
	string aux = aux_cpf;
	int digito_1 = 10, digito_2 = 11, teste = 0, multiplicador = 10, mod = 11;

	for (string::iterator it = aux.begin(); it != aux.at(8); it++) {
		teste += (*it) * digito_1;
		digito_1--;
	}

	if (((teste * multiplicador) % mod) == aux.at(9)) {
		teste = 0;
		for (string::iterator it = aux.begin(); it != aux.at(9); it++)
		{
			teste += (*it) * digito_2;
			digito_2--;
		}
		if (((teste * multiplicador) % mod) != aux.at(10))
			return false;
	}
	else
		return false;

	return true;
}
	
// Definições dos m�todos

void Cidade::validar(string cidade) throw(invalid_argument) {
	if (cidade.length() > LIMITE)
		throw invalid_argument("Cidade invalida! Nome da cidade pode ter no máximo 15 caracteres.");
	regex valida(REGEX_EXP);
	if (!regex_match(cidade, valida))
		throw invalid_argument("Cidade invalida! Nome da cidade tem que ter ao menos uma letra, ponto só pode ser precedido de letra, espaço não pode ser seguido por espaço e tem que começar com uma letra.");
}

void Cidade::setCidade(string cidade) {
	validar(cidade);
	this->cidade = cidade;
}

void ClasseEvento::validar(int classe) throw(invalid_argument) {
	if (classe <= VALOR_MIN || classe >= VALOR_MAX)
		throw invalid_argument("Clase do Evento invalida! Somento digitos de 1 a 4 são aceitos, onde: \n 1 - Teatro\n 2 - Esporte\n 3 - Show Nacional\n 4 - Show Internacional.");
}

void ClasseEvento::setClasseEvento(int classe) throw (invalid_argument) {
	validar(classe);
	this->classe = classe;
}

void CodigoEvento::validar(string cd_evento) throw (invalid_argument) {
	if (!checkNumero(cd_evento))
		throw invalid_argument("Codigo de Evento invalido! Somente digitos sao aceitos.");
	if (cd_evento.size() != LIMITE)
		throw invalid_argument("Codigo de Evento invalido! Codigo tem que ter 3 digitos.");
}

void CodigoEvento::setCodigoEvento(string cd_evento) throw(invalid_argument) {
	validar(cd_evento);
	this->codigo = cd_evento;
}

void CodigoApresentacao::validar(string cd_apresentacao) throw (invalid_argument) {
	if (!checkNumero(cd_apresentacao))
		throw invalid_argument("Codigo de Apresentacao invalido! Somente digitos sao aceitos.");
	if (cd_apresentacao.size() != LIMITE)
		throw invalid_argument("Codigo de Apresentacao invalido! Codigo tem que ter 4 digitos.");
}

void CodigoApresentacao::setCodigoApresentacao(string cd_apresentacao) throw(invalid_argument) {
	validar(cd_apresentacao);
	this->codigo = cd_apresentacao;
}

void CodigoIngresso::validar(string cd_ingresso) throw(invalid_argument) {
	if (!checkNumero(cd_ingresso))
		throw invalid_argument("Codigo de Ingresso invalido! Somente digitos sao aceitos.");
	if (cd_ingresso.size() != LIMITE)
		throw invalid_argument("Codigo de Ingresso invalido! Codigo tem que ter 5 digitos.");
}

void CodigoIngresso::setCodigoIngresso(string cd_ingresso) throw (invalid_argument) {
	validar(cd_ingresso);
	this->codigo = cd_ingresso;
}

void CPF::validar(string cpf) throw(invalid_argument) {
	regex valida(REGEX_EXP);

	if (!regex_match(cpf,valida))
		throw invalid_argument("CPF invalido! CPF tem que estar no seguinte formato: 000.000.000-00.");

	if (!checkCPF)
		throw invalid_argument("CPF invalido! Confira o CPF e tente novamente.");

}

void CPF::setCPF(string cpf) throw (invalid_argument) {
	validar(cpf);
	this->cpf = cpf;
}

void Data::validar(string data) throw (invalid_argument) {
	regex valida (REGEX_EXP); // Método para criar um objeto regex.
	if (!regex_match(data,valida))
		throw invalid_argument("Data inválida! Verificar formato, data precisa estar no formato DD/MM/YY");
}

void Data::setData(string data) throw (invalid_argument) {
	validar(data);
	this->data = data;
}

void DataValidade::validar(string dt_validade) throw (invalid_argument) {
	regex valida(REGEX_EXP); // Método para criar um objeto regex.
	if (!regex_match(dt_validade, valida))
		throw invalid_argument("Data de validade invalida! Data deve estar no formato MM/YY  e ser válida, ser maior que a data atual.");
}

void DataValidade::setDataDeValidade(string dt_validade) throw (invalid_argument) {
	validar(dt_validade);
	this->dt_validade = dt_validade;
}

void Disponibilidade::validar(int disponibilidade) throw (invalid_argument) {
	if (disponibilidade < LIMITE_MIN || disponibilidade > LIMITE_MAX)
		throw invalid_argument("Disponibilidade invalida! Valor precisa estar entre 0 e 250.");
}

void Disponibilidade::setDisponibilidade(int disponibilidade) throw (invalid_argument) {
	validar(disponibilidade);
	this->disponibilidade = disponibilidade;
}

void FaixaEtaria::validar(string faixa_et) throw (invalid_argument) {
	if (!all_of(LIM_FAIXA->begin(), LIM_FAIXA->end(), faixa_et))
		throw invalid_argument("Faixa étaria invalida! Valor só pode ser: L, 10, 12, 14, 16 ou 18.");
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

void Horario::validar(int hr, int min) throw (invalid_argument) {
	if (hr < LIMITE_HR_MIN || hr> LIMITE_HR_MAX)
		throw invalid_argument("Horario invalido! Somente são aceitos eventos das 07 as 22 hrs");
	if (!all_of(LIMITE_MIN.begin(), LIMITE_MIN.end(), min))
		throw invalid_argument("Horario invalido! Somente são aceitos eventos com os seguintes minutos: 00, 15, 30 e 45");
}

void Horario::setHorario(int hr, int min) throw (invalid_argument) {
	validar(hr, min);
	this->hr = hr;
	this->min = min;
}

void NomeEvento::validar(string nome) throw(invalid_argument) {
	if (nome.length() > LIMITE)
		throw invalid_argument("Nome do evento invalido! Nome do evento pode ter no máximo 20 caracteres.");
	regex valida(REGEX_EXP);
	if (!regex_match(nome, valida))
		throw invalid_argument("Nome do evento invalido! Nome do evento tem que ter ao menos uma letra, ponto só pode ser precedido de letra, espaço não pode ser seguido por espaço e tem que começar com uma letra.");
}

void NomeEvento::setNomeEvento(string nome) {
	validar(nome);
	this->nm_evento = nome;
}

void NumeroCartaoCredito::validar(string numero) throw (invalid_argument) {
	if (numero.size() != LIMITE)
		throw invalid_argument("Numero de cartao invalido! Numero precisa conter 16 digitos(0-9)!");

	if (!checkLuhn(numero))
		throw invalid_argument("Numero de cartão invalido! Confira o número do cartão, cartão inexistente");
}

void NumeroCartaoCredito::setNumero(string numero) throw (invalid_argument) {
	validar(numero);
	this->numero = numero;
}

void Preco::validar(string preco) throw (invalid_argument) {
	if (stof(preco) < stof(PRECO_MIN) || stof(preco) > stof(PRECO_MAX))
		throw invalid_argument("Preço invalido! Preço deve estar entre 0,00 e 1000,00");
}

void Preco::setPreco(string preco) throw (invalid_argument) {
	validar(preco);
	this->preco = preco;
}

void Senha::validar(string senha) throw (invalid_argument) {
	string auxMaiuscula, auxMinuscula, auxNumero;

	if (senha.size() != LIMITE)
		throw invalid_argument("Tamano da senha invalido! Senha precisa conter 6 caracteres!");

	for (string::iterator it = senha.begin(); it != senha.end(); it++) {
		if (isupper(*it)) {
			if (auxMaiuscula.empty())
				auxMaiuscula += *it;
			else {
				for (string::iterator it2 = auxMaiuscula.begin(); it2 != auxMaiuscula.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");

				}
				auxMaiuscula += *it;
			}

		}
		else if (islower(*it)) {
			if (auxMinuscula.empty())
				auxMinuscula += *it;
			else {
				for (string::iterator it2 = auxMinuscula.begin(); it2 != auxMinuscula.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");
				}
				auxMinuscula += *it;
			}
		}
		else if (isdigit(*it)) {
			if (auxNumero.empty())
				auxNumero += *it;
			else {
				for (string::iterator it2 = auxNumero.begin(); it2 != auxNumero.end(); it2++) {
					if (*it == *it2)
						throw invalid_argument("Senha invalida! Caracter repetido!");
				}
				auxNumero += *it;
			}
		}
		else
			throw invalid_argument("Senha invalida! Caracter nao permitido presente!");

	}

	if (auxMaiuscula.empty() || auxMinuscula.empty() || auxNumero.empty())
		throw invalid_argument("Senha invalida! Senha precisa conter ao menos uma letra maiuscula, uma miniscula, um numero e um simbolo");

}

void Senha::setSenha(string senha) throw (invalid_argument) {
	validar(senha);
	this->senha = senha;
}


