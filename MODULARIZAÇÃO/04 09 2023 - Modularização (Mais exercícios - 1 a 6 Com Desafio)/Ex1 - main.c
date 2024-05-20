/*1 - (Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que receba a velocidade m�xima em
uma avenida e a velocidade com que um motorista estava dirigindo nela. Calcule a multa que o motorista vai
receber, considerando que s�o pagos R$ 5,00 por cada km/h que estiver acima da velocidade permitida
(considere apenas n�meros inteiros). Se a velocidade do motorista estiver dentro do limite, o programa deve
informar que n�o h� multa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo (int velocidade_max, int velocidade_mot);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vel_max, vel_mot;

    printf("\tGANHOU MULTA OU N�O?:");
    printf("\n\nDigite a velocidade permitida na via:");
    scanf("%d", &vel_max);
    printf("\n\nDigite a velocidade que voc� estava na via:");
    scanf("%d", &vel_mot);

    calculo (vel_max, vel_mot);
}

void calculo (int velocidade_max, int velocidade_mot) {

    int cal, cal2;

    if ((velocidade_mot <= velocidade_max) && (velocidade_mot > 0))
        printf("Voc� estava nos limites da via, logo, n�o sofreu multa!");
        else if ((velocidade_mot>0) && (velocidade_mot>velocidade_max) && (velocidade_mot<300)){
            cal = ((velocidade_mot - velocidade_max) * 5);
            cal2 = (velocidade_mot - velocidade_max);
            printf("\n\nVoc� ultrapassou %d KM, totalizando uma multa de R$%d.", cal2, cal);
    }else
        printf("N�mero inv�lido, tente novamente!");
}
