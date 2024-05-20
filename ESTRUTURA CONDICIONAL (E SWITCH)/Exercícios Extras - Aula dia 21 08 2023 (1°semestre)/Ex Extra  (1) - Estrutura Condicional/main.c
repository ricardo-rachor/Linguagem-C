/*1. Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um programa que leia o sal�rio e o c�digo do cargo de um funcion�rio e calcule,
por meio de uma fun��o com retorno, o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele
dever�, ent�o, receber 40% de aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
C�digo Cargo Percentual
101  Gerente   10%
102 Engenheiro 20%
103  T�cnico   30%
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
    printf(" \n 103. T�cnico ");

    printf(" \n Digite o c�digo referente ao seu cargo: ");
    scanf("%d", &op);

    printf(" \n Digite o seu sal�rio: ");
    scanf("%f", &salario);

switch (op)

    {

    case 101:
    printf(" \n Op��o selecionada: 101. Cargo: Gerente ");
    resultado = ((salario * 0.10) + salario);
    sal_final = resultado - salario;
    printf(" \n Voc� ter� um aumento de 10 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu sal�rio ficar� em: R$ %.2f ", resultado);
    break;

    case 102:
    printf(" \n Op��o selecionada: 102. Cargo: Cargo: Engenheiro ");
    resultado = ((salario * 0.20) + salario);
    sal_final = resultado - salario;
    printf(" \n Voc� ter� um aumento de 20 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu sal�rio ficar� em: R$ %.2f ", resultado);
    break;

    case 103:
    printf(" \n Op��o selecionada: 101. Cargo: Gerente ");
    resultado = ((salario * 0.30) + salario);
    sal_final = resultado - salario;
    printf(" \n Voc� ter� um aumento de 30 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu sal�rio ficar� em: R$ %.2f ", resultado);
    break;

    default:
    printf(" \n Op��o selecionada: Outro cargo ");
    resultado = ((salario * 0.40) + salario);
    sal_final = resultado - salario;
    printf(" \n Voc� ter� um aumento de 40 por cento, o equivalente a: R$ %.2f ", sal_final);
    printf(" \n Sendo assim, seu sal�rio ficar� em: R$ %.2f ", resultado);

    }
}
