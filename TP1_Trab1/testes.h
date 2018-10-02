#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <iostream>
#include <string>

using namespace std;

// Declaração de classe.

class TUAgencia {
    private:

        // Definições de constantes para evitar numeros mágicos.
    
        string VALOR_VALIDO   = "29584";
        string VALOR_INVALIDO = "300000";

        // Referência para o objeto a ser testado.

        Agencia *agencia;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUBanco {
    private:

        // Definições de constantes para evitar numeros mágicos.
    
        string VALOR_VALIDO   = "324";
        string VALOR_INVALIDO = "4000";

        // Referência para o objeto a ser testado.

        Banco *banco;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUCapacidadeAcomodacao {
    private:

        // Definições de constantes para evitar numeros mágicos.
    
        int VALOR_VALIDO   = 7;
        int VALOR_INVALIDO = 15;

        // Referência para o objeto a ser testado.

        CapacidadeAcomodacao *capacidadeAcomodacao;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void testarCenarioSucesso();
        void testarCenarioFalha();
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUDiaria {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        float VALOR_VALIDO   = 5738.45;
        float VALOR_INVALIDO = 37625.89;

        // Refer�ncia para o objeto a ser testado.

        Diaria *diaria;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUData {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        const static int VALOR_VALIDO_DIA   = 20;
        const static int VALOR_INVALIDO_DIA = 35;

        
        string VALOR_VALIDO_MES   = "fev";
        string VALOR_INVALIDO_MES = "mil";

        
        const static int VALOR_VALIDO_ANO   = 2002;
        const static int VALOR_INVALIDO_ANO = 3580;

        // Refer�ncia para o objeto a ser testado.

        Data *data;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUDataValidade {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        const static int VALOR_VALIDO_MES   = 10;
        const static int VALOR_INVALIDO_MES = 78;

        
        const static int VALOR_VALIDO_ANO   = 45;
        const static int VALOR_INVALIDO_ANO = 133;

        // Refer�ncia para o objeto a ser testado.

        DataValidade *dataValidade;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUEstado {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "GO";
        string VALOR_INVALIDO = "RT";

        // Refer�ncia para o objeto a ser testado.

        Estado *estadoBr;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUIdentificador {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "teste";
        string VALOR_INVALIDO = "test4567";

        // Refer�ncia para o objeto a ser testado.

        Identificador *identificador;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUNome {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO    = "Sophie Azevedo.";
        string VALOR_INVALIDO1 = "Natalya Petrovna";   
        string VALOR_INVALIDO2 = "."; 
        string VALOR_INVALIDO3 = " ";
        string VALOR_INVALIDO4 = ".Gabriel";
        string VALOR_INVALIDO5 = "Melissa  Lima";

        // Refer�ncia para o objeto a ser testado.

        Nome *nome;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUNumeroCartaoCredito {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO    = "4717415691789511";
        string VALOR_INVALIDO1 = "2020101033445678";
        string VALOR_INVALIDO2 = "21679010301234567890";

        // Refer�ncia para o objeto a ser testado.

        NumeroCartaoCredito *numeroCartaoCredito;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUNumeroContaCorrente {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "356042";
        string VALOR_INVALIDO = "30563214";

        // Refer�ncia para o objeto a ser testado.

        NumeroContaCorrente *numeroContaCorrente;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUSenha {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO    = "Ab0!Cd1&";
        string VALOR_INVALIDO1 = "0$Invalido";
        string VALOR_INVALIDO2 = "&!!234Ab";
        string VALOR_INVALIDO3 = "Tg2#";
        string VALOR_INVALIDO4 = "testes12";

        // Refer�ncia para o objeto a ser testado.

        Senha *senha;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

class TUTipoAcomodacao {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "Casa";
        string VALOR_INVALIDO = "Teatro";

        // Refer�ncia para o objeto a ser testado.

        TipoAcomodacao *tipoAcomodacao;

        // Estado do teste.

        int estado;

        // Declara��es de m�todos.

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0;
        const static int FALHA   = -1;

        int run();
};

#endif // TESTES_H_INCLUDED
