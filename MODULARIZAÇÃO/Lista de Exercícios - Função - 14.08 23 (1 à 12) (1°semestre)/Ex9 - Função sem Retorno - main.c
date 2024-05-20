/*9. Faça um programa que lê 2 valores, o primeiro servindo de indicador de operação e o segundo
correspondendo ao raio de uma circunferência. Se o valor for 1, calcular e imprimir a área da
circunferência (função 1 sem retorno). Se o valor lido for 2, calcular e imprimir o perímetro da
circunferência (função 2 sem retorno), e se o valor lido for diferente destes dois valores, imprimir
uma mensagem dizendo que o indicador de operação foi mal fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo(int op, float r);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float raio;

    printf("\n\tBem vindos ao Programa da Circunferência:\n");

    do {
    printf("\n1 - Imprimir a área\n");
    printf("2 - Imprimir o perímetro\n");
    printf("3 - Encerrar\n");

    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);

    if (opcao == 3) {
        printf("\nPROGRAMA ENCERRADO...\n");
        break;
    }

    if (opcao != 1 && opcao != 2) {
        printf("\nOpção inválida, digite 1, 2 ou 3.\n");
        continue;
    }

    printf("\nDigite o raio da circunferência: ");
    scanf("%f", &raio);

    calculo(opcao, raio);

} while (opcao != 3);

return 0;
}

void calculo(int op, float r) {
    float resultado;

    if (op == 1) {
        resultado = 3.14 * r * r;
        printf("\nA área da circunferência é: %.2f\n", resultado);
    } else {
        resultado = 2 * 3.14 * r;
        printf("\nO perímetro da circunferência é: %.2f\n", resultado);
    }
}
