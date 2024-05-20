/*2 - Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de
horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima
de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas
horas. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo (float horas, float valor);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float h, v, a;

    printf("\tCALCULE SEU SALÁRIO SEMANAL:");
    printf("\n\nDigite quantas horas você trabalhou na semana:");
    scanf("%f", &h);
    printf("\n\nDigite o valor da hora de serviço:");
    scanf("%f", &v);

    a =  calculo (h, v);
    printf("\nVocê receberá: R$%.2f\n", a);
}

float calculo (float horas, float valor){

    float cal;

    if ((horas >= 0) && (horas <= 40)) {
        cal = horas * valor;
        }else if ((horas > 40) && (horas <= 60) && (horas > 0)) {
            cal = (horas * valor * 0.5) + (horas * valor);
        }   else if ((horas > 60) && (horas < 70) && (horas > 0)) {
                cal = horas * valor * 2;
}               else {
                    printf("Número inválido, tente novamente\n");
}
        return cal;

}
