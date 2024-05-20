/*4. Faça um algoritmo que calcule a média aritmética de todos os números pares que forem fornecidos pelo
usuário. O valor de finalização deve ser a entrada do número zero. O usuário pode entrar com números
ímpares, mas estes não serão acumulados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero, soma = 0, cont = 0, media;

    printf("\tPROGRAMA QUE FAZ A MÉDIA DOS NÚMEROS PARES\n");

    while (1) {

        printf("\n\nDigite um número inteiro igual ou maior que 1!\n");
        printf("Digite 0 para encerrar: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero % 2 == 0) {
            soma = numero + soma;
            cont++;
        }
    }

    if (cont > 0) {
        media = soma / cont;
        printf("Média dos números pares: %d\n", media);
    } else {
        printf("Não foram inseridos números pares.\n");
    }

    return 0;
}
