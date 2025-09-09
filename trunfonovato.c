#include <stdio.h>

int main() {

    printf("Carta 1! \n");
    char Estado1[20];
    char codigo1[4];
    char nome1[20];
    int populacao1;
    float area1;
    float PIB1;
    int ponto1;


    char Estado2[20];
    char codigo2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float PIB2;
    int ponto2;

    printf("Digite o Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²:  \n");
    scanf("%f", &area1);

    printf("Digite o PIB:  \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto1);


    printf("Estado 1: %s - Código da carta 1: %s - Nome da cidade 1: %s \n" , Estado1, codigo1, nome1);
    printf("População 1: %d - Número de pontos turísticos 1: %d \n" , populacao1, ponto1);
    printf("Área em km² 1: %f - PIB 1: %f \n" , area1, PIB1);

    printf("Carta 2! \n");
    
    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:  \n");
    scanf("%f", &area2);

    printf("Digite o PIB:  \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto2);

    printf("Estado 2: %s - Código da carta 2: %s - Nome da cidade 2: %s \n" , Estado2, codigo2, nome2);
    printf("População 2: %d - Número de pontos turísticos 2: %d \n" , populacao2, ponto2);
    printf("Área em km² 2: %f - PIB 2: %f \n" , area2, PIB2);

    return 0;






}
