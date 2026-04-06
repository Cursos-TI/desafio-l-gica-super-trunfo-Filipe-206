#include <stdio.h>
int main() {

char estado = 'A', estado2 = 'B';
char codigo[20] = "A01", codigo2[20] = "A02";
char nome[40] = "Brasilia", nome2[40] = "Natal";
int populacao, populacao2;
float area, area2;
float pib, pib2;
int pontos, pontos2;


populacao = 3094325;
area = 5760.8;
pib = 286.943;
pontos = 30;
populacao2 = 751300;
area2 = 167.4;
pib2 = 21.137;
pontos2 = 20;








float densidade, densidade2, pibpc, pibpc2;
float superPoder, superPoder2;
float inversoDensidade, inversoDensidade2;

//CARTA 1
// printf("CARTA 1\n");
// printf("Digite a o estado: ");
// scanf(" %c", &estado);
// printf("Digite  o codigo: ");
// scanf("%s", codigo);
// printf("Digite o nome da cidade: ");
// scanf("%s", nome);
// printf("Digite a populacao da cidade: ");
// scanf("%d", &populacao);
// printf("Digite a area da cidade: ");
// scanf("%f", &area);
// printf("Digite o pib da cidade: ");
// scanf("%f", &pib);
// printf("Digite a quantidade de pontos turisticos: ");
// scanf("%d", &pontos);

printf("\n");

// CARTA 2
// printf("CARTA 2\n");
// printf("Digite o estado: ");
// scanf(" %c", &estado2);
// printf("Digite  o codigo: ");
// scanf("%s", codigo2);
// printf("Digite o nome da cidade: ");
// scanf("%s", nome2);
// printf("Digite a populacao da cidade: ");
// scanf("%d", &populacao2);
// printf("Digite a area da cidade: ");
// scanf("%f", &area2);
// printf("Digite o pib da cidade: ");
// scanf("%f", &pib2);
// printf("Digite a quantidade de pontos turisticos: ");
// scanf("%d", &pontos2);

//calculos

densidade = (float) populacao / area;
densidade2 = (float) populacao2 / area2;
pibpc = (float) pib * 1000000000 / populacao;
pibpc2 = (float) pib2 * 1000000000 / populacao2;

inversoDensidade = (float) area / populacao;
inversoDensidade2 = (float) area2 / populacao2;

 //superpoder

superPoder = (float) populacao + area + pib + pontos + pibpc + inversoDensidade;
superPoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpc2 + inversoDensidade2;

printf("\n");

printf("CARTA 1: \n");
printf("Estado: %c \n", estado);
printf("Codigo: %s \n", codigo);
printf("Nome da cidade: %s \n", nome);
printf("Populacao: %d \n", populacao);
printf("Area: %f km \n", area);
printf("Pib: R$%f \n", pib);
printf("Pontos Turisticos: %d \n", pontos);
printf("Densidade populacional: %.2f hab/km \n", densidade);
printf("Pib per Capita: R$%.2f \n", pibpc);
printf("Superpoder: %f \n", superPoder);

printf("\n");

printf("CARTA 2: \n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome da cidade: %s \n", nome2);
printf("Populacao: %d \n", populacao2);
printf("Area: %f km \n", area2);
printf("Pib: R$%f \n", pib2);
printf("Pontos Turisticos: %d \n", pontos2);
printf("Densidade populacional: %.2f hab/km \n", densidade2);
printf("Pib per Capita: R$%.2f \n", pibpc2);
printf("Superpoder: %f \n", superPoder2);

printf("\n");

//COMPARACAO

printf("Comparacao das cartas \n");
printf("\n");

if (populacao > populacao2)
{ printf("Carta 1 - %s: %d \n",nome, populacao);
   printf("Carta 2 - %s: %d \n",nome2, populacao2);
   printf("Resultado: Carta 1 - %s venceu!", nome);
} else {  
printf("Carta 1 - %s: %d \n",nome, populacao);
   printf("Carta 2 - %s: %d \n",nome2, populacao2);
   printf("Resultado: Carta 2 - %s venceu!", nome2);

           }


return 0;

}