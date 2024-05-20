#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 6

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y=MAX-1;
    float V[MAX], aux;

    /*ESTRUTURA DE REPETIÇÃO*/
    for (x=0; x<MAX; x++){
        printf("Digite um número:");
        scanf("%f", &V[x]);
    }

    for(x=0;x<MAX/2;x++){
        aux = V[x];
        V[x] = V[y];
        V[y] = aux;
        y--;
    }

    printf("\n");
    for(x=0;x<MAX;x++)
        printf("%.2f\t", V[x]);
}
