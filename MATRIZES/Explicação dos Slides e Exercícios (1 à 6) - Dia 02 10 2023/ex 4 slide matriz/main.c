/*4. Fa�a um programa que preencha e mostre a m�dia dos
elementos da diagonal principal de uma matriz 10 x 10. Utilize
uma fun��o sem retorno.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 2

void Func_media(int matriz[][MAX]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[MAX][MAX], i, j;

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
            int num = M[i][j];
            int width = 6;
            int padding = (width - printf("%d", num)) / 2;
            printf("|%*s%*s", padding, "", width - padding, "");
        }
    printf("|\n");
    }

    Func_media(M);

    return 0;
}

void Func_media(int matriz[][MAX]) {
    int cont = 0, i, j;
    float soma = 0.0;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (i == j) {
                cont++;
                soma += matriz[i][j];
            }
        }
    }

    if (cont > 0) {
        float media = soma / cont;
        printf("A m�dia dos elementos da diagonal principal �: %.2f\n", media);
    } else {
        printf("N�o foi poss�vel calcular a m�dia, pois a diagonal principal n�o possui elementos.\n");
    }
}
