//Guilherme Dalmolin Konrad(101599), Murilo Antonio Wollmann(143903) e Pedro Augusto Fardin Sehnem(112511)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define L 3
#define C 3

char board[L][C];

void inicializarTabuleiro(){
    int i, j;

    for(i = 0; i<L; i++){
        for(j = 0; j<C; j++){
            board[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro(){
    int i, j;

    printf("\n");
    for(i = 0; i<L; i++){
        for(j = 0; j<C; j++){
            printf("%c", board[i][j]);
            if(j < C - 1){
                printf(" | ");
            }
        }
        printf("\n");
        if(i < L - 1){
            printf("----------\n");
        }
    }
    printf("\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    inicializarTabuleiro();

    char jogador = 'X';
    char computador = 'O';

    int vezDoJogador = 1;
    int vezDoComputador = 0;

    printf("*Jogo da Velha*\n");
    printf("\nVocê é 'X' e a máquina é 'O'\n");
    printf("\n");

    while(1){
        if(vezDoJogador){
            int linha, coluna;
            printf("Sua vez. Informe a linha e coluna (exemplo: 1 2): ");
            scanf("%d %d", &linha, &coluna);

            if(jogadaValida(linha-1, coluna-1)){    //Fazer a função para verificar se a jogada é válida
                board[linha-1][coluna-1] = jogador;
                vezDoJogador = 0;
                vezDoComputador = 1;
            }   else{
                    printf("Jogada inválida. Tente novamente.\n");
                }
        }

        if(jogadorGanhou(jogador)){                 //Fazer a função para verificar se o jogador(você) ganhou
            imprimirTabuleiro();
            printf("Você ganhou!\n");
            break;
        }

        if(tabuleiroCheio()){                       //Fazer a função para verificar se o tabuleiro está cheio, ou seja, a partida resultou em um empate
            imprimirTabuleiro();
            printf("Empate!\n");
            break;
        }

        if(vezDoComputador){
            jogadaComputador(computador);           //Fazer a função para que o computador faça sua jogada
            vezDoComputador = 0;
            vezDoJogador = 1;
        }

        if(jogadorGanhou(computador)){
            imprimirTabuleiro();
            printf("A máquina ganhou!\n");
            break;
        }

        if(tabuleiroCheio()){
            imprimirTabuleiro();
            printf("Empate!\n");
            break;
        }

        imprimirTabuleiro();
    }

    return 0;
}
