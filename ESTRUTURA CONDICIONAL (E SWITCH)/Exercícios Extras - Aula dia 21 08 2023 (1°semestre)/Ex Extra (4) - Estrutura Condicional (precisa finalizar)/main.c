/*4. Fa�a um programa que receba tr�s n�meros obrigatoriamente em ordem crescente e um quarto n�mero que
n�o siga essa regra. Mostre, em seguida, os quatro n�meros em ordem decrescente, atrav�s de uma fun��o sem
retorno. Suponha que o usu�rio digitar� quatro n�meros diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float x1, x2, x3, x4;

    printf("\nPROGRAMA DE N�MEROS, DOS 4 N�MEROS, OS 3 PRIMEIROS DEVEM SER EM ORDEM CRESCENTE\n");

    printf("\nDigite um n�mero:\n");
    scanf("%f", &x1);

    printf("\nDigite mais um n�mero:\n");
    scanf("%f", &x2);

    if (x2 <= x1)
        printf("O segundo n�mero deve ser maior que o primeiro, tente novamente");
        else
            printf("\nDigite mais um n�mero:\n");
            scanf("%f", &x3);
            if (x3 <= x2)
                printf("O terceiro n�mero deve ser maior que o segundo, tente novamente");
                else
                    printf("\nDigite mais um n�mero:\n");
                    scanf("%f", &x4);

    if ((x4>x3) && (x4>x2) && (x4>x1))
        printf("%.2f, %.2f, %.2f, %.2f", x4,x3,x2,x1);
        else if ((x4>x2) && (x4>x3) && (x4<x1))
            printf("%.2f, %.2f, %.2f, %.2f", x3,x2,x1,x4);
            else if ((x4 > x1) && (x4 > x2) (&& x4 < x3))
               printf("%.2f, %.2f, %.2f, %.2f", x3,x4,x2,x1);


}
