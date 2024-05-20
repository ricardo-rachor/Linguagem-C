/*12. O cardápio de uma lanchonete é o seguinte:
Especificação Preço unitário
100 Cachorro quente R$3,50
101 Bauru simples R$4,00
102 Bauru c/ovo R$4,50
103 Hamburger R$4,00
104 Cheeseburger R$3,00
Escrever um programa que leia o código do item pedido, a quantidade e calcule, através de uma
função com retorno, o valor a ser pago por aquele lanche. */

#include <stdio.h>
#include <stdio.h>
#include <locale.h>

float calculo100(int q);
float calculo101(int q);
float calculo102(int q);
float calculo103(int q);
float calculo104(int q);

int main()
{
    int opcao, quantidade;
    float v, valor_total;
    float soma100 = 0, soma101 = 0, soma102 = 0, soma103 = 0, soma104 = 0;

    printf("\n\tBem-vindos a Lanchonete da UNISC\n");

    do {

        printf("\n_______________________________________\n");

        printf("\n\tMENU\n");

        printf("\n 100 -   Cachorro quente  -    R$3,50\n");
        printf(" 101 -   Bauru simples    -    R$4,00\n");
        printf(" 102 -   Bauru c/ovo      -    R$4,50\n");
        printf(" 103 -   Hamburger        -    R$4,00\n");
        printf(" 104 -   Cheeseburger     -    R$3,00\n");
        printf("  0  -   Encerrar\n");

        printf("\n Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            valor_total = soma100+soma101+soma102+soma103+soma104;
            printf("Valor total = R$%.2f", valor_total);
            printf("\n PROGRAMA ENCERRADO...\n");
            break;
        }

        if (opcao != 100 && opcao != 101 && opcao != 102 && opcao != 103 && opcao != 104) {
            printf("\n Opção inválida, tente novamente.\n");
            continue;
        }

        do {
            printf("\n Digite quantos você quer: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0)
                printf("\n Quantidade inserida igual a 0 ou negativo, tente novamente!\n");
        } while (quantidade <= 0);

        switch (opcao) {
            case 100:
                v = calculo100(quantidade);
                printf("/n Você pagará um total de: R$%.2f\n", v);
                soma100 =+ v;
                break;
            case 101:
                v = calculo101(quantidade);
                printf("/n Você pagará um total de: R$%.2f\n", v);
                soma101 =+ v;
                break;
            case 102:
                v = calculo102(quantidade);
                printf("/n Você pagará um total de: R$%.2f\n", v);
                soma102 =+ v;
                break;
            case 103:
                v = calculo103(quantidade);
                printf("/n Você pagará um total de: R$%.2f\n", v);
                soma103 =+ v;
                break;
            case 104:
                v = calculo104(quantidade);
                printf("/n Você pagará um total de: R$%.2f\n", v);
                soma104 =+ v;
                break;
        }

    } while (opcao != 0);

    return 0;

}

float calculo100(int q) {
    return q * 3.50;
}

float calculo101(int q) {
    return q * 4;
}

float calculo102(int q) {
    return q * 4.50;
}

float calculo103(int q) {
    return q * 4;
}

float calculo104(int q) {
    return q * 3;
}
