/*9. Fa�a um programa que l� 2 valores, o primeiro servindo de indicador de opera��o e o segundo
correspondendo ao raio de uma circunfer�ncia. Se o valor for 1, calcular e imprimir a �rea da
circunfer�ncia (fun��o 1 sem retorno). Se o valor lido for 2, calcular e imprimir o per�metro da
circunfer�ncia (fun��o 2 sem retorno), e se o valor lido for diferente destes dois valores, imprimir
uma mensagem dizendo que o indicador de opera��o foi mal fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo(int op, float r);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float raio;

    printf("\n\tBem vindos ao Programa da Circunfer�ncia:\n");

    do {
    printf("\n1 - Imprimir a �rea\n");
    printf("2 - Imprimir o per�metro\n");
    printf("3 - Encerrar\n");

    printf("\nDigite a op��o desejada: ");
    scanf("%d", &opcao);

    if (opcao == 3) {
        printf("\nPROGRAMA ENCERRADO...\n");
        break;
    }

    if (opcao != 1 && opcao != 2) {
        printf("\nOp��o inv�lida, digite 1, 2 ou 3.\n");
        continue;
    }

    printf("\nDigite o raio da circunfer�ncia: ");
    scanf("%f", &raio);

    calculo(opcao, raio);

} while (opcao != 3);

return 0;
}

void calculo(int op, float r) {
    float resultado;

    if (op == 1) {
        resultado = 3.14 * r * r;
        printf("\nA �rea da circunfer�ncia �: %.2f\n", resultado);
    } else {
        resultado = 2 * 3.14 * r;
        printf("\nO per�metro da circunfer�ncia �: %.2f\n", resultado);
    }
}
