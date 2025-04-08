#include <stdio.h>

    int main(){            
       
     // *Olá, Meu nome é Gabriel Fernando e estas são minhas primeiras linhas de código em "C", programando o jogo Desafio De Cartas Super Trunfo Estados!\*
      
       

     // Desafio de Cartas Super Trunfo Estados! - Novato;



     // Declarando Variáveis para as cartas.
    
        char Estado1, Estado2;                                       /*Usamos "char" para aramazenar caracteres/letras/strings. */
        char Código1, Código2;                                       /*USamos "char" para armazenar os códigos das cartas.*/
        char Nome1[20], Nome2[20];                                   /*Usamos "char" para armazenar os nomes das cartas.*/
        int População1, População2;                                  /*Usamos "int" para para armazenar um valor "inteiro".*/
        float Área1, Área2;                                          /*Usamos "float" para declarar uma variável de ponto flutuante.*/
        float PIB1,PIB2;                                             /*Usamos "float" para declara uma variável de ponto flutuante no PIB.*/            
        int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2;    /*Usamos "int" para armazenar um valor "inteiro".*/

       
     // Cadastro Das Cartas.
     
     // CARTA 01:

        printf("Carta 1 \n");                                        /*Usamos "printf" para imprimir informações na tela e "\n" para saltar linha.*/
       
        printf("Estado: escreva uma letra de A a H: \n");
        scanf("%c", &Estado1);                                       /*Usamos "scanf" para ler dados fornecidos pelo jogado e "%c" para imprimir um unico caractere.*/

        printf("Código: \n");
        scanf("%s", &Código1);                                       /*usamos "%s" para imprimir uma cadeia de caractere "strings" e "&" para obter o endereço de uma variável na memória.*/

        printf("Nome Da Cidade: \n");
        scanf("%s", &Nome1);

        printf("Populção; \n");
        scanf("%d", &População1);                                    /*Usamos "%d para imprimir um inteiro no formato decimal".*/

        printf("Área: \n");
        scanf("%d", &Área1);

        printf("PIB \n");
        scanf("%f", &PIB1);                                          /*Usamos "%f" para imprimir um número de ponto flutuante no formato padrão.*/

        printf("Numero de Pontos Turisticos: \n");
        scanf("%d", &NumeroDePontosTuristicos1);

        printf("Estado: %c \n , Código; %s \n , População: %d \n , Área1: %f \n , PIB: %f \n , Numero Dos Pontos Turisticos: %d \n , Estado1, Código1, Nome1, População1, Área1, PIB1, NumeroDePontosTuristicos1,");  /*Usamos "printf" no final para exibir todas as informações que estão na "CARTA01" coletadas pelo usuário e imprimos na tela do computador.*/


     // CARTA 02:

        printf("Carta 2 \n");                                        /*Usamos "printf" para imprimir informações na tela e "\n" para saltar linha.*/
        
        printf("Estado: escreva uma letra de A a H: \n");
        scanf("%c", &Estado2);                                       /*Usamos "scanf" para ler dados fornecidos pelo jogado e "%c" para imprimir um unico caractere.*/

        printf("Código: \n");
        scanf("%d", &Código2);                                       /*usamos "%s" para imprimir uma cadeia de caractere "strings" e "&" para obter o endereço de uma variável na memória.*/

        printf("Nome Da Cidade: \n");
        scanf("%s", &Nome2);                                         

        printf("Populção; \n");
        scanf("%d", &População2);                                    /*Usamos "%d para imprimir um inteiro no formato decimal".*/

        printf("Área: \n");
        scanf("%d", &Área2);

        printf("PIB \n");
        scanf("%f", &PIB2);                                          /*Usamos "%f" para imprimir um número de ponto flutuante no formato padrão.*/

        printf("Numero de Pontos Turisticos: \n");
        scanf("%d", &NumeroDePontosTuristicos2);

        printf("Estado: %c \n, Código: %s \n, Nome Da Cidade: %c \n, População: %d \n, Área: %f \n, PIB: %f \n. Numero De Pontos Turisticos: %d \n, Estado2, Código2, Nome2, População2, Área2, PIB2, NumeroDePontosTuristicos2");   /*Usamos "printf" no final para exibir todas as informações que estão na "CARTA02" coletadas pelo usuário e imprimos na tela do computador.*/

        return 0;                                                    /*Usamos "return 0" para dizer que finalizamos nossa linha código.*/

    }                                                                /*Usamos a chave "}" para dizer que encerramos o programa."*/