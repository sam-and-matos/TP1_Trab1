#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
    TUAgencia teste;

    switch(teste.run()){
        case TUAgencia::SUCESSO: cout << "SUCESSO";
                                break;
        case TUAgencia::FALHA  : cout << "FALHA";
                                break;
    }

    return 0;
}
