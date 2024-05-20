/*11. Uma loja fornece 5% de desconto para funcion�rios e 10% de desconto para clientes especiais.
Fa�a um programa que calcule, por meio de uma fun��o com retorno, o valor total a ser pago por uma
pessoa. O programa dever� ler o valor total da compra efetuada e um c�digo que identifique o tipo de
cliente.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calculo5(float v);
float calculo10(float v);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float valor, desconto, total;

    printf("\n\tBem-vindos a UNISC Modas\n");

    do {

        printf("\n_______________________________________\n");

        printf("\n\tMENU\n");

        printf("\n 1 - Funcion�rio.\n");
        printf(" 2 - Cliente especial.\n");
        printf(" 3 - Encerrar\n");

        printf("\n Digite a op��o desejada: ");
        scanf("%d", &opcao);

        if (opcao == 3) {
            printf("\n PROGRAMA ENCERRADO...\n");
            break;
        }

        if (opcao != 1 && opcao != 2) {
            printf("\n Op��o inv�lida, digite 1 ou 2.\n");
            continue;
        }

        do {
            printf("\n Digite o valor da compra: ");
            scanf("%f", &valor);

            if (valor <= 0)
                printf("\n Valor inserido igual a 0 ou negativo, tente novamente!\n");
        } while (valor <= 0);

        switch (opcao) {
            case 1:
                desconto = calculo5(valor);
                total = valor - desconto;
                printf("\n Voc�, como funcion�rio, receber� um desconto de R$%.2f, equivalente a 5 por cento.\n", desconto);
                printf(" Sendo assim, pagar� um total de: R$%.2f\n", total);
                break;
            case 2:
                desconto = calculo10(valor);
                total = valor - desconto;
                printf("\n Voc�, como cliente especial, receber� um desconto de R$%.2f, equivalente a 10 por cento.\n", desconto);
                printf(" Sendo assim, pagar� um total de: R$%.2f\n", total);
                break;
        }

    } while (opcao != 3);

    return 0;
}

float calculo5(float v) {
    return v * 0.05;
}

float calculo10(float v) {
    return v * 0.10;
}
