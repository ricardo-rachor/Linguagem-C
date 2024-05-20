/*4. Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que
não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente, através de uma função sem
retorno. Suponha que o usuário digitará quatro números diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float x1, x2, x3, x4;

    printf("\nPROGRAMA DE NÚMEROS, DOS 4 NÚMEROS, OS 3 PRIMEIROS DEVEM SER EM ORDEM CRESCENTE\n");

    printf("\nDigite um número:\n");
    scanf("%f", &x1);

    printf("\nDigite mais um número:\n");
    scanf("%f", &x2);

    if (x2 <= x1)
        printf("O segundo número deve ser maior que o primeiro, tente novamente");
        else
            printf("\nDigite mais um número:\n");
            scanf("%f", &x3);
            if (x3 <= x2)
                printf("O terceiro número deve ser maior que o segundo, tente novamente");
                else
                    printf("\nDigite mais um número:\n");
                    scanf("%f", &x4);

    if ((x4>x3) && (x4>x2) && (x4>x1))
        printf("%.2f, %.2f, %.2f, %.2f", x4,x3,x2,x1);
        else if ((x4>x2) && (x4>x3) && (x4<x1))
            printf("%.2f, %.2f, %.2f, %.2f", x3,x2,x1,x4);
            else if ((x4 > x1) && (x4 > x2) (&& x4 < x3))
               printf("%.2f, %.2f, %.2f, %.2f", x3,x4,x2,x1);


}
