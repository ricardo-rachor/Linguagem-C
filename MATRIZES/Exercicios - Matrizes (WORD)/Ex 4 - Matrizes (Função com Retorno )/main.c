/* 4. Crie um programa para calcular a matriz transposta de uma matriz, fornecida pelo utilizador.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 3
#define C 2

void transposta(int M[L][C], int at[C][L], int numLinhas, int numColunas)
{
    int i, j;

    for (i = 0; i < numLinhas; i++) {
        for (j = 0; j < numColunas; j++) {
            at[j][i] = M[i][j];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], Transposta[C][L], i, j;

    /* ENTRADA DE DADOS */
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("|%*d", 6, M[i][j]);
        }
        printf("|\n");
    }

    transposta(M, Transposta, L, C);

    printf("\nMatriz Transposta:\n");
    for (i = 0; i < C; i++) {
        for (j = 0; j < L; j++) {
            printf("|%*d", 6, Transposta[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
