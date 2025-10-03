#include <stdio.h>
#include <stdlib.h>

int main () {
printf("Carta 1! \n");

// Variáveis da carta 1
    char Pais1[20];
    char codigo1[4];
    char nome1[20];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int ponto1;
    float densidade_populacional1;
    float pib_per_capita1;
    float superpoder1;
    
// Variáveis da carta 2
    char Pais2[20];
    char codigo2[4];
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int ponto2;
    float densidade_populacional2;
    float pib_per_capita2;
    float superpoder2;

    // Variáveis para o switch
    int escolhaatributo;


    printf("Digite o País: \n");
    scanf("%s", Pais1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²:  \n");
    scanf("%f", &area1);

    printf("Digite o PIB:  \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto1);

    densidade_populacional1 = (populacao1 / area1);
    pib_per_capita1 = (PIB1 / populacao1);
    superpoder1 = (float) populacao1 + area1 + PIB1 + (float) ponto1 + pib_per_capita1 + densidade_populacional1;

// Carta 1

    printf("País 1: %s - Código da carta 1: %s - Nome da cidade 1: %s \n" , Pais1, codigo1, nome1);
    printf("População 1: %.2lu - Número de pontos turísticos 1: %d \n" , populacao1, ponto1);
    printf("Área em km² 1: %.1f - PIB 1: %.1f \n" , area1, PIB1);
    printf("Densidade populacional 1: %.1f \n", densidade_populacional1);
    printf("PIB per capita 1: %.1f \n", pib_per_capita1);
    printf("Super poder 1: %.1f \n", superpoder1);

    
    printf("Carta 2! \n");
    
    printf("Digite o País: \n");
    scanf("%s", Pais2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²:  \n");
    scanf("%f", &area2);

    printf("Digite o PIB:  \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto2);

    densidade_populacional2 = (populacao2 / area2);
    pib_per_capita2 = (PIB2 / populacao2);
    superpoder2 =(float) populacao2 + area2 + PIB2 + (float) ponto2 + pib_per_capita2 + densidade_populacional2;

//Carta 2

    printf("País 2: %s - Código da carta 2: %s - Nome da cidade 2: %s \n" , Pais2, codigo2, nome2);
    printf("População 2: %lu - Número de pontos turísticos 2: %d \n" , populacao2, ponto2);
    printf("Área em km² 2: %.1f - PIB 2: %.1f \n" , area2, PIB2);
    printf("Densidade populacional 2: %.1f \n", densidade_populacional2);
    printf("PIB per capita 2: %.1f \n", pib_per_capita2);
    printf("Super poder 2:%.1f \n", superpoder2);

    // Determinação de qual população ganhou 
    printf("Escolha o atributo e verifique qual a carta vencedora!\n");
    printf("1. População\n");
    printf("2. Área em km²\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
printf("Qual o atributo escolhido? \n");
scanf("%d", &escolhaatributo);

switch (escolhaatributo){
    case 1: 
    if (populacao1 > populacao2) {
        printf("A população da carta 1 venceu!");
    } else if (populacao1 < populacao2) {
        printf("A população da carta 2 venceu!");
    } else {
        printf("Deram empate!");
    }
    break;
    case 2:
    if (area1 > area2) {
        printf("A área em km² da carta 1 venceu!");
    } else if (area1 < area2) {
        printf("A área em km² da carta 2 venceu!");
    } else {
        printf("Deram empate!");
    }
    break;
    case 3:
    if (PIB1 > PIB2) {
        printf("O PIB da carta 1 venceu!");
    } else if (PIB1 < PIB2) {
        printf("O PIB da carta 2 venceu!");
    } else {
        printf("Deram empate!");
    }
    break;
    case 4:
    if (ponto1 > ponto2) {
        printf("O número de pontos turísticos da carta 1 venceu!");
    } else if (ponto1 < ponto2) {
        printf("O número de pontos turísticos da carta 2 venceu!");
    } else{
        printf("Deram empate!");
    }
    break;
    case 5:
   if (densidade_populacional1 < densidade_populacional2) {
        printf("A densidade populacional da carta 1 venceu!");
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("A densidade populacional da carta 2 venceu!");
    } else {
        ("Deram empate!");
    }
    break;
    case 6:
    if (pib_per_capita1 > pib_per_capita2) {
        printf(" O PIB per capita da carta 1 venceu!");
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("O PIB per capita da carta 2 venceu!");
    } else {
        printf("Deram empate!");
    }
    break;
    case 7:
    if (superpoder1 > superpoder2) {
        printf("O super poder da carta 1 venceu!");
    } else if (superpoder1 < superpoder2) {
        printf("O super poder da carta 2 venceu!");
    } else {
        printf("Deram empate!");
    }
    break;
    default:
        printf("opção inválida!\n");
}  
    return 0;
}
