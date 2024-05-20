/*2. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00.
Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma
mensagem, caso ele não tenha direito ao aumento. Resolva o exercício com função sem retorno.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo (float sal);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("\n\tVEJA SE RECEBERÁ AUMENTO!!!!\n");

    printf("\nDigite seu salário: ");
    scanf("%f", &salario);

    calculo(salario);
}

void calculo (float sal){
    float novo_sal, aumento;
    if ((sal>0) && (sal<500)){
        aumento = (sal*0.3);
        novo_sal = ((sal*0.3) + sal);
        printf("Você receberá um aumento de R$%.2f, logo, um novo salário de R$%.2f", aumento, novo_sal);
        }else
            printf("\nSalario inválido ou maior que R$500,00");

}
