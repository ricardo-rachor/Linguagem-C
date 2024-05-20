/*6 � Fa�a um programa que sorteie um n�mero aleat�rio entre 0 e 500 e pergunte ao usu�rio qual � o
"n�mero m�gico". O programa dever� indicar se a tentativa efetuada pelo usu�rio � maior ou menor que o
n�mero m�gico e contar o n�mero de tentativas. Quando o usu�rio conseguir acertar o n�mero o programa
dever� classificar o usu�rio como:
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

    printf("\tBem-vindo ao Jogo do N�mero M�gico!\n");
    printf("\n\nTente adivinhar o n�mero m�gico entre 0 e 500.\n");

    do {
        printf("\nDigite sua tentativa: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa < numeroMagico) {
            printf("O n�mero m�gico � maior. Tente novamente.\n", tentativas);
        } else if (tentativa > numeroMagico) {
            printf("O n�mero m�gico � menor. Tente novamente.\n", tentativas);
        } else {
            printf("\n\nParab�ns! Voc� acertou o n�mero m�gico %d em %d tentativas.\n", numeroMagico, tentativas);

            if (tentativas >= 1 && tentativas <= 3) {
                printf("Classifica��o: Muito sortudo!\n");
            } else if (tentativas >= 4 && tentativas <= 6) {
                printf("Classifica��o: Sortudo!\n");
            } else if (tentativas >= 7 && tentativas <= 10) {
                printf("Classifica��o: Normal.\n");
            } else {
                printf("Tente novamente.\n");
            }
        }
    } while (tentativa != numeroMagico);

    return 0;
}
