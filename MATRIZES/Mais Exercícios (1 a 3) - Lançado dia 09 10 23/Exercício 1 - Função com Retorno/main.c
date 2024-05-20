/* 1. Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da linha
em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz 4 x 7
com números reais, calcule e mostre seu MINMAX e sua posição (linha e coluna).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 4
#define C 7

/* Função para encontrar o elemento MINMAX */

int encontrarMINMAX(int M[L][C], int *linha, int *coluna) {
    int i, j, menor = M[0][0], indiceLinha = 0, indiceColuna = 0;

    /* Encontra o menor elemento e suas coordenadas */

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (M[i][j] < menor) {
                menor = M[i][j];
                indiceLinha = i;
                indiceColuna = j;
            }
        }
    }

    /* Encontra o maior elemento na linha do menor elemento */

    int maior = M[indiceLinha][0];
    for (j = 1; j < C; j++) {
        if (M[indiceLinha][j] > maior) {
            maior = M[indiceLinha][j];
        }
    }

    *linha = indiceLinha;
    *coluna = indiceColuna;
    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], i, j;

    /* ENTRADA DE DADOS */

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            printf("------------------------------------------\n");
        }
    }

    printf("\nMatriz inserida:\n\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("|%*d", 6, M[i][j]);
        }
        printf("|\n");
    }

    int linha, coluna;
    int minmax = encontrarMINMAX(M, &linha, &coluna);

    printf("\nElemento MINMAX: %d\n", minmax);
    printf("Linha: %d, Coluna: %d\n", linha, coluna);

    return 0;
}
