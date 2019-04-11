/** 
 *  @file testes.h
 *  Assinatura de todos os testes de unidade do software de hospedagem em viagens.
 *  
 *  Estes testes são implementados por classes e seus métodos, que são capazes de 
 *  testar cada um dos domínios necessários para o software de hospedagem em viagens 
 * e determinar se eles estão em um bom funcionamento ou não.
 */

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <iostream>
#include <string>

using namespace std;

// Declaração de classes.

/** 
 *  Classe de Teste de Unidade da Agência.
 *  
 *  A classe descreve o teste de unidade de uma agência. Seus métodos criam e 
 *  destroem essa agência. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUAgencia {
    private:

        // Definições de constantes para evitar numeros mágicos.
    
        string VALOR_VALIDO   = "29584"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO = "300000"; /**< string contendo um exemplo de valor inválido */

        // Referência para o objeto a ser testado.


        Agencia *agencia; /**< instância da classe para a execução de testes unitários */

        CodigoEvento *agencia;


        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Agencia estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Agencia
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Agencia estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Agencia
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUAgencia::setUp()
         * @see TUAgencia::tearDown()
         * @see TUAgencia::testarCenarioSucesso()
         * @see TUAgencia::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Banco.
 *  
 *  A classe descreve o teste de unidade de um banco. Seus métodos criam e 
 *  destroem esse banco. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUBanco {
    private:

        // Definições de constantes para evitar numeros mágicos.
    
        string VALOR_VALIDO   = "324"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO = "4000"; /**< string contendo um exemplo de valor inválido */

        // Referência para o objeto a ser testado.

        Banco *banco; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Banco estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Banco
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Banco estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Banco
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUBanco::setUp()
         * @see TUBanco::tearDown()
         * @see TUBanco::testarCenarioSucesso()
         * @see TUBanco::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade da Capacidade de Acomodação.
 *  
 *  A classe descreve o teste de unidade de uma capacidade de acomodação. Seus métodos criam e 
 *  destroem essa capacidade de acomodação. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUCapacidadeAcomodacao {
    private:

        // Definições de constantes para evitar numeros mágicos.
    
        int VALOR_VALIDO   = 7; /**< inteiro contendo um exemplo de valor válido */
        int VALOR_INVALIDO = 15; /**< inteiro contendo um exemplo de valor inválido */

        // Referência para o objeto a ser testado.

        CapacidadeAcomodacao *capacidadeAcomodacao; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe CapacidadeAcomodacao estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see CapacidadeAcomodacao
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe CapacidadeAcomodacao estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see CapacidadeAcomodacao
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUCapacidadeAcomodacao::setUp()
         * @see TUCapacidadeAcomodacao::tearDown()
         * @see TUCapacidadeAcomodacao::testarCenarioSucesso()
         * @see TUCapacidadeAcomodacao::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade da Diária.
 *  
 *  A classe descreve o teste de unidade de uma diária. Seus métodos criam e 
 *  destroem essa diária. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUDiaria {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        float VALOR_VALIDO   = 5738.45; /**< float contendo um exemplo de valor válido */
        float VALOR_INVALIDO = 37625.89; /**< float contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        Diaria *diaria; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Diaria estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Diaria
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Diaria estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Diaria
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUDiaria::setUp()
         * @see TUDiaria::tearDown()
         * @see TUDiaria::testarCenarioSucesso()
         * @see TUDiaria::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade da Data.
 *  
 *  A classe descreve o teste de unidade de uma data. Seus métodos criam e 
 *  destroem essa data. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUData {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        const static int VALOR_VALIDO_DIA   = 20; /**< inteiro contendo um exemplo de valor válido */
        const static int VALOR_INVALIDO_DIA = 35; /**< inteiro contendo um exemplo de valor inválido */

        
        string VALOR_VALIDO_MES   = "fev"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO_MES = "mil"; /**< string contendo um exemplo de valor inválido */

        
        const static int VALOR_VALIDO_ANO   = 2002; /**< inteiro contendo um exemplo de valor válido */
        const static int VALOR_INVALIDO_ANO = 3580; /**< inteiro contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        Data *data; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Data estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Data
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Data estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Data
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUData::setUp()
         * @see TUData::tearDown()
         * @see TUData::testarCenarioSucesso()
         * @see TUData::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade da Data de Validade.
 *  
 *  A classe descreve o teste de unidade de uma data de validade. Seus métodos criam e 
 *  destroem essa data de validade. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUDataValidade {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        const static int VALOR_VALIDO_MES   = 10; /**< inteiro contendo um exemplo de valor válido */
        const static int VALOR_INVALIDO_MES = 78; /**< inteiro contendo um exemplo de valor inválido */

        
        const static int VALOR_VALIDO_ANO   = 45; /**< inteiro contendo um exemplo de valor válido */
        const static int VALOR_INVALIDO_ANO = 133; /**< inteiro contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        DataValidade *dataValidade; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe DataValidade estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see DataValidade
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe DataValidade estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see DataValidade
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUDataValidade::setUp()
         * @see TUDataValidade::tearDown()
         * @see TUDataValidade::testarCenarioSucesso()
         * @see TUDataValidade::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Estado.
 *  
 *  A classe descreve o teste de unidade de um estado brasileiro. Seus métodos criam e 
 *  destroem esse estado. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUEstado {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "GO"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO = "RT"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        Estado *estadoBr; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Estado estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Estado
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Estado estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Estado
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUEstado::setUp()
         * @see TUEstado::tearDown()
         * @see TUEstado::testarCenarioSucesso()
         * @see TUEstado::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Identificador.
 *  
 *  A classe descreve o teste de unidade de um identificador. Seus métodos criam e 
 *  destroem esse identificador. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUIdentificador {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "teste"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO = "test4567"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        Identificador *identificador; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Identificador estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Identificador
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Identificador estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Identificador
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUIdentificador::setUp()
         * @see TUIdentificador::tearDown()
         * @see TUIdentificador::testarCenarioSucesso()
         * @see TUIdentificador::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Nome.
 *  
 *  A classe descreve o teste de unidade de um nome. Seus métodos criam e 
 *  destroem esse nome. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUNome {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO    = "Sophie Azevedo."; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO1 = "Natalya Petrovna"; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO2 = "."; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO3 = " "; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO4 = ".Gabriel"; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO5 = "Melissa  Lima"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        Nome *nome; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Nome estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Nome
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Nome estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Nome
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUNome::setUp()
         * @see TUNome::tearDown()
         * @see TUNome::testarCenarioSucesso()
         * @see TUNome::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Número do Cartão de Crédito.
 *  
 *  A classe descreve o teste de unidade de um número do cartão de crédito. Seus métodos criam e 
 *  destroem esse número do cartão de crédito. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUNumeroCartaoCredito {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO    = "4717415691789511"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO1 = "2020101033445678"; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO2 = "21679010301234567890"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        NumeroCartaoCredito *numeroCartaoCredito; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe NumeroCartaoCredito estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see NumeroCartaoCredito
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe NumeroCartaoCredito estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see NumeroCartaoCredito
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUNumeroCartaoCredito::setUp()
         * @see TUNumeroCartaoCredito::tearDown()
         * @see TUNumeroCartaoCredito::testarCenarioSucesso()
         * @see TUNumeroCartaoCredito::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Número da Conta Corrente.
 *  
 *  A classe descreve o teste de unidade de um número da conta corrente. Seus métodos criam e 
 *  destroem esse número da conta corrente. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUNumeroContaCorrente {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "356042"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO = "30563214"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        NumeroContaCorrente *numeroContaCorrente; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe NumeroContaCorrente estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see NumeroContaCorrente
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe NumeroContaCorrente estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see NumeroContaCorrente
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUNumeroContaCorrente::setUp()
         * @see TUNumeroContaCorrente::tearDown()
         * @see TUNumeroContaCorrente::testarCenarioSucesso()
         * @see TUNumeroContaCorrente::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade da Senha.
 *  
 *  A classe descreve o teste de unidade de uma senha. Seus métodos criam e 
 *  destroem essa senha. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUSenha {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO    = "Ab0!Cd1&"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO1 = "0$Invalido"; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO2 = "&!!234Ab"; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO3 = "Tg2#"; /**< string contendo um exemplo de valor inválido */
        string VALOR_INVALIDO4 = "testes12"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        Senha *senha; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe Senha estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see Senha
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe Senha estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see Senha
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUSenha::setUp()
         * @see TUSenha::tearDown()
         * @see TUSenha::testarCenarioSucesso()
         * @see TUSenha::testarCenarioFalha()
         * 
		*/
        int run();
};

/** 
 *  Classe de Teste de Unidade do Tipo de Acomodação.
 *  
 *  A classe descreve o teste de unidade de um tipo de acomodação. Seus métodos criam e 
 *  destroem esse tipo de acomodação. Seus métodos também apresentam exemplos de valores 
 *  válidos e inválidos para esse domínio, checando se os valores válidos passam
 *  cenários de sucesso e se os inválidos têm exceção lançada nos cenários de 
 *  falha.
 *  
 */
class TUTipoAcomodacao {

    private:

        // Definições de constantes para evitar numeros m�gicos.

        string VALOR_VALIDO   = "Casa"; /**< string contendo um exemplo de valor válido */
        string VALOR_INVALIDO = "Teatro"; /**< string contendo um exemplo de valor inválido */

        // Refer�ncia para o objeto a ser testado.

        TipoAcomodacao *tipoAcomodacao; /**< instância da classe para a execução de testes unitários */

        // Estado do teste.

        int estado; /**< índice inteiro que indicará se o estado do teste é de sucesso ou de falha */

        // Declarações de métodos.
        
        /**
		 * Método para criar a classe a ser testada.
		 * 
		 * Esse método cria a classe que passará pelos testes unitários.
         * Se ela for criada sem erros, esse método iguala o estado do 
         * teste ao índice que corresponde ao sucesso da classe ter sido 
         * criada.
		 * 
		*/
        void setUp();

        /**
		 * Método para testar a classe em um cenário de sucesso.
		 * 
		 * Esse método testa se os métodos da classe TipoAcomodacao estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser bem-sucedida. Se ela for bem-sucedida,
         * o estado é igualado a SUCESSO do teste. Se não for, o estado é 
         * igualado a FALHA do teste.
         * 
         * @see TipoAcomodacao
		 * 
		*/
        void testarCenarioSucesso();

        /**
		 * Método para testar a classe em um cenário de falha.
		 * 
		 * Esse método testa se os métodos da classe TipoAcomodacao estão
         * funcionando perfeitamente para um cenário em que a entrada
         * do exemplo deve ser falha. Se ela falhar, o estado é igualado 
         * a SUCESSO do teste. Se não falhar, o estado é igualado a FALHA 
         * do teste.
         * 
         * @see TipoAcomodacao
		 * 
		*/
        void testarCenarioFalha();

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
		*/
        void tearDown();

    public:

        // Definições de constantes para reportar resultado do teste.

        const static int SUCESSO =  0; /**< índice inteiro que iguala o estado do teste a 0 se este for bem-sucedido */
        const static int FALHA   = -1; /**< índice inteiro que iguala o estado do teste a -1 se este for falhar */

        /**
		 * Método para destruir a classe que foi testada.
		 * 
		 * Esse método destroi a classe que passou pelos testes unitários.
		 * 
         * @see TUTipoAcomodacao::setUp()
         * @see TUTipoAcomodacao::tearDown()
         * @see TUTipoAcomodacao::testarCenarioSucesso()
         * @see TUTipoAcomodacao::testarCenarioFalha()
         * 
		*/
        int run();
};

#endif // TESTES_H_INCLUDED
