#include <stdio.h>
int main() {

char estado, estado2;
char codigo[20], codigo2[20];
char nome[40], nome2[40];
int populacao, populacao2;
float area, area2;
float pib, pib2;
int pontos, pontos2;
int opcao;

float densidade, densidade2, pibpc, pibpc2;
float superPoder, superPoder2;
float inversoDensidade, inversoDensidade2;

//CARTA 1
printf("CARTA 1\n");
printf("Digite a o estado: ");
scanf(" %c", &estado);
printf("Digite  o codigo: ");
scanf("%s", codigo);
printf("Digite o nome da cidade: ");
scanf("%s", nome);
printf("Digite a populacao da cidade: ");
scanf("%d", &populacao);
printf("Digite a area da cidade: ");
scanf("%f", &area);
printf("Digite o pib da cidade: ");
scanf("%f", &pib);
printf("Digite a quantidade de pontos turisticos: ");
scanf("%d", &pontos);

printf("\n");

//CARTA 2
printf("CARTA 2\n");
printf("Digite o estado: ");
scanf(" %c", &estado2);
printf("Digite  o codigo: ");
scanf("%s", codigo2);
printf("Digite o nome da cidade: ");
scanf("%s", nome2);
printf("Digite a populacao da cidade: ");
scanf("%d", &populacao2);
printf("Digite a area da cidade: ");
scanf("%f", &area2);
printf("Digite o pib da cidade: ");
scanf("%f", &pib2);
printf("Digite a quantidade de pontos turisticos: ");
scanf("%d", &pontos2);

//calculos

densidade = (float) populacao / area;
densidade2 = (float) populacao2 / area2;
pibpc = (float) pib * 1000000 / populacao;
pibpc2 = (float) pib2 * 1000000 / populacao2;

inversoDensidade = (float) area / populacao;
inversoDensidade2 = (float) area2 / populacao2;

 //superpoder

superPoder = ((float) populacao + area + pib + pontos + pibpc + inversoDensidade) / 100;
superPoder2 = ((float) populacao2 + area2 + pib2 + pontos2 + pibpc2 + inversoDensidade2) / 100;

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
printf("Qual atributo voce deseja comparar?\n \n");
printf("1. Nome dos Paises\n");
printf("2. Populacao\n");
printf("3. Area\n");
printf("4. PIB \n");
printf("5. Numero de pontos turisticos\n");
printf("6. Densidade Populacional\n");
printf("7. PIB per Capita\n");
printf("8. SuperPoder\n");

printf("Escolha a opcao: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
  printf("Carta 1: %s \n", nome);
    printf("Carta 2: %s \n", nome2);
   break;

case 2:
   printf("%s - %s \n", nome, nome2);
printf("Atributo: Populacao \n");
printf("Carta 1: %d \nCarta 2: %d \n",populacao, populacao2);
if (populacao > populacao2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (populacao < populacao2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;

case 3: 
printf("%s - %s \n", nome, nome2);
printf("Atributo: Area \n");
printf("Carta 1: %.2f \nCarta 2: %.2f \n",area, area2);
if (area > area2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (area < area2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;
 
case 4: 
printf("%s - %s \n", nome, nome2);
printf("Atributo: PIB \n");
printf("Carta 1: %.2f \nCarta 2: %.2f \n",pib, pib2);
if (pib > pib2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (pib < pib2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;

case 5: 
printf("%s - %s \n", nome, nome2);
printf("Atributo: Pontos Turisticos\n");
printf("Carta 1: %d \nCarta 2: %d \n",pontos, pontos2);
if (pontos > pontos2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (pontos < pontos2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;

case 6: 
printf("%s - %s \n", nome, nome2);
printf("Atributo: Densidade Populacional \n");
printf("Carta 1: %.2f \nCarta 2: %.2f \n",densidade, densidade2);
if (densidade < densidade2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (densidade > densidade2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;

case 7: 
printf("%s - %s \n", nome, nome2);
printf("Atributo: PIB Per Capita \n");
printf("Carta 1: %.2f \nCarta 2: %.2f \n",pibpc, pibpc2);
if (pibpc > pibpc2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (pibpc < pibpc2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;

case 8: 
printf("%s - %s \n", nome, nome2);
printf("Atributo: Super Poder \n");
printf("Carta 1: %.2f \nCarta 2: %.2f \n",superPoder, superPoder2);
if (superPoder > superPoder2)
{
   printf("CARTA 1 VENCEU !!! \n");
} else if (superPoder < superPoder2)
{
   printf("CARTA 2 VENCEU !!! \n");
} else { 
   printf("EMPATE !!\n");
}
break;








default:
printf("OPCAO INVALIDA !!\n");
   break;
}


return 0;

}