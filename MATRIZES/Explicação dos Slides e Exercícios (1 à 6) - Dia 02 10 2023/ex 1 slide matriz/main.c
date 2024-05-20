/* 1. Faça um programa que carregue uma matriz 5x5 de números
reais na função principal. Através de uma função com retorno
calcule e mostre a soma dos elementos da diagonal secundária. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 3

float Func_soma(float matriz[][MAX]); /* PROTÓTIPO DA FUNÇÃO */

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

    printf("\n\nA soma dos elementos da diagonal secundária é: %.2f", Resultado);
    printf("\nPROGRAMA ENCERRADO");

}

float Func_soma(float matriz[][MAX]){

    float soma = 0;
    int i, j;

    for(i=0; i<MAX; i++) {   /* LINHA */
        for(j=0; j<MAX; j++) {   /* COLUNA */
            if (i + j == MAX - 1) /* É UM ELEMENTO DA DIAGONAL SECUNDÁRIA */
                soma += matriz [i][j];
        }
    }

    return soma;
}
