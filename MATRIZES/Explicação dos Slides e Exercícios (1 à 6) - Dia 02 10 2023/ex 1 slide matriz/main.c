/* 1. Fa�a um programa que carregue uma matriz 5x5 de n�meros
reais na fun��o principal. Atrav�s de uma fun��o com retorno
calcule e mostre a soma dos elementos da diagonal secund�ria. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 3

float Func_soma(float matriz[][MAX]); /* PROT�TIPO DA FUN��O */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float M[MAX][MAX], Resultado;  /* NOME DA MATRIZ [LINHA] [COLUNA] */
    int i, j;

    /* ENTRADA DE DADOS */
    for(i=0; i<MAX; i++) {   /* LINHA */
        for(j=0; j<MAX; j++) {   /* coluna */
           printf("Digite o valor para M[%d] [%d]", i+1, j+1) ;
           scanf("%f", &M[i] [j]);
        }
    }

    for(i=0; i<MAX; i++) {   /* LINHA */
        for(j=0; j<MAX; j++) {   /* coluna */
            printf("%.2f\t", M[i][j]);
        }
            printf("\n");
    }


    Resultado = Func_soma(M);  /* RESULTADO RECEBE SOMA */

    printf("\n\nA soma dos elementos da diagonal secund�ria �: %.2f", Resultado);
    printf("\nPROGRAMA ENCERRADO");

}

float Func_soma(float matriz[][MAX]){

    float soma = 0;
    int i, j;

    for(i=0; i<MAX; i++) {   /* LINHA */
        for(j=0; j<MAX; j++) {   /* COLUNA */
            if (i + j == MAX - 1) /* � UM ELEMENTO DA DIAGONAL SECUND�RIA */
                soma += matriz [i][j];
        }
    }

    return soma;
}
