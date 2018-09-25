
#include "dominios.h"


using namespace std;

// Definições dos métodos

void Agencia::validar(string agencia) throw (invalid_argument) {
	if (agencia.size() != 5)
		throw invalid_argument("Agencia invalida!");

	for (std::string::iterator it = agencia.begin(); it != agencia.end(); it++) {
		if (int(*it) < ASCII_0 || int(*it) > ASCII_9)
			throw invalid_argument("Agencia invalida!");
	}
}

void Agencia::setAgencia(string agencia) throw(invalid_argument) {
	validar(agencia);
	this->agencia = agencia;
}

void Banco::validar(string banco) throw (invalid_argument) {
	if (banco.size() != LIMITE)
		throw invalid_argument("Banco invalido!");
	for (auto it = banco.begin(); it != banco.end(); it++) {
		if (int(*it) < ASCII_0 || int(*it) > ASCII_9)
			throw invalid_argument("Banco invalido!");
	}
}

void Banco::setBanco(string banco) throw(invalid_argument) {
	validar(banco);
	this->banco = banco;
}

void CapacidadeAcomodacao::validar(int capacidadeAcomodacao) {
	if (capacidadeAcomodacao < LIMITE_MIN || capacidadeAcomodacao > LIMITE_MAX)
		throw invalid_argument("Capacidade invalida.");
}

void CapacidadeAcomodacao::setCapacidadeDeAcomadacao(int capacidadeAcomodacao) {
	validar(capacidadeAcomodacao);
	this->CapacidadeDeAcomodacaoNum = capacidadeAcomodacao;
}

void Diaria::validar(float valorDiaria) {
	if (valorDiaria < DIARIA_PRECO_MIN || valorDiaria > DIARIA_PRECO_MAX)
		throw invalid_argument("Valor da diaria invalido.");
}

void Diaria::setDiaria(float valoDiaria) {
	validar(valoDiaria);
	this->ValorDiaria = valoDiaria;
}

void Data::validar(int dia, string mes, int ano) {
	
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

void Data::setData(int dia, string mes, int ano) {
	validar(dia, mes, ano);
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

void DataValidade::validar(int mes, int ano) {
	if (mes < MES_MIN || mes > MES_MAX)
		throw invalid_argument("Mês invalido.");

	if (ano < ANO_MIN || ano > ANO_MAX)
		throw invalid_argument("Ano invalido.");
}

void DataValidade::setDataDeValidade(int mes, int ano) {
	validar(mes, ano);
	this->month = mes;
	this->year = ano;
}

void Estado::validar(string estado) {
	if (estado.size() != 2)
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

void Estado::setEstado(string estado) {
	validar(estado);
	this->estado = estado;
}

void Identificador::validar(string identificador) {
	if (identificador.size() != LIMITE)
		throw invalid_argument("Identificador invalido. Identificador precisa ter 5 caracteres(a-z)!");

	
	for (std::string::iterator it = identificador.begin(); it != identificador.end(); it++) {
		if (int(*it) < ASCII_a || int(*it) > ASCII_z)
			throw invalid_argument("Identificador invalido, somentes caracteres de a-z são validos!");
	}
}

void Identificador::setIdentificador(string identificador) {
	validar(identificador);
	this->identificador = identificador;
}

void Nome::validar(string nome) {
	string aux;

	if (nome.empty())
		throw invalid_argument("Nome invalido.");

	for (auto it = nome.begin(); it != nome.end(); it++) {
		if ((int(*it) >= ASCII_a && int(*it) <= ASCII_z) || (int(*it) >= ASCII_A && int(*it) <= ASCII_Z))
			aux = *it;
		else if (int(*it) == SPACO || int(*it) == PONTO) {
			if (aux.empty())
				throw invalid_argument("Nome invalido!");
		}
	}

}

void Nome::setNome(string nome) {
	validar(nome);
	this->nome = nome;
}

void NumeroCartaoCredito::validar(string numero) {
	if (numero.size() != LIMITE)
		throw invalid_argument("Numero de cartao invalido! Numero precisa conter 16 digitos(0-9)!");

	if (!checkLuhn(numero))
		throw invalid_argument("Numero de cartão invalido.");
}

void NumeroCartaoCredito::setNumero(string numero) {
	validar(numero);
	this->numero = numero;
}

void NumeroContaCorrente::validar(string numero) {
	if (numero.size() != LIMITE)
		throw invalid_argument("Numero da conta invalido! Conta precisa ter 6 numeros 0-9");

	for (std::string::iterator it = numero.begin(); it != numero.end(); it++) {
		if (int(*it) < ASCII_0 || int(*it) > ASCII_9)
			throw invalid_argument("Numero da conta invalido, somente numeros de 0-9");
	}
}

void NumeroContaCorrente::setNumero(string numero) {
	validar(numero);
	this->numero = numero;
}

void Senha::validar(string senha) {
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
		else if (int(*it) >= ASCII_0 && int(*it) <= ASCII_0) {
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

void Senha::setSenha(string senha) {
	validar(senha);
	this->senha = senha;
}

void TipoAcomodacao::validar(string tipo) {
	if (tipo == "Apartamento");
	else if (tipo == "Casa");
	else if (tipo == "Flat");
	else
		throw invalid_argument("Tipo de acomodação invalido!");
}

void TipoAcomodacao::setAcomodacao(string tipo) {
	validar(tipo);
	this->tipo = tipo;
}