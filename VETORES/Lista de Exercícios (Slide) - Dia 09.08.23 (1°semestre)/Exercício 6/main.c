/*6 � Fa�a um programa que leia um vetor de 15 posi��es de
n�meros reais e divida os seus elementos pela m�dia dos
elementos do vetor. Altere o pr�prio vetor e mostre-os ap�s os
c�lculos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 15

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;
    float media, V[MAX], soma=0;

    for (x=0; x<MAX; x++){
        printf("Digite um n�mero:");
        scanf("%f", &V[x]);
        soma = soma + V[x];
    }
    media = soma/MAX;
    printf("\nM�dia: %.2f\n", media);

    for (x=0;x<MAX;x++){
        V[x]=V[x]/media;
        printf("\n%.2f", V[x]);
    }
}
