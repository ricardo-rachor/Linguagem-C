/*4. Faça um algoritmo que calcule a média aritmética de todos os números pares que forem fornecidos pelo
usuário. O valor de finalização deve ser a entrada do número zero. O usuário pode entrar com números
ímpares, mas estes não serão acumulados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void media(int *s, int *c) {
    if (*c > 0) {
        float m = (float)(*s) / (*c);
        printf("\n\nMédia dos números pares: %.2f\n", m);
    } else {
        printf("Não foram inseridos números pares.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int soma = 0, cont = 0, numero;

    printf("\tPROGRAMA QUE FAZ A MÉDIA DOS NÚMEROS PARES\n");

    while (1) {
        printf("\n\nDigite um número inteiro igual ou maior que 1!\n");
        printf("Digite 0 para encerrar: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero % 2 == 0) {
            soma += numero;
            cont++;
        }
    }


    media(&soma, &cont);

    return 0;
}
