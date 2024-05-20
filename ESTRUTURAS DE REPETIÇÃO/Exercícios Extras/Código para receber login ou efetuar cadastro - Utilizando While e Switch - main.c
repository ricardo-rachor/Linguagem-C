/*4. Fa�a um programa que receba uma senha formada de quatro n�meros inteiros, verifique se a senha est�
correta e, caso n�o esteja, solicite novamente a senha. Se a senha entrada for a correta, dever� ser
apresentada a mensagem �Senha Correta�, caso contr�rio, �Senha Incorreta�. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;

    printf("\tBEM VINDO AO SITE DA UNISC!\n");

    printf("\n\n 1- Fazer Login\n");
    printf(" 2- Sou novo, fazer cadastro\n");

    printf("\n Escolha a op��o do seu caso!\n");
    scanf(" %d", &op);

    switch (op) {
        case 1: {
            char senha[50];
            char login[50];
            int tentativasSenha = 0;

            do {
                printf("\n\n Login: ");
                scanf("%s", login);

                if (strcmp(login, "milena") == 0) {
                    while (tentativasSenha < 3) {
                        printf("\n\n Senha: ");
                        scanf("%s", senha);

                        if (strcmp(senha, "1245") == 0) {
                            printf("\n Login bem-sucedido!\n");
                            break;
                        } else {
                            printf("\n Senha errada, tente novamente!");
                            tentativasSenha++;
                        }
                    }

                    if (tentativasSenha >= 3) {
                        printf("\n\n Muitos erros na senha, conta bloqueada por 24 horas.\n");
                        break;
                    }
                } else {
                    printf("\n Login errado, tente novamente!");
                }
            } while (strcmp(login, "milena") != 0);
            break;
        }

        case 2: {
            printf("\n Ok, vamos fazer um cadastro para voc�:\n");

            char nome[50], sobrenome[50], email[50], usuario[50], senha2[50];
            int opcao;

            do {
                printf("\n Digite seu primeiro nome: ");
                scanf("%s", nome);
                printf("\n\n Nome: %s\n", nome);
                printf("\n 1 - Confirma 2 - Preencher novamente.\n");
                scanf("%d", &opcao);
            } while (opcao != 1);

            do {
                printf("\n Digite seu �ltimo sobrenome: ");
                scanf("%s", sobrenome);
                printf("\n\n Sobrenome: %s\n", sobrenome);
                printf("\n 1 - Confirma 2 - Preencher novamente.\n");
                scanf("%d", &opcao);
            } while (opcao != 1);

            do {
                printf("\n Digite seu email: ");
                scanf("%s", email);
                printf("\n\n Email: %s\n", email);
                printf("\n 1 - Confirma 2 - Preencher novamente.\n");
                scanf("%d", &opcao);
            } while (opcao != 1);

            do {
                printf("\n Escolha um nome de usu�rio para fazer login: ");
                scanf("%s", usuario);
                printf("\n\n Usu�rio: %s\n", usuario);
                printf("\n 1 - Confirma 2 - Preencher novamente.\n");
                scanf("%d", &opcao);
            } while (opcao != 1);

            do {
                printf("\n Escolha uma senha com n�meros e letras: ");
                scanf("%s", senha2);
                printf("\n\n Senha: %s\n", senha2);
                printf("\n 1 - Confirma 2 - Preencher novamente.\n");
                scanf("%d", &opcao);
            } while (opcao != 1);

            printf("\n\n\t Coadastro efetuado:");
            printf("\n\n Nome: %s\n", nome);
            printf(" Sobrenome: %s\n", sobrenome);
            printf(" Email: %s\n", email);
            printf(" Usu�rio: %s\n", usuario);
            printf(" Senha: %s\n", senha2);

            printf("\nDigite 1 para confirmar ou 2 para preencher novamente.\n");
            scanf("%d", &opcao);

        }

        default:
            printf("\nOp��o inv�lida!\n");
            break;
    }

    return 0;
}
