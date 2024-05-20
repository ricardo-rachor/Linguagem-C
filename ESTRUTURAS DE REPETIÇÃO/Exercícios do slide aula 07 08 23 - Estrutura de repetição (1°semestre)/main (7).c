/*Sendo H = 1 + 1/2 + 1/3 + ¼ + ... + 1/N, escreva um algoritmo
para gerar o número H. O número N é fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, x;
    float h;

   //ENTRADA DE DADOS
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (x=1;x<=n;x++)
        h = h + 1/x;

    printf("Valor de H: %.2f", h);
}
