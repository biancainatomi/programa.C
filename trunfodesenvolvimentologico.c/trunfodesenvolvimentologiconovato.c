#include <stdio.h>

int main() {

    printf("Carta 1! \n");
    char Estado1[20];
    char codigo1[4];
    char nome1[20];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int ponto1;
    float densidade_populacional1;
    float pib_per_capita1;
    float superpoder1;
    

    char Estado2[20];
    char codigo2[4];
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int ponto2;
    float densidade_populacional2;
    float pib_per_capita2;
    float superpoder2;
    

    printf("Digite o Estado: \n");
    scanf("%s", Estado1);

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

    printf("Estado 1: %s - Código da carta 1: %s - Nome da cidade 1: %s \n" , Estado1, codigo1, nome1);
    printf("População 1: %.2lu - Número de pontos turísticos 1: %d \n" , populacao1, ponto1);
    printf("Área em km² 1: %.2f - PIB 1: %.2f \n" , area1, PIB1);
    printf("Densidade populacional 1: %f \n", densidade_populacional1);
    printf("PIB per capita 1: %f \n", pib_per_capita1);
    printf("Super poder 1: %f \n", superpoder1);

    
    printf("Carta 2! \n");
    
    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

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

    printf("Estado 2: %s - Código da carta 2: %s - Nome da cidade 2: %s \n" , Estado2, codigo2, nome2);
    printf("População 2: %lu - Número de pontos turísticos 2: %d \n" , populacao2, ponto2);
    printf("Área em km² 2: %.2f - PIB 2: %.2f \n" , area2, PIB2);
    printf("Densidade populacional 2: %f \n", densidade_populacional2);
    printf("PIB per capita 2: %f \n", pib_per_capita2);
    printf("Super poder 2:%f \n", superpoder2);

    // Determinação de qual população ganhou 

    if (populacao1 > populacao2){
        printf("A população da carta 1 venceu! \n");
    } else {
        printf("A população da carta 2 venceu! \n");
    }
}
   