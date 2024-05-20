#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 9

void gerar_matriz(int M[MAX][MAX]) {

    int numeros[MAX][MAX] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            M[i][j] = numeros[i][j];
        }
    }
}

void imprimir_matriz(int M[MAX][MAX]) {
    printf("-------------------------------\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (j % 3 == 0)
                printf("|");
            printf(" %d ", M[i][j]);
        }
        printf("|\n");
        if ((i + 1) % 3 == 0)
            printf("-------------------------------\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    int M[MAX][MAX];

    printf("\tBem-vindo ao Sudoku da Unisc!\n");

    printf("\nPara começarmos, digite seu nome: ");
    scanf("%s", nome);

    printf("\nTudo pronto, %s, vamos começar!\n", nome);

    gerar_matriz(M);

    printf("\nEste é o primeiro nível do sudoku\n");

    imprimir_matriz(M);

    printf("\nNumero de jogadas:");  //Implementar
    printf("\nNumero de erros:");  // Implementar
    printf("\nTempo decorrido:\n");  //Implementar

    int linha, coluna, numero;

    for (linha = 0; linha < MAX; linha++) {
        for (coluna = 0; coluna < MAX; coluna++) {
            if (M[linha][coluna] == 0) {
                printf("\nDigite o número para a linha %d, coluna %d: ", linha + 1, coluna + 1);
                scanf("%d", &numero);
                M[linha][coluna] = numero;
                imprimir_matriz(M); // Implementar a verificacao
            }
        }
    }

    printf("\nJogo concluído! Obrigado por jogar, %s!\n", nome);

    return 0;
}
