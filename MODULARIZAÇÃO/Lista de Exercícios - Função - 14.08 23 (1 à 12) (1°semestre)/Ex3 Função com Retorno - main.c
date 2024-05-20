/*3. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de
aumento encontra-se na tabela a seguir. Resolva o exercício com função com retorno.

Salário             Percentual de aumento
Até R$ 300,00             35%
Acima de R$ 300,00        15%*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo(float sal);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento, novo_sal;

    printf("\n\tREAJUSTE DE SALÁRIO\n");

    printf("\nDigite seu salário: ");
    scanf("%f", &salario);

    aumento = calculo(salario);
    novo_sal = salario + aumento;

    printf("Você receberá um aumento de %.2f, sendo assim, um novo salário de %.2f.\n", aumento, novo_sal);
}

float calculo(float sal)
{
    float novo_sal, aumento;

    if ((sal > 0) && (sal <= 300)) {
        aumento = (sal * 0.35);
        novo_sal = (sal + aumento);
    } else if ((sal > 300)) {
        aumento = (sal * 0.15);
        novo_sal = (sal + aumento);
    } else {
        novo_sal = 0.0;
    }

    return novo_sal;
}
