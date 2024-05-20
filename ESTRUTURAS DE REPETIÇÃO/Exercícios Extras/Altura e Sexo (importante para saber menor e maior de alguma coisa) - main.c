/*Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino). Fazer um algorítimo  que calcule e escreva:
• A maior e a menor altura do grupo;
• A média de altura das mulheres;
• O número de homens;*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calcular_media(int cont, float soma) {
    if (cont == 0) {
        return 0.0;
    }
    return soma / cont;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char op;
    float altura, maior_altura = 0.0, menor_altura = 1000.0;
    int cont_m = 0, cont_f = 0;
    float soma_m = 0.0, soma_f = 0.0;

    printf("\n\tPROGRAMA DAS ALTURAS E DO SEXO\n");

    do {
        printf("\n1 - Masculino");
        printf("\n2 - Feminino");
        printf("\n3 - Encerrar");
        printf("\n\nQual seu sexo (1 para Masculino, 2 para Feminino, 3 para Encerrar)?\n");
        scanf(" %c", &op);

        switch (op) {
            case '1':
                cont_m++;
                printf("\nDigite sua altura (em metros):\n");
                scanf("%f", &altura);
                soma_m += altura;
                if (altura > maior_altura) {
                    maior_altura = altura;
                }
                if (altura < menor_altura) {
                    menor_altura = altura;
                }
                break;

            case '2':
                cont_f++;
                printf("\nDigite sua altura (em metros):\n");
                scanf("%f", &altura);
                soma_f += altura;
                if (altura > maior_altura) {
                    maior_altura = altura;
                }
                if (altura < menor_altura) {
                    menor_altura = altura;
                }
                break;

            case '3':
                printf("\nOk, encerrado!\n");
                break;

            default:
                printf("\nOpção inválida. Digite 1 para Masculino, 2 para Feminino ou 3 para Encerrar.\n");
                break;
        }

    } while (op != '3');

    float media_feminino = calcular_media(cont_f, soma_f);

    printf("\nA maior altura do grupo é: %.2f metros\n", maior_altura);
    printf("A menor altura do grupo é: %.2f metros\n", menor_altura);
    printf("A média das alturas das mulheres é: %.2f metros\n", media_feminino);
    printf("O número de homens é: %d\n", cont_m);

    return 0;
}
