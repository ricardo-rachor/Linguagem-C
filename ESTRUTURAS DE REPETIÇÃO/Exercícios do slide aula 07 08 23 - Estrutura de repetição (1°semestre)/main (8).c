/*Fa�a um programa que leia dez conjuntos de dois valores, o
primeiro representando o n�mero do aluno e o segundo
representando a sua altura em cent�metros. Encontre o aluno mais
alto e o mais baixo. Mostre o n�mero do aluno mais alto e o n�mero
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
        printf("Digite a matr�cula do aluno: ");
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
    printf("\nMaior altura = %.2f cm do aluno matr�cula: %d", maior_alt, mais_alto);
    printf("\nMenor altura = %.2f cm do aluno matr�cula: %d", menor_alt, mais_baixo);

    }

