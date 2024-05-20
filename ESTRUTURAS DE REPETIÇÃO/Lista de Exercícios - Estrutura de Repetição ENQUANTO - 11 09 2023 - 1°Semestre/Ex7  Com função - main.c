/*7. Considerando a altura dos N alunos de uma turma fa�a um algoritmo para calcular a m�dia das alturas e
determinar a quantidade de alunos com altura >1.60 e <1.75 m.
Encerrar leitura com altura <=0*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcular_media(int cont, float soma) {
    float media;

    if (cont > 0) {
        media = soma / cont;
        return media;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float altura;
    int cont = 0, cont2 = 0;
    float soma = 0.0;

    printf("\tPROGRAMA - M�DIA DAS ALTURAS\n");

    while (1) {
        printf("\nDigite uma altura (ou zero para encerrar): ");
        scanf("%f", &altura);
        soma += altura;
        cont++;

        if (altura == 0) {
            printf("\nPrograma encerrado!\n");
            break;
        }

        if (altura >= 1.60 && altura <= 1.75) {
            cont2++;
        }
    }

    float media = calcular_media(cont, soma);

    if (media > 0) {
        printf("\nA m�dia das alturas que voc� digitou �: %.2f M\n", media);
            } else {
                printf("\nN�o foram inseridas alturas v�lidas.\n");
                }

    if (cont2 > 0) {
        printf("\nH� %d pessoas com altura entre 1,60 M e 1,75 M.\n", cont2);
        }else {
            printf("\nN�o h� pessoas com altura entre 1,60 M e 1,75 M.\n");
            }

    return 0;
}
