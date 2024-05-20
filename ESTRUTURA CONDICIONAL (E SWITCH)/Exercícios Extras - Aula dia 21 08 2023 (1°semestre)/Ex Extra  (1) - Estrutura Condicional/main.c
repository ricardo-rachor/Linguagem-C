/*1. Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um programa que leia o salário e o código do cargo de um funcionário e calcule,
por meio de uma função com retorno, o novo salário. Se o cargo do funcionário não estiver na tabela, ele
deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
Código Cargo Percentual
101  Gerente   10%
102 Engenheiro 20%
103  Técnico   30%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;
    float salario, resultado, sal_final;

    printf(" \n 101. Gerente ");
    printf(" \n 102. Engenheiro ");
    printf(" \n 103. Técnico ");

    printf(" \n Digite o código referente ao seu cargo: ");
    scanf("%d", &op);

    printf(" \n Digite o seu salário: ");
    scanf("%f", &salario);

switch (op)

    {

    case 101:
    printf(" \n Opção selecionada: 101. Cargo: Gerente ");
    resultado = ((salario * 0.10) + salario);
    sal_final = resultado - salario;
    printf(" \n Você terá um aumento de 10 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu salário ficará em: R$ %.2f ", resultado);
    break;

    case 102:
    printf(" \n Opção selecionada: 102. Cargo: Cargo: Engenheiro ");
    resultado = ((salario * 0.20) + salario);
    sal_final = resultado - salario;
    printf(" \n Você terá um aumento de 20 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu salário ficará em: R$ %.2f ", resultado);
    break;

    case 103:
    printf(" \n Opção selecionada: 101. Cargo: Gerente ");
    resultado = ((salario * 0.30) + salario);
    sal_final = resultado - salario;
    printf(" \n Você terá um aumento de 30 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu salário ficará em: R$ %.2f ", resultado);
    break;

    default:
    printf(" \n Opção selecionada: Outro cargo ");
    resultado = ((salario * 0.40) + salario);
    sal_final = resultado - salario;
    printf(" \n Você terá um aumento de 40 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu salário ficará em: R$ %.2f ", resultado);

    }
}
