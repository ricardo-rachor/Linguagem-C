/*1. Ler um valor e escrever se é positivo, negativo ou zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float num;

    printf("\n\nDigite um número:\n");
    scanf("%f", &num);

    if (num>0.0)
        printf("O número é positivo!");
        else if (num==0)
            printf("O número é zero!");
            else
                printf("O número é negativo!");

}
