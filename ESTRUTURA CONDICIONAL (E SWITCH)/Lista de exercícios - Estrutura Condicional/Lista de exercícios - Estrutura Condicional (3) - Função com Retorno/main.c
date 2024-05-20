/*3. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$
500,00. Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio
reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo(float salario) {
    float aumento;

    aumento = salario * 0.3;

    return aumento;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float salario, salario_novo, aumento;

    do {
        printf("Digite seu sal�rio, por favor: ");
        scanf("%f", &salario);
        if (salario <= 0 || salario > 100000000000) {
            printf("\nSal�rio inv�lido, tente novamente!\n\n");
        }
    } while (salario <= 0 || salario > 100000000000);

    aumento = calculo(salario);

    if (salario < 500) {
        salario_novo = salario + aumento;
        printf("\nVoc� receber� um aumento de R$%.2f", aumento);
        printf("\nSeu novo sal�rio ser� de R$%.2f\n", salario_novo);
    } else {
        printf("\nVoc� n�o est� dentro dos funcion�rios que receber�o aumento!\n");
    }

    return 0;
}






