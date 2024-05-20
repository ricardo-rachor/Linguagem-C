/*   3.

     - Faça um programa que receba dez números inteiros e armazene-os em um vetor.
     - Calcule e mostre dois vetores resultantes.
     - O primeiro com os números pares e o segundo com os números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int V[MAX], Vpar[MAX], Vimpar[MAX];
    int x, i, cont_par = 0, cont_impar = 0;

    for (x = 0; x < MAX; x++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &V[x]);
        printf("__________________________________\n");
    }

    printf("\n\t\tAssim ficou o seu vetor original:\n\n");
    for (i = 0; i < MAX; i++) {
        printf("| %d | ", V[i]);
    }

    printf("\n____________________________________________________________________________________________________\n");

    for (x = 0; x < MAX; x++) {
        if (V[x] % 2 == 0) {
            Vpar[cont_par] = V[x];
            cont_par++;
        } else {
            Vimpar[cont_impar] = V[x];
            cont_impar++;
        }
    }

    printf("\n\n\t\tVetor com números pares:\n\n");
    for (x = 0; x < cont_par; x++) {
        printf("| %d | ", Vpar[x]);
    }

    printf("\n____________________________________________________________________________________________________\n");

    printf("\n\n\t\tVetor com números ímpares:\n\n");
    for (x = 0; x < cont_impar; x++) {
        printf("| %d | ", Vimpar[x]);
    }

    printf("\n____________________________________________________________________________________________________\n\n");

    return 0;
}
