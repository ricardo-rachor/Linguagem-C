/*5 - (Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que l� um inteiro positivo e verifica
se ele cont�m o d�gito 3 em qualquer posi��o. (Pesquise como separar o n�mero em d�gitos)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero, digito, resto, possui = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("\n\nD�gitos do n�mero: ");

    while (numero > 0) {
        resto = numero % 10;

        if (resto == 3) {
            possui = 1;
        }

        printf("\n\n%d\n", resto);
        numero = numero / 10;

    }

    if (possui) {
        printf("\nO n�mero possui o n�mero 3.\n");
    } else {
        printf("\nO n�mero n�o possui o n�mero 3.\n");
    }

    return 0;
}
