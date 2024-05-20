/*Elabore um programa que preencha uma matriz 4 x 4 com números inteiros e verifique se essa matriz
forma o chamado quadrado mágico. Um quadrado mágico é formado quando a soma dos elementos de
cada linha é igual à soma dos elementos de cada coluna desta linha, é igual à soma dos elementos da
diagonal principal e, também, é igual à soma dos elementos da diagonal secundária.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 4

int verificaQuadradoMagico(int M[MAX][MAX]) {
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    for (int i = 0; i < MAX; i++) {
        somaDiagonalPrincipal += M[i][i];
        somaDiagonalSecundaria += M[i][MAX - 1 - i];
    }

    if (somaDiagonalPrincipal != somaDiagonalSecundaria) {
        return 0;
    }

    for (int i = 0; i < MAX; i++) {
        int somaLinha = 0;
        int somaColuna = 0;

        for (int j = 0; j < MAX; j++) {
            somaLinha += M[i][j];
            somaColuna += M[j][i];
        }

        if (somaLinha != somaDiagonalPrincipal || somaColuna != somaDiagonalPrincipal) {
            return 0;
        }
    }

    return 1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int M[MAX][MAX];

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz inserida:\n\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("|%*d", 6, M[i][j]);
        }
        printf("|\n");
    }

    if (verificaQuadradoMagico(M)) {
        printf("\nA matriz é um quadrado mágico!\n");
    } else {
        printf("\nA matriz não é um quadrado mágico.\n");
    }

    return 0;
}
