/*4. Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que
não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente, através de uma função sem
retorno. Suponha que o usuário digitará quatro números diferentes.*/

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

    printf("\nOs números em ordem decrescente são: %.2f, %.2f, %.2f, %.2f\n", maior, segundo_maior, terceiro_maior, menor);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, numero4;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &numero1);

    do {
        printf("\nDigite o segundo número (maior que o primeiro): ");
        scanf("%f", &numero2);
        if (numero2 <= numero1)
            printf("\nDigite um número maior que o primeiro, tente novamente!\n");
    } while (numero2 <= numero1);

    do {
        printf("\nDigite o terceiro número (maior que o segundo): ");
        scanf("%f", &numero3);
        if (numero3 <= numero2)
            printf("\nDigite um número maior que o segundo, tente novamente!\n");
    } while (numero3 <= numero2);

    printf("\nDigite o quarto número: ");
    scanf("%f", &numero4);

    ordenacaoDecrescente(numero1, numero2, numero3, numero4);

    return 0;
}
