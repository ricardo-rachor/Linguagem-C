/*1. Fa�a um programa que receba quatro notas, calcule e mostre, em uma ///fun��o
sem retorno/// a m�dia aritm�tica das notas e amensagem de aprovado ou reprovado,
considerando para aprova��o m�dia 7.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo(float nota1, float nota2, float nota3, float nota4);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a primeira nota:");
    scanf("%f", &n2);
    printf("Digite a primeira nota:");
    scanf("%f", &n3);
    printf("Digite a primeira nota:");
    scanf("%f", &n4);

    calculo (n1,n2,n3,n4);
}

void calculo(float nota1, float nota2, float nota3, float nota4){

float media;

media = ((nota1+nota2+nota3+nota4) / 4);
printf("A m�dia foi de %.1f pontos", media);

if (media < 7)
    printf("\nEst� reprovado!\n");
    else
        printf("\nEst� aprovado!\n");
}


