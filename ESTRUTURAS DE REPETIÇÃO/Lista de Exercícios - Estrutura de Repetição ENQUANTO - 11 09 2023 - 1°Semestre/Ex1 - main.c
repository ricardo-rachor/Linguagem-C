/*1. Faça um algoritmo que lê um número indeterminado de valores, todos inteiros, um de cada vez,
finalizando a leitura com o número zero e forneça como saída:

a) a soma dos números que estão no intervalo 10(inc) a 20(inc).
b) a média dos números que estão no intervalo de 1(inc) a 10 (exc).
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

    printf("\tPROGRAMA QUE LÊ NÚMEROS!\n");

    while (1) {
        printf("\n\nDigite um número inteiro igual ou maior que 1!\n");
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
        printf("\n\nA soma dos números entre 10 e 20 é: %d\n", soma);
        printf("A média dos números entre 10 e 20 é: %.2f\n", media);
    } else {
        printf("\n\nNão há números entre 10 e 20, por isso, não foi feita a soma e média.\n");
    }

    if (menor != INT_MAX) {
        printf("O menor entre os números inseridos é: %d\n", menor);
    } else {
        printf("Não foi inserido nenhum número válido.\n");
    }

    return 0;
}






