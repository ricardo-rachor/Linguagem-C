/*2 � Fa�a um programa que leia 10 valores do tipo inteiro e
armazene-os em um vetor. A seguir o algoritmo dever� informar:
- o menor e o maior valor existente no vetor;
- quantos dos valores do vetor s�o maiores que a m�dia desses
valores. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

int main()
{
     setlocale(LC_ALL, "Portuguese");

     /*ENTRADA DE DADOS*/
    int V[MAX], x, menor=999, maior=0, soma=0, cont=0;
    float media;

    /*ESTRUTURA DE REPETI��O*/
    for (x=0; x<MAX; x++){
        printf("Digite o valor:");
        scanf("%d", &V[x]);

        soma=soma+V[x];

        if (V[x]>maior)
            maior=V[x];
        if (V[x]<menor)
            menor=V[x];

    }
    media = soma/MAX;
    for (x=0; x<MAX; x++){
        if (V[x]>media)
            cont++;
    }

    printf("\nO menor valor �: %d. O maior valor � %d.\n", menor, maior);
    printf("\nH� %d n�meros que possuem um valor maior que a m�dia de todos os valores, j� que �: %.2f\n", cont, media);
}
