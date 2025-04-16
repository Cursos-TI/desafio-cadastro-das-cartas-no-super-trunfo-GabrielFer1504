#include <stdio.h>

int main() {
// Olá, Meu nome é Gabriel Fernando e estas são minhas primeiras linhas de código em "C",

// programando o jogo Desafio De Cartas Super Trunfo Estados!

// Desafio de Cartas Super Trunfo Estados!

// Declarando Variáveis para as cartas.

char Estado1[20], Estado2[20]; 
char Código1[20], Código2[20]; 
char Nome1[20], Nome2[20]; 
int População1, População2; 
float Área1, Área2;
float PIB1, PIB2;
int Numero_De_Pontos_Turisticos1, Numero_De_Pontos_Turisticos2; 
float Densidade_Populacional1, Densidade_Populacional2;
float PIB_per_capita1, PIB_per_capita2;

// Cadastro Das Cartas.

// CARTA 01:

printf("Carta 1: \n"); 

printf("Estado:\n");
scanf("%s", Estado1);

printf("Código:\n");
scanf("%s", Código1); 
printf("Nome Da Cidade:\n");
scanf("%s", Nome1);

printf("População:\n");
scanf("%d", &População1); 

printf("Área:\n");
scanf("%f", &Área1);

printf("PIB:\n");
scanf("%f", &PIB1); 

printf("Numero de Pontos Turísticos: \n");
scanf("%d", &Numero_De_Pontos_Turisticos1);

printf("Densidade Populacional: \n");
scanf("%f", &Densidade_Populacional1);

printf("PIB per capita: \n");
scanf("%f", &PIB_per_capita1);


// Cálculos para Carta 1:

PIB_per_capita1 = PIB1 / População1;
Densidade_Populacional1 = População1 / Área1;


// Exibindo dados da Carta 1:

printf("Carta 1:\n");
printf("Estado: %s\n", Estado1);
printf("Código: %s\n", Código1);
printf("Nome Da Cidade: %s\n", Nome1);
printf("População: %d\n", População1);
printf("Área: %.2f\n", Área1);
printf("PIB: %.2f\n", PIB1);
printf("Numero De Pontos Turísticos: %d\n", Numero_De_Pontos_Turisticos1);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
printf("PIB per capita: %f\n", PIB_per_capita1);


// CARTA 02:

printf("Carta 2: \n"); 
printf("Estado:\n");
scanf("%s", Estado2); 

printf("Código:\n");
scanf("%s", Código2); 

printf("Nome Da Cidade: \n");
scanf("%s", Nome2);

printf("População: \n");
scanf("%d", &População2);

printf("Área: \n");
scanf("%f", &Área2);

printf("PIB: \n");
scanf("%f", &PIB2);

printf("Numero de Pontos Turísticos: \n");
scanf("%d", &Numero_De_Pontos_Turisticos2);

printf("Densidade Populacional: \n");
scanf("%f", &Densidade_Populacional2);

printf("PIB per capita: \n");
scanf("%f", &PIB_per_capita2);


// Cálculos para Carta 2:

PIB_per_capita2 = PIB2 / População2;
Densidade_Populacional2 = População2 / Área2;


// Exibindo dados da Carta 2:

printf("Carta 2: \n");
printf("Estado: %s\n", Estado2);
printf("Código: %s\n", Código2);
printf("Nome Da Cidade: %s\n", Nome2);
printf("População: %d\n", População2);
printf("Área: %.2f\n", Área2);
printf("PIB: %.2f\n", PIB2);
printf("Numero De Pontos Turísticos: %d\n", Numero_De_Pontos_Turisticos2);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
printf("PIB per capita: %f\n", PIB_per_capita2);

return 0; 
}