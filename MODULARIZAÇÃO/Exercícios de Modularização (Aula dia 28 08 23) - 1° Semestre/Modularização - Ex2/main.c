/*2. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00.
Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma
mensagem, caso ele n�o tenha direito ao aumento. Resolva o exerc�cio com fun��o sem retorno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aumento(float salario);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float sal;

    printf("\n\nDigite o seu sal�rio:\n");
    scanf(" %f", &sal);

    aumento(sal);

}

void aumento(float salario){
    float novosal;
    if(salario<500){
        novosal = ((salario*0.3) + (salario));
        printf("Seu novo sal�rio ser� de: R$%.2f", novosal);
        }else
            printf("Voc� n�o tem direito a aumento!");
}



