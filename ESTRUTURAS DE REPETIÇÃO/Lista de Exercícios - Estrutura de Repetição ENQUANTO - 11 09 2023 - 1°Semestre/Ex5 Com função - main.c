#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada(int numero) {
    printf("\nTabuada de multiplicação para %d:\n", numero);
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char resposta;
    int numero;

    printf("\tPROGRAMA DA TABUADA\n");

    do {
        printf("\nDigite um número inteiro: ");
        scanf("%d", &numero);

        tabuada(numero);

        printf("\nEscrever nova tabuada (S/N)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    printf("\n\nPrograma encerrado!");

    return 0;
}

