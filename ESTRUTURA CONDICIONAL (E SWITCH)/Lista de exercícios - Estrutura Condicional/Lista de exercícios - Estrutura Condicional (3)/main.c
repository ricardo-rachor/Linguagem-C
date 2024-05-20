/*3. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$
500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário
reajustado ou uma mensagem, caso ele não tenha direito ao aumento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float sal, aumento, salario;

    printf("\nDigite seu salário:\n");
    scanf("%f", &sal);

    aumento = 500*0.3;
    salario = aumento + sal;

    if ((sal<500) && (sal>0))
        printf("Você receberá um aumento de R$%.2f, totalizando R$%.2f", aumento, salario);
        else if (((sal>500) or (sal>0) or (sal<=40000)))
            printf("Você não está apto a receber aumento");
            else if ((sal<=0) or (sal>40000))
                printf("Salário inválido, tente novamente!");
}
