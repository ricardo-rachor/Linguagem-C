/*Faça um programa que leia dez conjuntos de dois valores, o
primeiro representando o número do aluno e o segundo
representando a sua altura em centímetros. Encontre o aluno mais
alto e o mais baixo. Mostre o número do aluno mais alto e o número
do aluno mais baixo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, matr, mais_alto, mais_baixo;  // -> CONTADORES E ACUMULADORES PRECISAM SER INICIALIZADOS
    float alt, menor_alt=999, maior_alt=0;

    for (x=1;x<=4;x++){   // n tem ";"
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matr);
        printf("Digite a altura do aluno: ");
        scanf("%f", &alt);


    if (alt < menor_alt){
        menor_alt = alt;
        mais_baixo = matr;
    }

    if (alt > maior_alt){
        maior_alt = alt;
        mais_alto = matr;

    }

    }
    printf("\nMaior altura = %.2f cm do aluno matrícula: %d", maior_alt, mais_alto);
    printf("\nMenor altura = %.2f cm do aluno matrícula: %d", menor_alt, mais_baixo);

    }

