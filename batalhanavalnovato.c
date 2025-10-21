#include <stdio.h>
int main() {
    //Tabuleiro

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha

    printf("Tabuleiro \n");
    printf("\n");//Pula uma Linha

    char Tabuleiro[11] = {'X', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//Letras para identificar a coluna do tabuleiro.

    for(int contador = 0; contador < 11; contador++)//Condição que executa as letras do tabuleiro.
    {
        printf("%2c ", Tabuleiro[contador]);//Manda a letra para o terminal conforme a condição executa.
        if(contador == 10){ //O contador quando termina, passa para a proxima linha.
            printf("\n");//Pula uma Linha
        };
    };

    int TabuleiroAgua[10][11] = { //Variável que contem a matriz.

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //Valores originais da matriz.
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    };

    int NumeracaoTabuleiro[10][1] = {
        {1},
        {2},
        {3},
        {4},
        {5},
        {6},
        {7},
        {8},
        {9},
        {10}
    };

    for(int contador1 = 0; contador1 < 10; contador1++){//Condição que executa a condicional do tabuleiro e passa para próxima linha.
        printf("%2d ", NumeracaoTabuleiro[contador1][0]);//Númera a linha.
        for(int contador2 = 0; contador2 < 10; contador2++){ //Condicional do tabuleiro, serve para executar o print que manda para o terminal.
            printf("%2d ", TabuleiroAgua[contador1][contador2]);//Print que manda para o terminal.
            //%2d faz com que todos os prints seja em ordem.
        };
        printf("\n");//Pula uma Linha
    };

    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha
    printf("\n");//Pula uma Linha

    //Tabuleiro com jogada
    printf("Tabuleiro com navios!\n");
    printf("\n"); //Pula uma linha

    for(int contador = 0; contador < 11; contador++)// Variável que executa as letras do tabuleiro
    {
        printf("%2c", Tabuleiro[contador]); //Manda para o terminal conforme executa
        if(contador==10){
            printf("\n"); //Quando o contador termina, passa para a outra linha e pule
        }
    }

    int TabuleiroNavio1 [3] = {
        TabuleiroAgua[7][6]= 3,
        TabuleiroAgua[7][7]= 3,
        TabuleiroAgua[7][8]= 3
    }; //Substitui na horizontal por 3

    int TabuleiroNavio2 [3] = {
        TabuleiroAgua[3][5] = 3,
        TabuleiroAgua [4][5] = 3,
        TabuleiroAgua [5][5] = 3
    }; //Substitui na vertical por 3

    for(int contador1 = 0; contador1 < 10; contador1++){ //Condição que executa a condicional do
                                                         //tabuleiro e passa para a próxima linha
        printf("%2d", NumeracaoTabuleiro[contador1][0]); //Numera a coluna Y
        for(int contador2 = 0; contador2 < 10; contador2++){//Condicional do tabuleiro, serve para
                                                            //executar o print que manda para o terminal
        printf("%2d", TabuleiroAgua[contador1][contador2]); 
        };
        printf("\n");
    }
    printf("\n");
    printf("\n");
    
    return 0;
}