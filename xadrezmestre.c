#include <stdio.h>


void Torre(int movimento)//Recursividade.
{
    if(movimento > 0)//Dará a condição do bloco.
    {
        Torre(movimento - 1);//Dará - 1 á váriavel movimento para que ela repita decrementando e torne a condição do bloco negativa.
        int Torre = (movimento + 1) - movimento;//Recebe o valor de movimento a cada loop e fica apenas com o valor 1.
        while(Torre > 0) //Repitira o print "movimento" vezes já que torre vale 1 e vai ganhar 1 a cada repetição.
        {
            printf("Direita \n"); // Imprimirá a jogada conforme o loop
            Torre--; //Dará - 1 á váriavel Torre para que ela pare o loop while.
        }
    }
}


void Bispo(int movimento)//Recursividade.
{
    if(movimento > 0)//Dará a condição do bloco.
    {
        Bispo(movimento - 1); //Dará - 1 á váriavel movimento para que ela repita decrementando e torne a condição do bloco negativa.
        int Bispo = (movimento + 1) - movimento;//Recebe o valor de movimento a cada loop e fica apenas com o valor 1.
        do{ //Imprime uma vez o loop mesmo que a condição não seja atendida.
            printf("Cima, "); // Imprimira a jogada comforme o loop for
            for(Bispo; Bispo > 0; Bispo --)//primeiro ante do ";" é a variável usada na condição, segundo a condição e teceiro decremento para para-lá.
            {
                printf("Direita \n");// Imprimira a jogada comforme o loop do/while
            }
            Bispo --; //Dara - 1 á váriavel Bispo para que ela pare o loop for  e do/while.
        }while(Bispo > 0);//Condição do loop do/while.
    }
}


void Rainha(int movimento)//Recursividade.
{
    if(movimento > 0)//Dará a condição do bloco.
    {
        Rainha(movimento - 1);//Dara - 1 á váriavel movimento para que ela repita decrementando e torne a condição do bloco negativa.
        int Rainha = (movimento + 1) - movimento;//Recebe o valor de movimento a cada loop e fica apenas com o valor 1.
        for(Rainha; Rainha > 0; Rainha--) //primeiro ante do ";" é a variável usada na condição, segundo a condição e teceiro decremento para para-lá.
        {
            printf("Esquerda \n");// Imprimira a jogada comforme o loop
        }
    }
}


void Cavalo(int movimento)//Recursividade.
{
    if(movimento > 0)//Dará a condição do bloco.
    {
        
        Cavalo(movimento - 1);//Dara - 1 á váriavel movimento para que ela repita decrementando e torne a condição do bloco negativa.
        int Cavalo = (movimento + 1) - movimento;//Recebe o valor de movimento a cada loop e fica apenas com o valor 1.
        for(Cavalo; Cavalo > 0; Cavalo--)//primeiro antes do ";" é a variável usada na condição, segundo a condição e terceiro decremento para para-lá.
        {
            printf("Cima\n");// Imprimirá a jogada conforme o loop for 1
            printf("Cima\n");// Imprimirá a jogada conforme o loop for 1
            int Cavalo2 = (movimento + 1) - movimento;//Recebe o valor de movimento a cada loop e fica apenas com o valor 1.
            for(Cavalo && Cavalo2; Cavalo > 0 && Cavalo2 > 0; Cavalo2--)//primeiro ante do ";" é a variável usada na condição, segundo a condição e teceiro decremento para para-lá.
            {
                printf("Direita\n");// Imprimira a jogada comforme o loop for 2.
            }

        }
    }
}



int main() {
    
    int TorreV = 5, BispoV = 5, RainhaV = 8, CavaloV = 3;//Quantidade de casas movimentadas
    int CavaloVparaVoid;//Transforma a variável CavaloV em um número correto para o void que 1 unidade é 3 casas

    printf("Movimento da Torre: \n"); //Imprime o nome da peça que está jogando
    Torre(TorreV);//Nome do void chamado e a variável usada para chamar

    printf("\n");//espaço no terminal de 1 linha


    printf("Movimento do Bispo: \n"); //Imprime o nome da peça que está jogando
    Bispo(BispoV);//Nome do void chamado e a variável usada para chamar

    printf("\n");//espaço no terminal de 1 linha


    printf("Movimento da Rainha: \n"); //Imprime o nome da peça que está jogando
    Rainha(RainhaV);//Nome do void chamado e a variável usada para chamar

    printf("\n");//espaço no terminal de 1 linha

    
    CavaloVparaVoid = CavaloV / 3;//Transforma a variável CavaloV em um número correto para o void que 1 unidade é 3 casas
    printf("Movimento do Cavalo: \n"); //Imprime o nome da peça que está jogando
    Cavalo(CavaloVparaVoid);//Nome do void chamado e a variável usada para chamar

    printf("\n");//espaço no terminal de 1 linha



    return 0;
}