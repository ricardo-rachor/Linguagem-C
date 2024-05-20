/*5. Faça um programa que leia a idade de dois homens e duas mulheres (considere que a idade dos
homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades do
homem mais velho com a mulher mais nova, e o produto das idades*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculo(int h1, int h2, int m1, int m2);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int homem1, homem2, mulher1, mulher2;

    do {
        printf("\nDigite a idade do 1° homem: ");
        scanf("%d", &homem1);
        printf("\nDigite a idade do 2° homem: ");
        scanf("%d", &homem2);

        if (homem1 == homem2) {
            printf("\nIdades iguais, tente novamente.\n");
        }
    } while (homem1 == homem2);

    do {
        printf("\nDigite a idade da 1° mulher: ");
        scanf("%d", &mulher1);
        printf("\nDigite a idade da 2° mulher: ");
        scanf("%d", &mulher2);

        if (mulher1 == mulher2) {
            printf("\nIdades iguais, tente novamente.\n");
        }
    } while (mulher1 == mulher2);

    calculo(homem1, homem2, mulher1, mulher2);

    return 0;
}

void calculo(int h1, int h2, int m1, int m2) {
    int soma, produto, mais_velho, mais_nova;

    if (h1 > h2)
        mais_velho = h1;
    else
        mais_velho = h2;

    if (m1 > m2)
        mais_nova = m2;
    else
        mais_nova = m1;

    soma = mais_velho + mais_nova;
    produto = (h1 + h2 + m1 + m2);

    printf("\n\tSOMA - MULHER MAIS NOVA + HOMEM MAIS VELHO");
    printf("\n\nO homem mais velho tem %d anos.\n", mais_velho);
    printf("A mulher mais nova tem %d anos.\n", mais_nova);
    printf("A soma dessas idades é %d.\n", soma);

    printf("\n\n\t\tPRODUTO DAS IDADES\n");
    printf("\n%d anos + %d anos + %d anos + %d anos = %d anos \n", h1, h2, m1, m2, produto);
}
