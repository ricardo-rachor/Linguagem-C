#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 3
#define C 3

int main() {
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], i, j;

    /* ENTRADA DE DADOS */
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            printf("-----------------------------------\n");
        }
    }

    printf("\nMatriz inserida:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("|%*d", 6, M[i][j]);
        }
        printf("|\n");
    }

    int menores[5];
    for (i = 0; i < 5; i++) {
        menores[i] = 999999;
    }

    int maiores[4];
    for (i = 0; i < 4; i++) {
        maiores[i] = -999999;
    }

    int k, l;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            int valor = M[i][j];

            for (k = 0; k < 5; k++) {
                if (valor < menores[k]) {
                    for (l = 4; l > k; l--) {
                        menores[l] = menores[l - 1];
                    }
                    menores[k] = valor;
                    break;
                }
            }

            for (k = 0; k < 4; k++) {
                if (valor > maiores[k]) {
                    for (l = 3; l > k; l--) {
                        maiores[l] = maiores[l - 1];
                    }
                    maiores[k] = valor;
                    break;
                }
            }
        }
    }

    printf("\nOs 5 menores valores únicos na matriz são:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", menores[i]);
    }

    printf("\nOs 4 maiores valores únicos na matriz são:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", maiores[i]);
    }

    return 0;
}
