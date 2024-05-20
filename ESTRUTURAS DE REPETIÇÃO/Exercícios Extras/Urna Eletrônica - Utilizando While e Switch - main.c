/*5. Fa�a um programa que simule a urna eletr�nica.
A tela a ser apresentada dever� ser da seguinte forma:

As opcoes sao:

1. Candidato Jair Rodrigues
2. Candidato Carlos Luz
3. Candidato Neves Rocha
4. Nulo
5. Branco

Entre com o seu voto:

O programa dever� ler os votos dos eleitores e, quando for entrado o n�mero 6, apresentar as seguintes
informa��es:

a) O n�mero de votos de cada candidato;
b) A porcentagem de votos nulos;
c) A porcentagem de votos brancos;
d) O candidato vencedor. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int voto, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    printf("\n\tBem vindo a Urna eletr�nica da UNISC\n");

    do {
        printf("\n1. Candidato Jair Rodrigues\n");
        printf("2. Candidato Carlos Luz\n");
        printf("3. Candidato Neves Rocha\n");
        printf("4. Nulo\n");
        printf("5. Branco\n");
        printf("6. Encerrar\n");

        printf("\n\nDigite seu voto conforme o n�mero referente a sua op��o!\n");
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 5) {
            switch (voto) {
                case 1:
                    cont1++;
                    break;
                case 2:
                    cont2++;
                    break;
                case 3:
                    cont3++;
                    break;
                case 4:
                    cont4++;
                    break;
                case 5:
                    cont5++;
                    break;
            }
        } else if (voto == 6) {
            printf("\nVota��o encerrada. Obrigado por participar!\n");
        } else {
            printf("\nN�mero inv�lido, tente novamente!\n");
        }
    } while (voto != 6);

    printf("\n\tN�meros da vota��o:\n");
    printf("\nCandidato Jair Rodrigues: %d votos.\n", cont1);
    printf("Candidato Carlos Luz: %d votos.\n", cont2);
    printf("Candidato Neves Rocha: %d votos.\n", cont3);
    printf("Nulo: %d votos.\n", cont4);
    printf("Branco: %d votos.\n", cont5);

    return 0;
}
