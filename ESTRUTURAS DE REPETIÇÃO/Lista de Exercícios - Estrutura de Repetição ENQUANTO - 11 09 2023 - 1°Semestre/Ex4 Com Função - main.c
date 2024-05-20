/*4. Fa�a um algoritmo que calcule a m�dia aritm�tica de todos os n�meros pares que forem fornecidos pelo
usu�rio. O valor de finaliza��o deve ser a entrada do n�mero zero. O usu�rio pode entrar com n�meros
�mpares, mas estes n�o ser�o acumulados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void media(int *s, int *c) {
    if (*c > 0) {
        float m = (float)(*s) / (*c);
        printf("\n\nM�dia dos n�meros pares: %.2f\n", m);
    } else {
        printf("N�o foram inseridos n�meros pares.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int soma = 0, cont = 0, numero;

    printf("\tPROGRAMA QUE FAZ A M�DIA DOS N�MEROS PARES\n");

    while (1) {
        printf("\n\nDigite um n�mero inteiro igual ou maior que 1!\n");
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
