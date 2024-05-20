/* 7. Crie um programa que preencha uma matriz 15 x 5 com n�meros inteiros,
calcule e mostre quais elementos se repetem e quantas vezes cada um se repete.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 15
#define C 5

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], i, j;

    /* ENTRADA DE DADOS */
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            printf("------------------------------------------\n");
        }
    }

    printf("\nMatriz inserida:\n\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("|%*d", 6, M[i][j]);
        }
        printf("|\n");
    }

    /* Arrays para armazenar valores e suas frequ�ncias */

    int valores[L * C];
    int frequencias[L * C];
    int totalValores = 0;

    /* Inicialize os arrays de frequ�ncia com 0 */

    for (i = 0; i < L * C; i++) {
        frequencias[i] = 0;
    }

    /* Percorra a matriz e encontre os valores e frequ�ncias */

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            int valor = M[i][j];
            int encontrado = 0;

            /* Verifique se o valor j� foi encontrado antes */

            int k;

            for (k = 0; k < totalValores; k++) {
                if (valores[k] == valor) {
                    frequencias[k]++;
                    encontrado = 1;
                    break;
                }
            }

            /* Se n�o foi encontrado, adicione-o ao array de valores */

            if (!encontrado) {
                valores[totalValores] = valor;
                frequencias[totalValores] = 1;
                totalValores++;
            }
        }
    }

    /* Imprima os elementos repetidos e suas frequ�ncias */

    printf("\nElementos repetidos e suas frequ�ncias:\n");
    for (i = 0; i < totalValores; i++) {
        if (frequencias[i] > 1) {
            printf("\n%d se repete %d vezes\n", valores[i], frequencias[i]);
        }
    }

    return 0;
}
