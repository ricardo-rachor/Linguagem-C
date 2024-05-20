#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

#define L1 5
#define C1 5

#define L 3
#define C 3

char board1[L1][C1];

void inicializarTabuleiro1() {   /* inicializar o tabuleiro do jogo da velha. Ela preenche todas as posições do tabuleiro com espaços em branco (' ')*/
    int i, j;                   /* indicando que nenhum jogador fez uma jogada naquela posição.*/

    for (i = 0; i < L1; i++) {
        for (j = 0; j < C1; j++) {
            board1[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro1() {  /* Essa função imprime o tabuleiro atual na tela de forma formatada (forma de tabela).*/
    int i, j;

    printf(" \n");
    for (i = 0; i < L1; i++) {
        for (j = 0; j < C1; j++) {
            printf(" %c", board1[i][j]);
            if (j < C1 - 1) {
                printf("  | ");
            }
        }
        printf(" \n");
        if (i < L1 - 1) {
            printf(" --------------------------\n");
        }
    }
    printf(" \n");
}

/*Essa função verifica se uma jogada é válida em uma posição específica do tabuleiro.*/
/* Retorna 1 se a jogada for válida (ou seja, a posição está vazia), e 0 caso contrário.*/

int jogadaValida1(int linha, int coluna) {
    if (linha >= 0 && linha < 5 && coluna >= 0 && coluna < 5 && board1[linha][coluna] == ' ')
        return 1;  // A posição está dentro dos limites e vazia, a jogada é válida
    else
        return 0;  // A posição está fora dos limites ou já está ocupada, a jogada não é válida
}

int linhaCheia1(int linha1) {
    for (int coluna1 = 0; coluna1 < C1; coluna1++) {
        if (board1[linha1][coluna1] == ' ') {  // Se tiver espaco vazio, nao esta cheia
            return 0;  // A linha não está cheia
        }
    }
    return 1;  // A linha está cheia
}

int jogadorGanhou1(char jogador1) { // A função verifica se há uma sequência de quatro símbolos iguais na horizontal (linha) ou na vertical (coluna).
    for (int i = 0; i < 5; i++) {       // O primeiro loop for percorre as linhas do tabuleiro.
        for (int j = 0; j < 2; j++) {   //O segundo loop for percorre até a penúltima posição de cada linha

            // Verifica sequência de 4 na linha
            if (board1[i][j] == jogador1 && board1[i][j + 1] == jogador1 && board1[i][j + 2] == jogador1 && board1[i][j + 3] == jogador1) {
                return 1;
            }
            // Verifica sequência de 4 na coluna
            if (board1[j][i] == jogador1 && board1[j + 1][i] == jogador1 && board1[j + 2][i] == jogador1 && board1[j + 3][i] == jogador1) {
                return 1;
            }
        }
    }

    // Verifica diagonais
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // Verifica sequência de 4 na diagonal principal
            if (board1[i][j] == jogador1 && board1[i + 1][j + 1] == jogador1 && board1[i + 2][j + 2] == jogador1 && board1[i + 3][j + 3] == jogador1) {
                return 1;
            }
            // Verifica sequência de 4 na diagonal secundária
            if (board1[i][4 - j] == jogador1 && board1[i + 1][3 - j] == jogador1 && board1[i + 2][2 - j] == jogador1 && board1[i + 3][1 - j] == jogador1) {
                return 1;
            }
        }
    }

    return 0;
}

int tabuleiroCheio1() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (board1[i][j] == ' ')
                return 0;  // Se encontrar pelo menos uma posição vazia, o tabuleiro não está cheio
        }
    }
    return 1;  // Se não encontrou posição vazia, o tabuleiro está cheio
}

int jogadaComputador1(char simbolo1) {
    int linha1, coluna1;

    // Escolhe uma posição aleatória
    do {
        linha1 = rand() % 5;
        coluna1 = rand() % 5;
    } while (!jogadaValida1(linha1, coluna1));

    board1[linha1][coluna1] = 'O';
    return 0; // Adicionei o retorno
}

/////////////////////////////////////////////////////////////

//Funcoes para matriz 3x3

char board[L][C];

void inicializarTabuleiro() {   /* inicializar o tabuleiro do jogo da velha. Ela preenche todas as posições do tabuleiro com espaços em branco (' ')*/
    int i, j;                   /* indicando que nenhum jogador fez uma jogada naquela posição.*/

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            board[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro() {  /* Essa função imprime o tabuleiro atual na tela de forma formatada (forma de tabela).*/
    int i, j;

    printf(" \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf(" %c", board[i][j]);
            if (j < C - 1) {
                printf("  | ");
            }
        }
        printf(" \n");
        if (i < L - 1) {
            printf(" ---------------\n");
        }
    }
    printf(" \n");
}

/* Essa função verifica se uma jogada é válida em uma posição específica do tabuleiro.*/
/* Retorna 1 se a jogada for válida (ou seja, a posição está vazia), e 0 caso contrário.*/

int jogadaValida(int linha, int coluna) {
    return (linha >= 0 && linha < L && coluna >= 0 && coluna < C && board[linha][coluna] == ' '); /* Os valores para linha e para coluna devem ser maiores que 0 e menores que 3, numero definido pra L e C.*/
}   /* Alem disso, verifica se a posicao esta vazia, comparando a jogada com '  '.*/


int linhaCheia(int linha) {
    for (int coluna = 0; coluna < C; coluna++) {
        if (board[linha][coluna] == ' ') {  // Se tiver espaco vazio, nao esta cheia
            return 0;  // A linha não está cheia
        }
    }
    return 1;  // A linha está cheia
}

int jogadorGanhou(char jogador) { /*Esta função verifica se um jogador venceu o jogo. Ela verifica todas as possíveis combinações de vitória nas linhas, colunas e diagonais do tabuleiro.*/
    int i, j;

    for (i = 0; i < L; i++) {
        if (board[i][0] == jogador && board[i][1] == jogador && board[i][2] == jogador) { /* Verificacao de vitoria em linha*/
            return 1;
        }
        if (board[0][i] == jogador && board[1][i] == jogador && board[2][i] == jogador) { /* Verificacao de vitoria em coluna*/
            return 1;
        }
    }

    if (board[0][0] == jogador && board[1][1] == jogador && board[2][2] == jogador) {  /* Verificacao de vitoria em diagonal (0, 1, 2)*/
        return 1;
    }
    if (board[0][2] == jogador && board[1][1] == jogador && board[2][0] == jogador) { /* Verificacao de vitoria em diagonal secundaria (2, 1, 0)*/
        return 1;
    }

    return 0;
}

int tabuleiroCheio() {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j] == ' ') {
                return 0; // Se houver pelo menos uma posição vazia, o tabuleiro não está cheio
            }
        }
    }
    return 1; // Se não houver posições vazias, o tabuleiro está cheio
}

int jogadaComputador(char simbolo) {
    // Priorizar o centro
    if (jogadaValida(1, 1)) {
        board[1][1] = simbolo;
        return;
    }

    // Escolher um canto aleatório
    for (int i = 0; i < 3; i += 2) {
        for (int j = 0; j < 3; j += 2) {
            if (jogadaValida(i, j)) {
                board[i][j] = simbolo;
                return;
            }
        }
    }

    // Escolher uma lateral aleatória
    for (int i = 0; i < 3; i += 2) {
        for (int j = 1; j < 3; j += 2) {
            if (jogadaValida(i, j)) {
                board[i][j] = simbolo;
                return;
            } else if (jogadaValida(j, i)) {
                board[j][i] = simbolo;
                return;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomeJogador[30];
    int escolha1;
    int escolha;

    int cont_maquina1 = 0;
    int cont_empate1 = 0;      //Fora do loop, sao inseridas as contagens, que serao contabilizadas nas funcoes de vitoria, derrota e empate.
    int cont_vitoria1 = 0;

    int cont_maquina = 0;
    int cont_empate = 0;      //Fora do loop, sao inseridas as contagens, que serao contabilizadas nas funcoes de vitoria, derrota e empate.
    int cont_vitoria = 0;

    printf("\n");
    printf("\t ---------------------------------------\n");
    printf("\t | Bem-vindo ao Jogo da Velha da Unisc |\n");
    printf("\t ---------------------------------------");
    printf("\n\n Para começar, digite seu nome: ");
    scanf(" %s", nomeJogador);
    printf("\n Muito bem %s, vamos começar:\n\n", nomeJogador);
    printf(" ----------------------------------------------------------------------------\n");

    printf("\n -> Temos duas modalidades: Original 3x3 e 5X5 (ganha com uma sequencia de 4)\n");

    int opcao;

    do{

    printf("\n -----------------------------\n");
    printf(" |        MENU PRINCIPAL     |\n");
    printf(" |                           |\n");
    printf(" |  1 - Jogo da Velha (3x3)  |\n");
    printf(" |  2 - Jogo da Velha (5x5)  |\n");
    printf(" |  3 - Encerrar             |\n");
    printf(" -----------------------------\n");

    do{

    printf("\n Digite o que voce deseja:");
    scanf(" %d", &opcao);

    if (((opcao != 1 && opcao != 2 && opcao != 3)))
        printf("\n Opção inválida, tente novamente!\n");

    }while (((opcao != 1 && opcao != 2 && opcao != 3)));

    switch (opcao){

    case 2:
    do {
        inicializarTabuleiro1();

        char jogador1 = 'X';
        char computador1 = 'O';

        int vezDoJogador1 = 1;
        int vezDoComputador1 = 0;

        printf("\n\t ---------------------\n");
        printf("\t | JOGO DA VELHA 5X5 |\n");
        printf("\t ---------------------\n");

        printf("\n -> Você é 'X' e a máquina é 'O'\n");

        int escolhaParImpar1;
        int num_sorteio1;

        printf("\n -> Vamos fazer um sorteio de ímpar e par para ver quem começa!\n");

        do {
            printf("\n -> Você quer ser par (digite 1) ou ímpar (digite 2): ");
            scanf(" %d", &escolhaParImpar1);

            if (escolhaParImpar1 != 1 && escolhaParImpar1 != 2) {
                printf("\n Opção inválida, tente novamente!\n");
            }

        } while (escolhaParImpar1 != 1 && escolhaParImpar1 != 2);

        srand(time(0));

        do {
            printf("\n Digite um número de 1 a 10: ");
            scanf(" %d", &num_sorteio1);

            if (num_sorteio1 < 1 || num_sorteio1 > 10) {
                printf("\n Número inválido, tente novamente!\n");
            }

        } while (num_sorteio1 < 1 || num_sorteio1 > 10);

        int maquina1 = rand() % 10 + 1; // Ajuste para garantir que o número seja de 1 a 10
        printf("\n Ok, a máquina escolheu o número: %d\n", maquina1);

        int soma1 = maquina1 + num_sorteio1;
        printf(" A soma dos números é: %d\n", soma1);

        if ((soma1 % 2 == 0 && escolhaParImpar1 == 1) || (soma1 % 2 != 0 && escolhaParImpar1 == 2)) {
            printf("\n Você começa o jogo!\n");
        } else {
            printf("\n A máquina começa o jogo!\n");
            vezDoJogador1 = 0;
            vezDoComputador1 = 1;
        }

        while (1) {
            imprimirTabuleiro1();

            if (vezDoJogador1) {
                int linha1, coluna1;
                printf(" Sua vez. Informe a linha (1, 2, 3, 4 ou 5): ");
                scanf(" %d", &linha1);

                if (linha1 < 1 || linha1 > 5) {
                    printf(" Linha inválida. Tente novamente.\n");
                } else if (linhaCheia1(linha1 - 1)) {
                    printf(" Linha está cheia. Tente novamente.\n");
                } else {
                    printf(" Informe a coluna (1, 2, 3, 4 ou 5): ");
                    scanf(" %d", &coluna1);

                    if (coluna1 < 1 || coluna1 > 5) {
                        printf(" Coluna inválida. Tente novamente.\n");
                    } else if (jogadaValida1(linha1 - 1, coluna1 - 1)) {
                        board1[linha1 - 1][coluna1 - 1] = jogador1;
                        vezDoJogador1 = 0;
                        vezDoComputador1 = 1;
                    } else {
                        printf(" Jogada inválida. Tente novamente.\n");
                    }
                }
            }

            if (jogadorGanhou1(jogador1)) {
                imprimirTabuleiro1();
                printf(" Você ganhou!\n");
                cont_vitoria1++;
                break;
            }

            if (tabuleiroCheio1()) {
                imprimirTabuleiro1();
                printf(" Empate!\n");
                cont_empate1++;
                break;
            }

            if (vezDoComputador1) {
                jogadaComputador1(computador1);

                if (jogadorGanhou1(computador1)) {
                    imprimirTabuleiro1();
                    printf(" A máquina ganhou!\n");
                    cont_maquina1++;
                    break;
                }

                if (tabuleiroCheio1()) {
                    imprimirTabuleiro1();
                    printf(" Empate!\n");
                    cont_empate1++;
                    break;
                }

                vezDoComputador1 = 0;
                vezDoJogador1 = 1;
            }
        }

        printf("\n\tEstatisticas:\n");
        printf("\n Vitorias: %d", cont_vitoria1);
        printf("\n Empates: %d", cont_empate1);
        printf("\n Derrotas: %d", cont_maquina1);

        printf(" \n\n Deseja jogar novamente? Digite 1 se sim ou 2 se deseja encerrar! ");
        scanf("%d", &escolha1);

    } while (escolha1 == 1); /* Encerra caso ele escolha um número diferente de 1*/

    if (escolha1 != 1) {
        printf(" \n %s %d X %d Maquina\n", nomeJogador, cont_vitoria1, cont_maquina1);
        printf(" \n Partida encerrada!\n");
    }
    break;

    case 1:

       do {
        inicializarTabuleiro();

        char jogador = 'X';
        char computador = 'O';

        int vezDoJogador = 1;
        int vezDoComputador = 0;

        printf("\n\t ---------------------\n");
        printf("\t | JOGO DA VELHA 3X3 |\n");
        printf("\t ---------------------\n");

        printf("\n -> Você é 'X' e a máquina é 'O'\n");

        int escolhaParImpar;
        int num_sorteio;

        printf("\n -> Vamos fazer um sorteio de ímpar e par para ver quem começa!\n");

        do {
            printf("\n -> Você quer ser par (digite 1) ou ímpar (digite 2): ");
            scanf(" %d", &escolhaParImpar);

            if (escolhaParImpar != 1 && escolhaParImpar != 2) {
                printf("\n Opção inválida, tente novamente!\n");
            }

        } while (escolhaParImpar != 1 && escolhaParImpar != 2);

        srand(time(0));

        do {
            printf("\n Digite um número de 1 a 10: ");
            scanf(" %d", &num_sorteio);

            if (num_sorteio < 1 || num_sorteio > 10) {
                printf("\n Número inválido, tente novamente!\n");
            }

        } while (num_sorteio < 1 || num_sorteio > 10);

        int maquina = rand() % 10 + 1; // Ajuste para garantir que o número seja de 1 a 10
        printf("\n Ok, a máquina escolheu o número: %d\n", maquina);

        int soma = maquina + num_sorteio;
        printf(" A soma dos números é: %d\n", soma);

        if ((soma % 2 == 0 && escolhaParImpar == 1) || (soma % 2 != 0 && escolhaParImpar == 2)) {
            printf("\n Você começa o jogo!\n");
        } else {
            printf("\n A máquina começa o jogo!\n");
            vezDoJogador = 0;
            vezDoComputador = 1;
        }

        while (1) {
            imprimirTabuleiro();

            if (vezDoJogador) {
                int linha, coluna;
                printf(" Sua vez. Informe a linha (1, 2 ou 3): ");
                scanf(" %d", &linha);

                if (linha < 1 || linha > 3) {
                    printf(" Linha inválida. Tente novamente.\n");    // Verifica se o numero da linha e valido
                } else if (linhaCheia(linha - 1)) {
                    printf(" Linha está cheia. Tente novamente.\n");  // Verifica se a linha nao esta cheia
                } else {
                    printf(" Informe a coluna (1, 2 ou 3): ");
                    scanf(" %d", &coluna);

                    if (coluna < 1 || coluna > 3) {
                        printf(" Coluna inválida. Tente novamente.\n"); // Verifica se o numero da coluna e valido
                    } else if (jogadaValida(linha - 1, coluna - 1)) {
                        board[linha - 1][coluna - 1] = jogador;         // Verifica se a posicao e valida
                        vezDoJogador = 0;
                        vezDoComputador = 1;
                    } else {
                        printf(" Jogada inválida. Tente novamente.\n"); // Posicao nao e valida
                    }
                }
            }

            if (jogadorGanhou(jogador)) {
                imprimirTabuleiro();
                printf(" Você ganhou!\n");
                cont_vitoria++;
                break;
            }

            if (tabuleiroCheio()) {
                imprimirTabuleiro();
                printf(" Empate!\n");
                cont_empate++;
                break;
            }

            if (vezDoComputador) {
                jogadaComputador(computador);

                if (jogadorGanhou(computador)) {
                    imprimirTabuleiro();
                    printf(" A máquina ganhou!\n");
                    cont_maquina++;
                    break;
                }

                if (tabuleiroCheio()) {
                    imprimirTabuleiro();
                    printf(" Empate!\n");
                    cont_empate++;
                    break;
                }

                vezDoComputador = 0;
                vezDoJogador = 1;
            }
        }

            printf("\n\tEstatisticas:\n");
            printf("\n Vitorias: %d", cont_vitoria);
            printf("\n Empates: %d", cont_empate);       // As estatisticas sao atualizadas a cada fim de uma partida
            printf("\n Derrotas: %d", cont_maquina);

        printf(" \n\n Deseja jogar novamente? Digite 1 se sim ou 2 se deseja encerrar! ");
        scanf("%d", &escolha);

    } while (escolha == 1); /* Encerra caso ele escolha um numero diferente de 1*/

    if (escolha != 1)
        printf(" \n %s %d X %d Maquina\n", nomeJogador, cont_vitoria, cont_maquina);          // Placar do modo 3x3 final
        printf(" \n Partida encerrada!\n");

    }
    }while (opcao!=3);

    int soma_geral_vitoria = (cont_vitoria1 + cont_vitoria);
    int soma_geral_derrota = (cont_maquina1 + cont_maquina);

    printf("\n     Placar Geral\n");

    printf("\n %s %d X %d Maquina\n", nomeJogador, soma_geral_vitoria, soma_geral_derrota);

    printf("\n Jogo Encerrado!\n");

    return 0;
}
