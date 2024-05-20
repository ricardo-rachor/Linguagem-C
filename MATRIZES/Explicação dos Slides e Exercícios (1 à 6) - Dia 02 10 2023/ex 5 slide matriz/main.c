/*5. Fa�a um programa que preencha, na fun��o principal, uma
matriz 10 x 3 com as notas de dez alunos em tr�s provas. O
algoritmo dever�, atrav�s de uma fun��o sem retorno, mostrar
um relat�rio com o n�mero do aluno (n�mero da linha) e a m�dia
das provas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 3
#define C 3

void calcularMedias(int matriz[][C]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], i, j;

    printf("\n\t\t\tM�DIA DAS NOTAS\n");

    /* ENTRADA DE DADOS */
    for (i = 0; i < L; i++) {
        printf("\nAluno %2d:\n", i + 1);
        for (j = 0; j < C; j++) {
            do {
                printf("Digite o valor para a prova %d conforme a nota(0 a 10): ", j + 1);
                scanf("%d", &M[i][j]);
                if (M[i][j] < 0 || M[i][j] > 10) {
                    printf("Nota inv�lida, somente notas entre 0 e 10 s�o permitidas.\n");
                }
            } while (M[i][j] < 0 || M[i][j] > 10);
        }
    }

    printf("\n\tTABELA DAS NOTAS\n\n");
    for (i = 0; i < L; i++) {
        printf("Aluno %2d: ", i + 1);
        for (j = 0; j < C; j++) {
            printf("%*d", 3, M[i][j]);
        }
    printf("\n");
    }

    calcularMedias(M);

    return 0;
}

void calcularMedias(int matriz[][C]) {
    int i, j;

    printf("\nM�DIAS DOS ALUNOS:\n");

    for (i = 0; i < L; i++) {
        float soma = 0.0;
        for (j = 0; j < C; j++) {
            soma += matriz[i][j];
        }
        float media = soma / C;
        printf("M�dia do Aluno %2d: %.2f\n", i + 1, media);
    }

    printf("\nPROGRAMA ENCERRADO!\n");
}
