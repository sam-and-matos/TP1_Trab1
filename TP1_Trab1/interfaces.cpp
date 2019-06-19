#include "interfaces.h"

ErroBanco::ErroBanco(string mensagem) {
	this->mensagem = mensagem;
}

string ErroBanco::what() {
	return mensagem;
}

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
	this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna) {
	this->valorColuna = valorColuna;
}