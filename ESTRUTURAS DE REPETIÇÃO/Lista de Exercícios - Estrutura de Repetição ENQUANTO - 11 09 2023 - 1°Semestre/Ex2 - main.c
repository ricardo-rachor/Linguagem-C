/*2. Fa�a um algoritmo que leia um n�mero inteiro repetidas vezes, paralisando a leitura com n�mero <= zero
e escreva, para cada valor lido, a soma de todos os n�meros menores que 100. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "Portuguese_Brazil");

     int numero, soma;

     printf("\tPROGRAMA QUE SOMA N�MEROS MENORES QUE 100\n");

     while (1) {

    printf("\n\nDigite um n�mero inteiro igual ou maior que 1!\n");
    printf("Digite 0 para encerrar: ");
    scanf("%d", &numero);

        if (numero == 0)
            break;

    if ((numero>0) && (numero<100)){
        soma = numero + soma;
        }
    printf("Soma: %d", soma);
     }

     printf("\n\nPrograma encerrado!\n");
     printf("Soma: %d", soma);
}
