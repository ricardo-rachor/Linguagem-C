//2. Fa�a um algoritmo que receba um n�mero, calcule e mostre tabuada desse n�mero.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, n, tab;

    //ENTRADA DE DADOS
    printf("Digite um n�mero: ");
    scanf("%d", &x);     //n esquecer do &

    //ESTRUTURA DE REPETI��O
    for (n=1;n<=10;n++){     // n tem ";"
        tab = x*n;
        printf("\n%d * %d = %d", x, n, tab);
    }

}
