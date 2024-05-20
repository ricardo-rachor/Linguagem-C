/*3 - (Cortesia do Prof. Bogdan Tomoyuki Nassu) Zeca está organizando um bolão de futebol. Segundo suas
regras, os apostadores informam o placar do jogo e ganham 10 pontos se acertarem o vencedor ou se
acertarem que foi empate, e ganham mais 5 pontos para o placar de cada time que acertarem. A tabela a
seguir dá um exemplo, considerando que o placar real foi 3x2:

- Não acertou o número de gols nem o vencedor - 0 pontos
- Não acertou o vencedor, mas acertou o número de gols do segundo time - 5 pontos
- Não acertou o vencedor, mas acertou o número de gols do primeiro time - 5 pontos
- Acertou o vencedor, mas não acertou o número de gols dos times - 10 pontos
- Acertou o número de gols e o número de gols do primeiro time - 15 pontos
- Acertou o vencedor e o número de gols de ambos os times - 20 pontos

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[25], sobrenome[25], time1[25], time2[25], op;
    int g_time1, g_time2, r_time1, r_time2, pontos = 0;
    float valor, calculo;

    printf("Primeiro nome: ");
    scanf("%s", nome);
    printf("Ultimo sobrenome: ");
    scanf("%s", sobrenome);

    printf("\n\n\tOlá %s %s, bem-vindo a UNISC.bet\n", nome, sobrenome);
    printf("\n\nEssas são as odds de hoje:");
    printf("\n\nNão acertou o número de gols nem o vencedor - odd 0.\n");
    printf("Não acertou o vencedor, mas acertou o número de gols do segundo time - odd 5.\n");
    printf("Não acertou o vencedor, mas acertou o número de gols do primeiro time - odd 5.\n");
    printf("Acertou o vencedor, mas não acertou o número de gols dos times - odd 10.\n");
    printf("Acertou o número de gols e o número de gols do primeiro time - odd 15.\n");
    printf("Acertou o vencedor e o número de gols de ambos os times - odd 20.\n");

    while (1) {
        printf("\n\nDigite o nome do time da casa que deseja apostar:\n");
        scanf("%s", time1);
        printf("Digite quantos gols você acha que o %s vai fazer:\n", time1);
        scanf("%d", &g_time1);
        printf("\n\nDigite o nome do time adversário:\n");
        scanf("%s", time2);
        printf("Digite quantos gols você acha que o %s vai fazer:\n", time2);
        scanf("%d", &g_time2);
        printf("\n\nDigite quantos R$ você quer apostar:\n");
        scanf("%f", &valor);

        printf("\n\n\tResumo da aposta:");
        printf("\n\n\t%s %d X %d %s", time1, g_time1, g_time2, time2);
        printf("\n\n\t   R$%.2f", valor);

        printf("\n\tConfirme:\n");
        printf("\n C. Correto ");
        printf("\n R. Reiniciar ");
        printf("\n\nDigite o código referente:\n");
        scanf(" %c", &op);

        op = toupper(op);
        if (op == 'C')
            break;
    }

    while (1) {
        printf("\n\nOK. Boa sorte!");

        printf("\n\nDigite quantos gols o %s fez:\n", time1);
        scanf("%d", &r_time1);
        printf("Digite quantos gols o %s fez:\n", time2);
        scanf("%d", &r_time2);

        printf("\n\n\tResumo do jogo:");
        printf("\n\n\t%s %d X %d %s", time1, r_time1, r_time2, time2);

        printf("\nConfirme:\n");
        printf("\n C. Correto ");
        printf("\n R. Reiniciar ");
        printf("\n\nDigite o código referente:\n");
        scanf(" %c", &op);

        op = toupper(op);
        if (op == 'C')
            break;
    }

    if (g_time1 == r_time1 && g_time2 == r_time2) {
        pontos = 20;
    } else if ((g_time1 == r_time1 || g_time2 == r_time2) && (r_time1 == r_time2)) {
        pontos = 15;
    } else if ((g_time1 == r_time1 || g_time2 == r_time2)) {
        pontos = 10;
    } else if (g_time1 == r_time1) {
        pontos = 5;
    } else if (g_time2 == r_time2) {
        pontos = 5;
    } else {
        pontos = 0;
    }

    calculo = pontos * valor;

    printf("Aposta encerrada, você ganhou R$%.2f!\n", calculo);

    return 0;
}
