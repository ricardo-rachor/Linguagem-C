/*5 - Escreva um programa que leia um vetor V[20] de inteiros. Compacte, a seguir, este vetor,
retirando dele todos os valores nulos ou negativos e escreva o vetor compactado.
Compacte o vetor ainda mais, retirando agora os elementos em duplicata. Escreva o vetor final.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 20

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[MAX];
    int novoVetor[MAX];
    int novoTamanho = 0;

    for (int i = 0; i < MAX; i++) {
        printf("Digite um número inteiro para o Vetor: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] > 0) {
            int duplicado = 0;
            for (int j = 0; j < novoTamanho; j++) {
                if (vetor[i] == novoVetor[j]) {
                    duplicado = 1;
                    break;
                }
            }
            if (!duplicado) {
                novoVetor[novoTamanho++] = vetor[i];
            }
        }
    }

    printf("\nVetor sem nulos, negativos e sem números repetidos:\n\n");
    for (int i = 0; i < novoTamanho; i++) {
        printf("| %d | ", novoVetor[i]);
    }

    printf("\n\n");

    return 0;
}
