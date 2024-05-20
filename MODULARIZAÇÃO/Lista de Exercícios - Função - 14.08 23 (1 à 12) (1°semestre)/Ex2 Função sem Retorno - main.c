/*2. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00.
Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma
mensagem, caso ele n�o tenha direito ao aumento. Resolva o exerc�cio com fun��o sem retorno.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo (float sal);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("\n\tVEJA SE RECEBER� AUMENTO!!!!\n");

    printf("\nDigite seu sal�rio: ");
    scanf("%f", &salario);

    calculo(salario);
}

void calculo (float sal){
    float novo_sal, aumento;
    if ((sal>0) && (sal<500)){
        aumento = (sal*0.3);
        novo_sal = ((sal*0.3) + sal);
        printf("Voc� receber� um aumento de R$%.2f, logo, um novo sal�rio de R$%.2f", aumento, novo_sal);
        }else
            printf("\nSalario inv�lido ou maior que R$500,00");

}
