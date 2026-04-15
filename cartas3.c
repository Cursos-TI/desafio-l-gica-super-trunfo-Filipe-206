#include <stdio.h>
#include <string.h>

//essa biblioteca string, vi pesquisando, nao estava conseguindo colocar nome na variavel atributo1 e 2

int main() {

char estado, estado2;
char codigo[20], codigo2[20];
char nome[40], nome2[40];
int populacao, populacao2;
float area, area2;
float pib, pib2;
int pontos, pontos2;
int opcao, opcao2;
char atributo1[30], atributo2[30];

float densidade, densidade2, pibpc, pibpc2;
float superPoder, superPoder2;
float inversoDensidade, inversoDensidade2;

float valor1, valor2, valor11, valor22, somaCarta1, somaCarta2;


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
printf("Escolha o primeiro atributo para comparar: \n \n");
printf("1. Nome dos Paises\n");
printf("2. Populacao\n");
printf("3. Area\n");
printf("4. PIB \n");
printf("5. Numero de pontos turisticos\n");
printf("6. Densidade Populacional\n");
printf("7. PIB per Capita\n");
printf("8. SuperPoder\n \n");

printf("Escolha a opcao: ");
scanf("%d", &opcao);



switch (opcao)
{
case 1:
  printf("Carta 1: %s \n", nome);
    printf("Carta 2: %s \n", nome2);
    strcpy(atributo1, "Nome");
valor1 = 0;
valor2 = 0;

   break;

case 2:
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro atributo: Populacao \n");
strcpy(atributo1, "Populacao");
valor1 = populacao;
valor2 = populacao2;

break;

case 3: 
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro atributo: Area \n");
strcpy(atributo1, "Area");
valor1 = area;
valor2 = area2;

break;
 
case 4: 
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro atributo: PIB \n");
strcpy(atributo1, "PIB");
valor1 = pib;
valor2 = pib2;

break;

case 5: 
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro atributo: Pontos Turisticos\n");
strcpy(atributo1, "Pontos Turisticos");
valor1 = pontos;
valor2 = pontos2;

break;

case 6: 
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro atributo: Densidade Populacional \n");
strcpy(atributo1, "Densidade");
valor1 = inversoDensidade;
valor2 = inversoDensidade2;

break;

case 7: 
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro Atributo: PIB Per Capita \n");
strcpy(atributo1, "PIB Per Capita");
valor1 = pibpc;
valor2 = pibpc2;


break;

case 8: 
printf("\n%s - %s \n", nome, nome2);
printf("Primeiro Atributo: Super Poder \n");
strcpy(atributo1, "Super Poder");
valor1 = superPoder;
valor2 = superPoder2;

break;

default:
printf("OPCAO INVALIDA !!\n");
return 0;

   break;
}

//segundo atributo

printf("\nEscolha segundo atributo para comparar: \n \n");
if (opcao != 1) printf("1. Nome dos Paises\n");
if (opcao != 2) printf("2. Populacao\n");
if (opcao != 3) printf("3. Area\n");
if (opcao != 4) printf("4. PIB \n");
if (opcao != 5) printf("5. Numero de pontos turisticos\n");
if (opcao != 6) printf("6. Densidade Populacional\n");
if (opcao != 7) printf("7. PIB per Capita\n");
if (opcao != 8) printf("8. SuperPoder\n \n");

printf("Escolha a opcao: ");
scanf("%d", &opcao2);



if (opcao == opcao2)
{
   printf("\n Voce escolheu o mesmo atributo! Tente novamente. \n");
   return 0;
} 
else {
switch (opcao2)
{
case 1:
  printf("Carta 1: %s \n", nome);
    printf("Carta 2: %s \n", nome2);
   strcpy(atributo2, "Nome");
valor11 = 0;
valor22 = 0;


    break;

case 2:

printf(" \nSegundo atributo: Populacao \n");
strcpy(atributo2, "Populacao");
valor11 = populacao;
valor22 = populacao2;

break;

case 3: 

printf("\n Segundo atributo: Area \n");
strcpy(atributo2, "Area");
valor11 = area;
valor22 = area2;

break;
 
case 4: 

printf("\nSegundo atributo: PIB \n");
strcpy(atributo2, "PIB");
valor11 = pib;
valor22 = pib2;

break;

case 5: 

printf("\nSegundo atributo: Pontos Turisticos\n");
strcpy(atributo2, "Pontos Turisticos");
valor11 = pontos;
valor22 = pontos2;
break;

case 6: 
printf("\nSegundo atributo: Densidade Populacional \n");
strcpy(atributo2, "densidade");
valor11 = inversoDensidade;
valor22 = inversoDensidade2;
break;

case 7: 
printf("\nSegundo atributo: PIB Per Capita \n");
strcpy(atributo2, "PIB Per Capita");
valor11 = pibpc;
valor22 = pibpc2;

break;

case 8: 

printf("\nSegundo atributo: Super Poder \n");
strcpy(atributo2, "Super Poder");
valor11 = superPoder;
valor22 = superPoder2;

break;

default:
printf("OPCAO INVALIDA !!\n");
return 0;
   break;
}

printf("\nCOMPARACAO DOS DOIS ATRIBUTOS\n \n");
printf("Cidades: %s x %s \n", nome, nome2 );
printf("Primeiro atributo: %s \n", atributo1);
printf("Segundo atributo: %s \n", atributo2);
printf("Valor do primeiro atributo de cada carta: \n");
printf("Carta 1: %.2f \n", valor1);
printf("Carta 2: %.2f \n", valor2);
printf("Valor do segundo atributo de cada carta: \n");
printf("Carta 1: %.2f \n", valor11);
printf("Carta 2: %.2f \n", valor22);
 
somaCarta1 = (float) valor1 + valor11;
somaCarta2 = (float) valor2 + valor22; 

printf("Soma dos atributos da Carta 1: %.2f \n", somaCarta1);
printf("Soma dos atributos da Carta 2: %.2f \n", somaCarta2);

if (somaCarta1 > somaCarta2)
{
printf("\nCARTA 1: VENCEU A RODADA!!! \n\n");
}else if (somaCarta1 < somaCarta2)
{
   printf("\nCARTA 2: VENCEU A RODADA!!! \n\n");
}
   else {
   printf("\nA RODADA EMPATOU!!! \n\n");
}



return 0;

}
}