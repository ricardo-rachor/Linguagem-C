/*8. Escreva um programa que leia um valor monetário (por exemplo, R$ 540,00) e calcula, através de
uma função sem retorno, qual o menor número possível de notas de 50.00, 10.00, 5.00 e 1.00 reais
em que o valor lido pode ser decomposto. O programa deverá fornecer o valor lido e a relação de
notas necessárias*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo (float v);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("\n\tPROGRAMA DAS NOTAS\n");

    printf("\n\nDigite 1 valor em dinheiro: ");
    scanf("\n%f", &valor);

    printf("\nValor: R$ %.2f\n", valor);

    calculo(valor);

    return 0;
}

void calculo (float v) {

    int centavos = (int)(v * 100);

    int notas_50 = centavos / 5000;
    centavos %= 5000;

    int notas_10 = centavos / 1000;
    centavos %= 1000;

    int notas_5 = centavos / 500;
    centavos %= 500;

    int notas_1 = centavos / 100;
    centavos %= 100;

    int moedas_50 = centavos / 50;
    centavos %= 50;

    int moedas_25 = centavos / 25;
    centavos %= 25;

    int moedas_10 = centavos / 10;
    centavos %= 10;

    int moedas_5 = centavos / 5;
    centavos %= 5;

    int moedas_1 = centavos;

    printf("Notas de R$ 50: %d\n", notas_50);
    printf("Notas de R$ 10: %d\n", notas_10);
    printf("Notas de R$ 5: %d\n", notas_5);
    printf("Notas de R$ 1: %d\n", notas_1);
    printf("Moedas de R$ 0.50: %d\n", moedas_50);
    printf("Moedas de R$ 0.25: %d\n", moedas_25);
    printf("Moedas de R$ 0.10: %d\n", moedas_10);
    printf("Moedas de R$ 0.05: %d\n", moedas_5);
    printf("Moedas de R$ 0.01: %d\n", moedas_1);

}
