/*1. Ler um valor e escrever se � positivo, negativo ou zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float num;

    printf("\n\nDigite um n�mero:\n");
    scanf("%f", &num);

    if (num>0.0)
        printf("O n�mero � positivo!");
        else if (num==0)
            printf("O n�mero � zero!");
            else
                printf("O n�mero � negativo!");

}
