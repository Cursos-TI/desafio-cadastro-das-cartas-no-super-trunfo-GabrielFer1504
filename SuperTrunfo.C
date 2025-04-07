#include <stdio.h>

    int main(){

     // Desafio de Cartas Super Trunfo Estados! - Novato;

     // Declarando Variáveis para as cartas.
    
        char Estado1, Estado2;
        char Código1[4], Código2[4];
        char Nome1[20], Nome2[20];
        int População1, População2;
        float Área1KM², Área2KM²;
        float PIB1,PIB2;
        int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2;

     // Cadastro Das Cartas.
     // Carta 01:

        printf("Carta 1 \n");
        printf("Estado: escreva uma letra de A a H: \n");
        scanf(" %c", &Código1);

        printf("Escreva o Código: \n");
        scanf(" %s", &Código1);

        printf("Nome Da Cidade: \n");
        scanf(" %S", &Nome1);

        printf("Populção; \n");
        scanf(" %d", &População1);

        printf("ÁreaKM²: \n");
        scanf(" %d", &Área1KM²);

        printf("PIB \n");
        scanf(" %f", &PIB1);

        printf("Numero de Pontos Turisticos: \n");
        scanf("%d", &NumeroDePontosTuristicos1);

        float Pibpercapita1 = PIB1 / População1;
        float densidade1 = População1 / Área1KM²;

        printf("Estado: %c_\n , Código; %s_\n , População: %d \n , ÁreaKM²: %3f \n , PIB: %3.f \n , Numero Dos Pontos Turisticos: %d \n , PIB Per Capita: %3.f \n , Densidadae Demografica: %.3f \n , Estado1, Código1, Nome1, População1, Área1, PIB1, NumeroDePontosTuristicos1, PIBPercapita1, Densidade1");

     // Carta02:

        printf("Carta 2 \n");
        printf("Estado: escreva uma letra de A a H: \n");
        scanf(" %c", &Código2);
        
    }