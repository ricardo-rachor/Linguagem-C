/*4. Fa�a um programa que receba tr�s n�meros obrigatoriamente em ordem crescente e um quarto n�mero que
n�o siga essa regra. Mostre, em seguida, os quatro n�meros em ordem decrescente, atrav�s de uma fun��o sem
retorno. Suponha que o usu�rio digitar� quatro n�meros diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenacaoDecrescente(float num1, float num2, float num3, float num4) {

    float maior, segundo_maior, terceiro_maior, menor;

    if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
        maior = num1;
        if (num2 >= num3 && num2 >= num4) {
            segundo_maior = num2;
            if (num3 >= num4) {
                terceiro_maior = num3;
                menor = num4;
            } else {
                terceiro_maior = num4;
                menor = num3;
            }
        } else if (num3 >= num4) {
            segundo_maior = num3;
            terceiro_maior = num2;
            menor = num4;
        } else {
            segundo_maior = num4;
            terceiro_maior = num2;
            menor = num3;
        }
    } else if (num2 >= num3 && num2 >= num4) {
        maior = num2;
        if (num1 >= num3 && num1 >= num4) {
            segundo_maior = num1;
            if (num3 >= num4) {
                terceiro_maior = num3;
                menor = num4;
            } else {
                terceiro_maior = num4;
                menor = num3;
            }
        } else if (num3 >= num4) {
            segundo_maior = num3;
            terceiro_maior = num1;
            menor = num4;
        } else {
            segundo_maior = num4;
            terceiro_maior = num1;
            menor = num3;
        }
    } else if (num3 >= num4) {
        maior = num3;
        segundo_maior = num1 >= num2 ? num1 : num2;
        terceiro_maior = num1 >= num2 ? num2 : num1;
        menor = num4;
    } else {
        maior = num4;
        segundo_maior = num1 >= num2 ? num1 : num2;
        terceiro_maior = num1 >= num2 ? num2 : num1;
        menor = num3;
    }

    printf("\nOs n�meros em ordem decrescente s�o: %.2f, %.2f, %.2f, %.2f\n", maior, segundo_maior, terceiro_maior, menor);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, numero4;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%f", &numero1);

    do {
        printf("\nDigite o segundo n�mero (maior que o primeiro): ");
        scanf("%f", &numero2);
        if (numero2 <= numero1)
            printf("\nDigite um n�mero maior que o primeiro, tente novamente!\n");
    } while (numero2 <= numero1);

    do {
        printf("\nDigite o terceiro n�mero (maior que o segundo): ");
        scanf("%f", &numero3);
        if (numero3 <= numero2)
            printf("\nDigite um n�mero maior que o segundo, tente novamente!\n");
    } while (numero3 <= numero2);

    printf("\nDigite o quarto n�mero: ");
    scanf("%f", &numero4);

    ordenacaoDecrescente(numero1, numero2, numero3, numero4);

    return 0;
}
