/*1. Faça um programa que leia um vetor V contendo 18 elementos.
A seguir, distribua esses elementos em uma matriz 3x6.
Ao final, mostre a matriz gerada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 3
#define C 6
#define MAX 18

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, k = 0;
    float V[MAX];
    int M[L][C];

    for (i = 0; i < MAX; i++) {
        printf("\nDigite um número: ");
        scanf("%f", &V[i]);
        printf("_____________________\n");
    }

    printf("\nAssim ficou o seu vetor: ");

    for (i = 0; i < MAX; i++) {
        printf("| %.2f | ", V[i]);
    }

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            M[i][j] = V[k];
            k++;
        }
    }

    printf("\n\nMatriz gerada:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
