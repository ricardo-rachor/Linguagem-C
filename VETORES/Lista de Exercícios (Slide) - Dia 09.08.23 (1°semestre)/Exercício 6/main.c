/*6 – Faça um programa que leia um vetor de 15 posições de
números reais e divida os seus elementos pela média dos
elementos do vetor. Altere o próprio vetor e mostre-os após os
cálculos.*/

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
        printf("Digite um número:");
        scanf("%f", &V[x]);
        soma = soma + V[x];
    }
    media = soma/MAX;
    printf("\nMédia: %.2f\n", media);

    for (x=0;x<MAX;x++){
        V[x]=V[x]/media;
        printf("\n%.2f", V[x]);
    }
}
