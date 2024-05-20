/* 5. Elabore um programa que preencha uma matriz 6 x 4 com números inteiros, calcule e mostre quantos
elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz com os
elementos diferentes de 30. No lugar do número 30 da segunda matriz, coloque o número zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 6
#define C 4

void sem30(int M[L][C], int M2[L][C])
{
    int i, j;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (M[i][j] != 30) {
                M2[i][j] = M[i][j];
            } else {
                M2[i][j] = 0;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], M2[L][C], i, j, contMaiorque30 = 0;

    /* ENTRADA DE DADOS */
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++){
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            printf("----------------------------------------\n");
            if (M[i][j] > 30)
                contMaiorque30++;
        }
    }

    printf("\nMatriz inserida:\n\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("|%*d", 6, M[i][j]);
        }
        printf("|\n");
    }

    printf("\nExistem %d números maiores que 30 em sua Matriz.\n", contMaiorque30);

    sem30(M, M2);

    printf("\nSegunda Matriz (elementos diferentes de 30):\n\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("|%*d", 6, M2[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
