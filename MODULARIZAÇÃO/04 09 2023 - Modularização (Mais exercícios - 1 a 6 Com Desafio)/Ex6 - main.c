/*6 – Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o
"número mágico". O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou menor que o
número mágico e contar o número de tentativas. Quando o usuário conseguir acertar o número o programa
deverá classificar o usuário como:
a. De 1 a 3 tentativas: muito sortudo
b. De 4 a 6 tentativas: sortudo
c. De 7 a 10 tentativas: normal
d. Mais de 10 tentativas: tente novamente*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int numeroMagico = rand() % 501;
    int tentativa, tentativas = 0;

    printf("\tBem-vindo ao Jogo do Número Mágico!\n");
    printf("\n\nTente adivinhar o número mágico entre 0 e 500.\n");

    do {
        printf("\nDigite sua tentativa: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa < numeroMagico) {
            printf("O número mágico é maior. Tente novamente.\n", tentativas);
        } else if (tentativa > numeroMagico) {
            printf("O número mágico é menor. Tente novamente.\n", tentativas);
        } else {
            printf("\n\nParabéns! Você acertou o número mágico %d em %d tentativas.\n", numeroMagico, tentativas);

            if (tentativas >= 1 && tentativas <= 3) {
                printf("Classificação: Muito sortudo!\n");
            } else if (tentativas >= 4 && tentativas <= 6) {
                printf("Classificação: Sortudo!\n");
            } else if (tentativas >= 7 && tentativas <= 10) {
                printf("Classificação: Normal.\n");
            } else {
                printf("Tente novamente.\n");
            }
        }
    } while (tentativa != numeroMagico);

    return 0;
}
