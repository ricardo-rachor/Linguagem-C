/* Faça um programa que leia um conjunto de 10 valores e distribua os valores em 2 vetores.
 Um vetor armazenará os valores pares e o outro, os valores ímpares. Ao final, mostre os vetores. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

void separar_vetor(int V[MAX], int P[MAX], int I[MAX], int *pCount, int *iCount) {
    int i;
    *pCount = 0;
    *iCount = 0;

    for (i = 0; i < MAX; i++) {
        if (V[i] % 2 == 0) {
            P[*pCount] = V[i];
            (*pCount)++;
        } else {
            I[*iCount] = V[i];
            (*iCount)++;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int V[MAX], P[MAX], I[MAX];
    int pCount, iCount;

    for (int i = 0; i < MAX; i++) {
        printf(" Digite um número inteiro para o Vetor: ");
        scanf("  %d", &V[i]);
        printf(" -------------------------------------------------------\n");
    }

    printf("\n\tAssim ficou o seu vetor:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf(" | %d | ", V[i]);
    }

    separar_vetor(V, P, I, &pCount, &iCount);

    printf("\n\n\tValores pares:\n\n");
    for (int i = 0; i < pCount; i++) {
        printf(" | %d | ", P[i]);
    }

    printf("\n\n\tValores ímpares:\n\n");
    for (int i = 0; i < iCount; i++) {
        printf(" | %d | ", I[i]);
    }

    printf("\n\n");

    return 0;
}
