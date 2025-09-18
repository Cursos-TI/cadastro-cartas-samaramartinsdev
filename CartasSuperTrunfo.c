#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[50], estado2[50];
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
int população1, população2, turisticos1, turisticos2;
float area1, area2, pib1, pib2;

// Área para entrada de dados

strcpy(estado1, "Paraná");
strcpy(codigo1, "A01");
strcpy(cidade1, "Curitiba");
população1 = 1773718;
turisticos1 = 36;
area1 = 432.0;
pib1 = 98000000000.0;

strcpy(estado2, "Ceará");
strcpy(codigo2, "B02");
strcpy(cidade2, "Fortaleza");
população2 = 2686612;
turisticos2 = 25;
area2 = 313.0;
pib2 = 72000000000.0;
pib2 = 72000000000.0;


  // Área para exibição dos dados da cidade

printf("Estado: %s\n", estado1);
printf("Codigo da carta: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", população1);
printf("Pontos turísticos: %d\n", turisticos1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f\n", pib1);

printf("\n");

printf("Estado: %s\n", estado2);
printf("Codigo da carta: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("Pontos turísticos: %d\n", turisticos2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f\n", pib2);

return 0;
} 