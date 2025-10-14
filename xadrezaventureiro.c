#include <stdio.h>
int main () {

    int bispo = 0 ;
    int rainha;


    // Mover a Torre 5 casas para a direita usando o "for"
    printf("Movimentação da torre!\n");
    for (int i = 0; i < 5; i++){
        printf("Direita\n"); //Imprime a direção do movimento
    }

    printf("\n");
    

    // Mover o Bispo na diagonal 5 casas para cima e á direita usando "while"
    printf("Movimentação do bispo!\n");
    while (bispo <= 9) {

        if (bispo % 2 == 0)
        {
            printf("Cima, direita\n");
        }
        bispo++;
    }
   printf("\n");

    //Mover a rainha oito casas a esquerda
     printf("Movimentação da rainha!\n");
    do {
       printf("Digite um número par para a rainha andar!\n");
       scanf("%d", &rainha);

       if(rainha % 2 == 0){
        printf("%d é par! A rainha andará 8 casas!\n", rainha);
       } else {
        printf("%d é ímpar!\n", rainha);
       }
    } while (rainha % 2 != 0);
    printf("Esquerda\n");
    printf("Esquerda\n");
    printf("Esquerda\n");
    printf("Esquerda\n");
    printf("Esquerda\n");
    printf("Esquerda\n");
    printf("Esquerda\n");
    printf("Esquerda\n");
printf("\n");

    //Mover cavalo em L, duas casas para baixo e uma casa para a esquerda
printf("Movimentação do cavalo!\n");
    int movimentoCompleto = 1; // Flag para controlar o movimento "L"

    while(movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++){
            printf("Baixo\n"); //Imprime "Cima" duas vezes
        }
        printf("Esquerda\n"); //Imprime "Direita" uma vez
    }
     printf("\n");
   return 0;
}
