/*6. Elabore um programa que preencha uma matriz 5 x 5 na
função principal. Através de uma função sem retorno crie dois
vetores de cinco posições cada um, que contenham,
respectivamente, as somas das linhas e a soma das colunas da
matriz. Ao final, mostre a matriz e os vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 5

void calcularSomas(int matriz[][MAX], int vetorLinhas[], int vetorColunas[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[MAX][MAX], i, j, vetorLinhas[MAX] = {0}, vetorColunas[MAX] = {0};

    /* ENTRADA DE DADOS */
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("|%*d", 6, M[i][j]); /* Largura mínima de campo = 4 */
    }
    printf("|\n");
    }

    calcularSomas(M, vetorLinhas, vetorColunas);

    return 0;

}

void calcularSomas(int matriz[][MAX], int vetorLinhas[], int vetorColunas[]){

    float soma = 0.0;
    int i, j;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            vetorLinhas[i] += matriz[i][j];
            vetorColunas[j] += matriz[i][j];
        }
    }

    printf("\nVetor das Somas das Linhas:\n");
    for (i = 0; i < MAX; i++) {
        printf("Linha %d: %d\n", i + 1, vetorLinhas[i]);
    }

    printf("\nVetor das Somas das Colunas:\n");
    for (i = 0; i < MAX; i++) {
        printf("Coluna %d: %d\n", i + 1, vetorColunas[i]);
    }
}



