/*6. Faça um algoritmo que calcule o imposto de renda de um grupo de contribuintes considerando os dados de
cada contribuinte: numero do CPF, numero de dependentes e renda mensal são valores fornecidos pelo
usuário. Para cada contribuinte será feito um desconto de 5% de salário mínimo por dependente.
Os valores da alíquota para calculo do imposto são:

- Até 2 sal min (exclusive) isento
- 2 .. 3 (inclusive,inclusive) 5%
- 3 .. 5 (exclusive, inclusive) 10%
- 5 .. 7 (exclusive,inclusive) 15%
- Acima de 7 20%

O último valor (para encerrar o programa), que não será considerado, terá CPF igual a zero. Deve ser lido o
valor atual do salário mínimo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularImposto(float renda, int dependentes, float salarioMinimo) {
    float sal = renda / salarioMinimo;
    float imposto = 0;

    if (sal < 2) {
        imposto = 0;
    } else if (sal >= 2 && sal <= 3) {
        imposto = renda * 0.05;
    } else if (sal > 3 && sal <= 5) {
        imposto = renda * 0.10;
    } else if (sal > 5 && sal <= 7) {
        imposto = renda * 0.15;
    } else if (sal > 7) {
        imposto = renda * 0.20;
    }

    imposto -= dependentes * (0.05 * salarioMinimo);

    return imposto;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char cpf[12];
    int dependentes;
    float rendaMensal, salarioMinimo;
    float impostoTotal = 0;

    printf("\tCALCULE SEU IMPOSTO DE RENDA\n");

    while (1) {
        printf("\nDigite o CPF (ou zero para encerrar): ");
        scanf("%s", cpf);

        if (strcmp(cpf, "0") == 0)
            break;

        printf("Digite o número de dependentes: ");
        scanf("%d", &dependentes);

        printf("Digite sua renda mensal: R$");
        scanf("%f", &rendaMensal);

        printf("Digite o valor atual do salário mínimo: R$");
        scanf("%f", &salarioMinimo);

        float imposto = calcularImposto(rendaMensal, dependentes, salarioMinimo);
        printf("\nImposto a pagar para o CPF %s: R$%.2f\n", cpf, imposto);

        impostoTotal += imposto;
    }

    printf("\nImposto Total a Pagar: R$%.2f\n", impostoTotal);

    return 0;
}
