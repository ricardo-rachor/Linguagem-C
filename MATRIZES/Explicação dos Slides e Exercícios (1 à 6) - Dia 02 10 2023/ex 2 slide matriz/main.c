/*2. Faça um programa que preencha uma matriz M 2 x 2 na
função principal. Através de uma função sem retorno calcule e
mostre a matriz resultante da multiplicação dos elementos de M
pelo seu maior elemento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 2

void Func_Prod(int matriz[][MAX], int m);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[MAX][MAX], i, j, maior = 0;

    /* ENTRADA DE DADOS */
    for(i=0; i<MAX; i++) {   /* LINHA */
        for(j=0; j<MAX; j++) {   /* coluna */
           printf("\nDigite o valor para M[%d] [%d]", i, j) ;
           scanf("%d", &M[i] [j]);

           if (M[i][j] > maior)
                maior = M[i][j];
        }
    }

    Func_Prod(M, maior);  /* FUNÇÃO SEM RETORNO */
    return 0;
}

void Func_Prod(int matriz[][MAX], int m){

  int i, j;

    for(i=0; i<MAX; i++) {
        for(j=0; j<MAX; j++) {
        matriz[i][j] = matriz[i][j] * m;
        printf("%d\t", matriz[i][j]);
        }
        printf("\n");
        }

}

