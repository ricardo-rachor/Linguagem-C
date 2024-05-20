/*10. Faça um programa que lê quatro valores, I, A, B e C onde I é um número inteiro e positivo e A,B
e C são quaisquer valores reais. O programa deve escrever os valores lidos e:

a) se I=1 escrever os três valores A, B e C em ordem crescente

b) se I=2 escrever os três valores A, B e C em ordem decrescente

c) se I=3 escrever os três valores A, B e C de forma que o maior valor fique entre os outros dois

d) se I não for um dos três valores acima, dar uma mensagem indicando isto.
Faça uma função sem retorno para cada valor de I, exceto para valor diferente de 1, 2 ou 3.*/


#include <stdio.h>
#include <locale.h>

void crescente(float a, float b, float c);
void decrescente(float a, float b, float c);
void maiorNoMeio(float a, float b, float c);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int I;
    float num1, num2, num3;

    printf("\n\tBem-vindos ao Programa dos números:\n");

    do {
        printf("\n1 - Imprimir os valores em ordem crescente.\n");
        printf("2 - Imprimir os valores em ordem decrescente.\n");
        printf("3 - Imprimir os valores com o maior valor no meio.\n");
        printf("4 - Encerrar\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &I);

        if (I == 4) {
            printf("\nPROGRAMA ENCERRADO...\n");
            break;
        }

        if (I != 1 && I != 2 && I != 3) {
            printf("\nOpção inválida, digite 1, 2 ou 3.\n");
            continue;
        }

        printf("\nDigite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        printf("Digite o terceiro número: ");
        scanf("%f", &num3);

        switch (I) {
            case 1:
                crescente(num1, num2, num3);
                break;
            case 2:
                decrescente(num1, num2, num3);
                break;
            case 3:
                maiorNoMeio(num1, num2, num3);
                break;
        }

    } while (I != 4);

    return 0;
}

void crescente(float a, float b, float c) {
    if (a <= b && b <= c)
        printf("%.2f, %.2f, %.2f\n", a, b, c);
    else if (a <= c && c <= b)
        printf("%.2f, %.2f, %.2f\n", a, c, b);
    else if (b <= a && a <= c)
        printf("%.2f, %.2f, %.2f\n", b, a, c);
    else if (b <= c && c <= a)
        printf("%.2f, %.2f, %.2f\n", b, c, a);
    else if (c <= a && a <= b)
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    else
        printf("%.2f, %.2f, %.2f\n", c, b, a);
}

void decrescente(float a, float b, float c) {
    if (a >= b && b >= c)
        printf("%.2f, %.2f, %.2f\n", a, b, c);
    else if (a >= c && c >= b)
        printf("%.2f, %.2f, %.2f\n", a, c, b);
    else if (b >= a && a >= c)
        printf("%.2f, %.2f, %.2f\n", b, a, c);
    else if (b >= c && c >= a)
        printf("%.2f, %.2f, %.2f\n", b, c, a);
    else if (c >= a && a >= b)
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    else
        printf("%.2f, %.2f, %.2f\n", c, b, a);
}

void maiorNoMeio(float a, float b, float c) {
    float maior, menor, meio;

    if (a >= b && a >= c) {
        maior = a;
        if (b >= c) {
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = b;
        }
    } else if (b >= a && b >= c) {
        maior = b;
        if (a >= c) {
            meio = a;
            menor = c;
        } else {
            meio = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a >= b) {
            meio = a;
            menor = b;
        } else {
            meio = b;
            menor = a;
        }
    }

    printf("%.2f, %.2f, %.2f\n", menor, maior, meio);
}
