/*3 � Crie um programa para ler 30 n�meros reais e armazene-os
em um vetor. Em seguida mostre apenas os valores das posi��es
pares do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float V[MAX];
    int x;

    /*ESTRUTURA DE REPETI��O*/
    for (x=0; x<MAX; x++){
        printf("Digite um n�mero:");
        scanf("%f", &V[x]);
    }

    for (x=0; x<MAX; x++){
        if ((x%2)==0)
            printf("\nPosi��o = %d: Valor %.2f",x, V[x]);
    }
}

