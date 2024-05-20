/* Faça um algoritmo que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F = 180 (C + 32) / 100.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float celsius, resultado;
    // TODOS AS VARIÁVEIS PRECISAM SER COLOCADAS NO FLOAT

    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &celsius);

    resultado = celsius*1.8+32;


    printf("\nA temperatura em Fahrenheit é: %.2f°", resultado);

}

