/*5 - (Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que lê um inteiro positivo e verifica
se ele contém o dígito 3 em qualquer posição. (Pesquise como separar o número em dígitos)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero, digito, resto, possui = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("\n\nDígitos do número: ");

    while (numero > 0) {
        resto = numero % 10;

        if (resto == 3) {
            possui = 1;
        }

        printf("\n\n%d\n", resto);
        numero = numero / 10;

    }

    if (possui) {
        printf("\nO número possui o número 3.\n");
    } else {
        printf("\nO número não possui o número 3.\n");
    }

    return 0;
}
