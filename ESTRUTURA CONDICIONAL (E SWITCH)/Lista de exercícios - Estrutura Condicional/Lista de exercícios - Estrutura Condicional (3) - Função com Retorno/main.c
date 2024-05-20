/*3. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$
500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário
reajustado ou uma mensagem, caso ele não tenha direito ao aumento.*/

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
        printf("Digite seu salário, por favor: ");
        scanf("%f", &salario);
        if (salario <= 0 || salario > 100000000000) {
            printf("\nSalário inválido, tente novamente!\n\n");
        }
    } while (salario <= 0 || salario > 100000000000);

    aumento = calculo(salario);

    if (salario < 500) {
        salario_novo = salario + aumento;
        printf("\nVocê receberá um aumento de R$%.2f", aumento);
        printf("\nSeu novo salário será de R$%.2f\n", salario_novo);
    } else {
        printf("\nVocê não está dentro dos funcionários que receberão aumento!\n");
    }

    return 0;
}






