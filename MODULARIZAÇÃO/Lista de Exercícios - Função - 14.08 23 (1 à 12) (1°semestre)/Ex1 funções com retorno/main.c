/*1. Faça um programa que receba quatro notas, calcule e mostre, em uma ///função
com retorno/// a média aritmética das notas e amensagem de aprovado ou reprovado,
considerando para aprovação média 7.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo(float nota1, float nota2, float nota3, float nota4);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, RESULT;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a primeira nota:");
    scanf("%f", &n2);
    printf("Digite a primeira nota:");
    scanf("%f", &n3);
    printf("Digite a primeira nota:");
    scanf("%f", &n4);

    RESULT = calculo (n1,n2,n3,n4);
    /*RESULT recebe o retorno da função*/
    printf("A média foi de %.1f pontos", RESULT);

    if (RESULT < 7)
        printf("\nEstá reprovado!\n");
        else if (RESULT >= 7)
            printf("\nEstá aprovado!\n");
}

float calculo(float nota1, float nota2, float nota3, float nota4){

    float media;

    media = ((nota1+nota2+nota3+nota4) / 4);
    return media;

}


