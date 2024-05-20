/*3. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$
500,00. Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio
reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float sal, aumento, salario;

    printf("\nDigite seu sal�rio:\n");
    scanf("%f", &sal);

    aumento = 500*0.3;
    salario = aumento + sal;

    if ((sal<500) && (sal>0))
        printf("Voc� receber� um aumento de R$%.2f, totalizando R$%.2f", aumento, salario);
        else if (((sal>500) or (sal>0) or (sal<=40000)))
            printf("Voc� n�o est� apto a receber aumento");
            else if ((sal<=0) or (sal>40000))
                printf("Sal�rio inv�lido, tente novamente!");
}
