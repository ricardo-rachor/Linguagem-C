/*1. Fa�a um algoritmo que l� um n�mero indeterminado de valores, todos inteiros, um de cada vez,
finalizando a leitura com o n�mero zero e forne�a como sa�da:

a) a soma dos n�meros que est�o no intervalo 10(inc) a 20(inc).
b) a m�dia dos n�meros que est�o no intervalo de 1(inc) a 10 (exc).
c) o menor entre os valores lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero, cont = 0, soma = 0, menor = INT_MAX;
    float media;

    printf("\tPROGRAMA QUE L� N�MEROS!\n");

    while (1) {
        printf("\n\nDigite um n�mero inteiro igual ou maior que 1!\n");
        printf("Digite 0 para encerrar: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero < menor) {
            menor = numero;
        }

        if ((numero >= 10) && (numero <= 20)) {
            cont++;
            soma = soma + numero;
        }
    }

    if (cont > 0) {
        media = (float)soma / cont;
        printf("\n\nA soma dos n�meros entre 10 e 20 �: %d\n", soma);
        printf("A m�dia dos n�meros entre 10 e 20 �: %.2f\n", media);
    } else {
        printf("\n\nN�o h� n�meros entre 10 e 20, por isso, n�o foi feita a soma e m�dia.\n");
    }

    if (menor != INT_MAX) {
        printf("O menor entre os n�meros inseridos �: %d\n", menor);
    } else {
        printf("N�o foi inserido nenhum n�mero v�lido.\n");
    }

    return 0;
}






