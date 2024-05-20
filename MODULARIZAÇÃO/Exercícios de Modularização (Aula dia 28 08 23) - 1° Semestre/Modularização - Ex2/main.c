/*2. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00.
Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma
mensagem, caso ele não tenha direito ao aumento. Resolva o exercício com função sem retorno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aumento(float salario);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float sal;

    printf("\n\nDigite o seu salário:\n");
    scanf(" %f", &sal);

    aumento(sal);

}

void aumento(float salario){
    float novosal;
    if(salario<500){
        novosal = ((salario*0.3) + (salario));
        printf("Seu novo salário será de: R$%.2f", novosal);
        }else
            printf("Você não tem direito a aumento!");
}



