/*2 - Escreva um programa que calcule o sal�rio semanal de um trabalhador. As entradas s�o o n�mero de
horas trabalhadas na semana e o valor da hora. At� 40 h/semana n�o se acrescenta nenhum adicional. Acima
de 40h e at� 60h h� um b�nus de 50% para essas horas. Acima de 60h h� um b�nus de 100% para essas
horas. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo (float horas, float valor);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float h, v, a;

    printf("\tCALCULE SEU SAL�RIO SEMANAL:");
    printf("\n\nDigite quantas horas voc� trabalhou na semana:");
    scanf("%f", &h);
    printf("\n\nDigite o valor da hora de servi�o:");
    scanf("%f", &v);

    a =  calculo (h, v);
    printf("\nVoc� receber�: R$%.2f\n", a);
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
                    printf("N�mero inv�lido, tente novamente\n");
}
        return cal;

}
