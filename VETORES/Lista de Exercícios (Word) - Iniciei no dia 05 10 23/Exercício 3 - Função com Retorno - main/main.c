/* Fa�a um programa que leia dois vetores X[10] e Y[10] de inteiros.
Crie, a seguir, um vetor U que seja a uni�o de X com Y, e um vetor I
que seja a sua intersec��o. Mostre todos os vetores. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

int fazerVetorU(int X[MAX], int Y[MAX], int U[MAX]) {
    int cont = 0, i;

    for (i = 0; i < MAX; i++) {
        U[i] = X[i];
        cont++;
    }

    for (i = 0; i < MAX; i++) {
        int j;
        int pertence = 0;

        for (j = 0; j < MAX; j++) {
            if (Y[i] == X[j]) {
                pertence = 1;
                break;
            }
        }

        if (!pertence) {
            U[cont++] = Y[i];
        }
    }

    return cont;
}

int fazerVetorI(int X[MAX], int Y[MAX], int I[MAX]) {
    int cont = 0, i, j;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (X[i] == Y[j]) {
                I[cont++] = X[i];
                break;
            }
        }
    }

    return cont;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int X[MAX], Y[MAX], U[2 * MAX], I[MAX], i;

    for (i = 0; i < MAX; i++) {
        printf("Digite um n�mero inteiro para o Vetor X: ");
        scanf("%d", &X[i]);
    }

    printf("\nAgora para o vetor Y:\n\n");

    for (i = 0; i < MAX; i++) {
        printf("Digite um n�mero inteiro para o Vetor Y: ");
        scanf("%d", &Y[i]);
    }

    int tamanhoU = fazerVetorU(X, Y, U);
    int tamanhoI = fazerVetorI(X, Y, I);

    printf("\nAssim ficou o seu vetor X:\n\n");
    for (i = 0; i < MAX; i++) {
        printf("| %d | ", X[i]);
    }

    printf("\n\nAssim ficou o seu vetor Y:\n\n");
    for (i = 0; i < MAX; i++) {
        printf("| %d | ", Y[i]);
    }

    printf("\n\nA uni�o dos vetores X e Y �:\n\n");
    for (i = 0; i < tamanhoU; i++) {
        printf("| %d | ", U[i]);
    }

    printf("\n\nA interse��o dos vetores X e Y �:\n\n");
    for (i = 0; i < tamanhoI; i++) {
        printf("| %d | ", I[i]);
    }

    return 0;
}







