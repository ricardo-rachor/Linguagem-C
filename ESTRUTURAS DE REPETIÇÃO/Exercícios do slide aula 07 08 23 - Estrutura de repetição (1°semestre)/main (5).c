//2. Faça um algoritmo que receba um número, calcule e mostre tabuada desse número.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, n, tab;

    //ENTRADA DE DADOS
    printf("Digite um número: ");
    scanf("%d", &x);     //n esquecer do &

    //ESTRUTURA DE REPETIÇÃO
    for (n=1;n<=10;n++){     // n tem ";"
        tab = x*n;
        printf("\n%d * %d = %d", x, n, tab);
    }

}
