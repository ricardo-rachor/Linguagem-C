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

void calculo(int *p, int g1, int g2, int r1, int r2, float v);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int pontos = 0, g_time1, g_time2, r_time1, r_time2;
    float valor;
    char nome[25], sobrenome[25], time1[25], time2[25], op;

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

        printf("\nConfirme:\n");
        printf("\n C. Correto ");
        printf("\n R. Reiniciar ");
        printf("\n\nDigite o código referente:\n");
        scanf(" %s", &op);

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

        printf("Confirme:\n");
        printf("\n C. Correto ");
        printf("\n R. Reiniciar ");
        printf("\n\nDigite o código referente:\n");
        scanf(" %s", &op);

        op = toupper(op);
        if (op == 'C')
            break;
    }

    calculo(&pontos, g_time1, g_time2, r_time1, r_time2, valor);

    return 0;
}

void calculo(int *p, int g1, int g2, int r1, int r2, float v) {
    float cal;

    if (g1 == r1 && g2 == r2) {
        *p = 20;
    } else if ((g1 == r1 || g2 == r2) && (r1 == r2)) {
        *p = 15;
    } else if ((g1 == r1 || g2 == r2)) {
        *p = 10;
    } else if (g1 == r1) {
        *p = 5;
    } else if (g2 == r2) {
        *p = 5;
    } else {
        *p = 0;
    }

    cal = *p * v;

    printf("Aposta encerrada, você ganhou R$%.2f!\n", cal);
}

