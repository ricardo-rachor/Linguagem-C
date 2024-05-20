/*4 - Dado um vetor A de 8 números reais, encontrar a maior diferença
entre dois elementos consecutivos deste vetor. Ao final, mostrar o valor da diferença.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 8

int encontrarMaiorDiferenca(float vetor[MAX], int *linhaMaiorDiferenca) {
    float maiorDiferenca = 0;
    int linha = 0;

    for (int i = 1; i < MAX; i++) {
        float diferenca = vetor[i] - vetor[i - 1];
        if (diferenca > maiorDiferenca) {
            maiorDiferenca = diferenca;
            linha = i;
        }
    }

    *linhaMaiorDiferenca = linha;
    return maiorDiferenca;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float vetor[MAX];

    for (int i = 0; i < MAX; i++) {
        printf(" Digite um número real para o Vetor: ");
        scanf("%f", &vetor[i]);
    }

    printf("\n Assim ficou o seu vetor:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf(" | %.2f | ", vetor[i]);
    }

    int linhaMaiorDiferenca;
    float maiorDiferenca = encontrarMaiorDiferenca(vetor, &linhaMaiorDiferenca);

    printf("\n\n A maior diferença entre números consecutivos é: %.2f\n", maiorDiferenca);
    printf("\n Essa diferença ocorre entre as linhas %d e %d.\n", linhaMaiorDiferenca, linhaMaiorDiferenca + 1);

    return 0;
}
