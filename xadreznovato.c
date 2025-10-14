#include <stdio.h>
int main () {

    int bispo = 0 ;
    int rainha;


    // Mover a Torre 5 casas para a direita usando o "for"
    for (int i = 0; i < 5; i++){
        printf("Direita\n"); //Imprime a direção do movimento
    }
   
    // Mover o Bispo na diagonal 5 casas para cima e á direita usando "while"
    while (bispo <= 9) {

        if (bispo % 2 == 0)
        {
            printf("Cima, direita\n");
        }
        bispo++;
    }
   

    //Mover a rainha oito casas a esquerda
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

   return 0;
}
