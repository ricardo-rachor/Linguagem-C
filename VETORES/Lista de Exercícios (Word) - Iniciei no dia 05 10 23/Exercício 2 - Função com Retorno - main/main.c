/* Faça um programa que leia um vetor de 20 elementos
e determine quantos elementos do vetor são iguais.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 20

int contarIguais(int V[MAX]) {
    int cont = 0, i, j;

    for (i = 0; i < MAX; i++) {
        for (j = i + 1; j < MAX; j++) {
            if (V[i] == V[j]) {
                cont++;
                break;
            }
        }
    }

    return cont;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int V[MAX], x, i, cont;

    /* ENTRADA DE DADOS */

    for (x = 0; x < MAX; x++) {
        printf("Digite um número inteiro para o Vetor: ");
        scanf("%d", &V[x]);
        printf("-------------------------------------------------------\n");
    }

    printf("\n\tAssim ficou o seu vetor:\n\n");
    for (i = 0; i < MAX; i++) {
        printf("| %d | ", V[i]);
    }

    printf("\n-----------------------------------------------------\n");

    cont = contarIguais(V); /* Chamando a função para contar os números iguais */

    printf("\n\n\t%d numeros no seu vetor sao iguais\n\n", cont);

    return 0;
}
