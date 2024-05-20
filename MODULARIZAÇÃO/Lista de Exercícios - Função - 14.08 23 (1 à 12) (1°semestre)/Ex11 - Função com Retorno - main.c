/*11. Uma loja fornece 5% de desconto para funcionários e 10% de desconto para clientes especiais.
Faça um programa que calcule, por meio de uma função com retorno, o valor total a ser pago por uma
pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique o tipo de
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

        printf("\n 1 - Funcionário.\n");
        printf(" 2 - Cliente especial.\n");
        printf(" 3 - Encerrar\n");

        printf("\n Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao == 3) {
            printf("\n PROGRAMA ENCERRADO...\n");
            break;
        }

        if (opcao != 1 && opcao != 2) {
            printf("\n Opção inválida, digite 1 ou 2.\n");
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
                printf("\n Você, como funcionário, receberá um desconto de R$%.2f, equivalente a 5 por cento.\n", desconto);
                printf(" Sendo assim, pagará um total de: R$%.2f\n", total);
                break;
            case 2:
                desconto = calculo10(valor);
                total = valor - desconto;
                printf("\n Você, como cliente especial, receberá um desconto de R$%.2f, equivalente a 10 por cento.\n", desconto);
                printf(" Sendo assim, pagará um total de: R$%.2f\n", total);
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
