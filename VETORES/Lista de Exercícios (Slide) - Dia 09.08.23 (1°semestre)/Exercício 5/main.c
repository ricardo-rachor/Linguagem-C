#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int x, i=0, cont=0, V[MAX], W[MAX];


   for (x=0; x<MAX; x++){
        printf("Digite um número:");
        scanf("%d", &V[x]);

        if ((V[x]>=10)&&(V[x]<=40)){
            W[i] = V[x];
            i++;
        }
    }

    printf("\nEstes são os valores no intervalo [10,40]\n");
    for (x=0; x<i; x++){
        printf("\n%d\n", W[x]);
    }
}
