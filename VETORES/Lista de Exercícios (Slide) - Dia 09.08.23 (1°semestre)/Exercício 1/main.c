/*1 – Faça um programa que preencha um vetor com 20 valores
inteiros, calcule e mostre a soma dos elementos pares.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //ENTRADA DE DADOS
    int V[MAX], x, valor, soma=0;

    //ESTRUTURA DE REPETIÇÃO
    for (x=0; x<MAX; x++){
        printf("Digite o valor:");
        scanf("%d", &V[x]);

        if ((V[x]%2)==0)
            soma=soma+V[x];   //  -> O NUM Q FOR PAR, ENTRA NA SOMA!
    }
    printf("A soma dos números pares é: %d", soma);

}
