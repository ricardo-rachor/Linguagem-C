/*Faça um programa que receba a idade e a altura de 10 pessoas e que calcule
e mostre a média das alturas das pessoas com mais de 50 anos.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, idade, cont=0;  // -> CONTADORES E ACUMULADORES PRECISAM SER INICIALIZADOS
    float altura, soma=0, media;

    for (x=1;x<=;x++){   // n tem ";"
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);


    if (idade>50) {
        soma = soma + altura;
        cont++;
    }
    }
    media = soma/cont;
    printf("\nA média das alturas das pessoas com mais de 50 anos é: %.2f metros\n", media);
}
