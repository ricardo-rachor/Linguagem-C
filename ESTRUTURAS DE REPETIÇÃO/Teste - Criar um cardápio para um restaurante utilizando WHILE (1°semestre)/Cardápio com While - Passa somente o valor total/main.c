#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char op;
    int x, op1;
    float valor, calculo, soma = 0; /* Initialize total to 0 */

    printf("\n Olá! Bem vindo ao nosso cardápio digital, temos diversas opções para você, divididas em Entradas, Pratos à la carte, sobremesas e diversas opções de bebidas!\n ");
    printf("\n\nDigite o código referente ao que você deseja (E, P, S OU B) ou 0 para encerrar:\n");

    while (1) /* Infinite loop until the user decides to exit */
    {
        printf(" \n\n E. Entradas ");
        printf(" \n P. Pratos Principais ");
        printf(" \n S. Sobremesas ");
        printf(" \n B. Bebidas ");
        printf(" \n 0. Encerrar ");
        printf("\n\nDigite o código:\n");
        scanf(" %c", &op);

        if (op == '0')
            break; /* Exit the loop if '0' is entered */

        switch (op)
        {
        case 'E':
            printf(" \n Opção selecionada: Entradas ");
            printf(" \n\n Claro, estas são as nossas opções de entradas (>‿◠)✌ ");
            printf(" \n\n 1 - BATATA FRITA ESPECIAL - R$37.00 ");
            printf(" \n Batatas fritas cobertas com queijo muçarela derretido e bacon crocante. ");
            printf(" \n\n 2 - CALDO DE CAMARÃO - R$62.00 ");
            printf(" \n Caldo com camarões, alho, cebola, coentro, pimentões, pimenta de cheiro mandioquinha e leite de coco. Acompanha 4 pãezinhos. ");
            printf(" \n\n 3 - CALDO DE PEIXE - R$47.00 ");
            printf(" \n Caldo à base de peixe, pimentões, pimenta de cheiro, cebola, alho, leite de coco e coentro. Acompanha cesta de torradas temperadas. ");
            printf(" \n\n 4 - CAMARÃO À MILANESA - R$90.00 ");
            printf(" \n Camarão à milanesa com gergelim. Acompanha molho tártaro. ");

            printf("\n\nDigite o código referente a o que você deseja:\n");
            scanf("%d", &op1);

            printf("\n\nDigite quantos você quer:");
            scanf("%d", &x);


        switch (op1)

            {
                case 1:
                    calculo = x*37.00;
                    printf("OK");
                break;

                case 2:
                    calculo = x*62.00;
                    printf("OK");
                break;

                case 3:
                    calculo = x*47.00;
                    printf("OK");
                break;

                case 4:
                    calculo = x*90.00;
                    printf("OK");
                break;

                default:
                    printf("Número inválido, tente novamente!");
        }
                break;
            case 'P':
                printf(" \n Opção selecionada: Pratos Principais ");
                printf(" \n\n Claro, estas são as nossas opções de pratos principais (>‿◠)✌ ");
                printf(" \n\n 1 - CARBONARA - R$95.00 ");
                printf(" \n Carbonara de camarão com fettuccine e molho feito com gema de ovo, queijo parmesão, creme de leite fresco, pimenta do reino, bacon e finalizado com farofa crocante de panko. ");
                printf(" \n\n 2 - FILÉ ALFREDO - R$121.99 ");
                printf(" \n 200g de medalhões de Filé Mignon envolvidos com bacon com molho funghi acompanhado de fettuccine com molho Alfredo preparado com creme de leite fresco. ");
                printf(" \n\n 3 - ARROZ DE POLVO CALDOSO - R$195.00 ");
                printf(" \n Delicioso arroz de polvo caldoso com batatas noisettes, cebola, alho, pimentão, molho de tomate fresco e molho reduzido do próprio polvo. ");
                printf(" \n\n 4 - CARNE DE SOL - R$ 123,99 ");
                printf(" \n Carne de sol de filé mignon sobre uma cama de macaxeira cozida com manteiga da terra coberta com queijo coalho grelhado com melaço de cana.  ");

                printf("\n\nDigite o código referente a o que você deseja:\n");
                scanf("%d", &op1);

                printf("\n\nDigite quantos você quer:");
                scanf("%d", &x);


        switch (op1)

        {
                case 1:
                    calculo = x*95.00;
                    printf("OK");
                break;

                case 2:
                    calculo = x*121.99;
                    printf("OK");
                break;

                case 3:
                    calculo = x*195.00;
                    printf("OK");
                break;

                case 4:
                    calculo = x*123.99;
                    printf("OK");
                break;

                default:
                    printf("Número inválido, tente novamente!");
    }
            break;
        case 'S':
            printf(" \n Opção selecionada: Sobremesas ");
            printf(" \n\n Claro,estas são as nossas opções de sobremesas (>‿◠)✌ ");
            printf(" \n\n 1 - BOLO QUENTE - R$25.99 ");
            printf(" \n Bolo Quente de Chocolate com Brigadeiro mole e Creme Inglês. ");
            printf(" \n\n 2 - BRIGADEIRO DE COLHER - R$29.00 ");
            printf(" \n Delicioso e cremoso brigadeiro servido na taça. Coberto com bolinhas crocantes. ");
            printf(" \n\n 3 - BROWNIE - R$55.99 ");
            printf(" \n Bolo de chocolate americano com nozes. Coberto com calda de chocolate quente e sorvete de creme. ");
            printf(" \n\n 4 - CHURROS - R$ 38,00 ");
            printf(" \n Com Doce de Leite Argentino e Raspas de Limão Siciliano  ");

            printf("\n\nDigite o código referente a o que você deseja:\n");
            scanf("%d", &op1);

            printf("\n\nDigite quantos você quer:");
            scanf("%d", &x);


        switch (op1)

            {
                case 1:
                    calculo = x*25.99;
                    printf("OK");
                break;

                case 2:
                    calculo = x*29.00;
                    printf("OK");
                break;

                case 3:
                    calculo = x*55.99;
                    printf("OK");
                break;

                case 4:
                    calculo = x*38.00;
                    printf("OK");
                break;

                default:
                    printf("OK");
    }
            break;
        case 'B':
            printf(" \n Opção selecionada: Bebidas ");
            printf(" \n\n Claro,estas são as nossas opções de bebidas (>‿◠)✌ ");
            printf(" \n\n 1 - ÁGUA MINERAL COM GÁS - R$7.00 ");
            printf(" \n\n 2 - ÁGUA MINERAL SEM GÁS - R$7.00 ");
            printf(" \n\n 3 - ÁGUA TÔNICA - R$10.00 ");
            printf(" \n\n 4 - CAPUCCINO - R$12.00 ");
            printf(" \n\n 5 - CHÁ GELADO (LIMÃO) - R$ 11.00 ");
            printf(" \n\n 6 - COCA COLA (350ML) - R$ 10.00 ");
            printf(" \n\n 7 - GUARANÁ (350ML) - R$ 10.00 ");
            printf(" \n\n 8 - RED BULL (250ML) - R$ 17.00 ");
            printf(" \n\n 9 - CAIPIRA DE LIMÃO - R$ 25.00 ");
            printf(" \n\n 10 - CAIPIRA DE MORANGOO - R$ 27.00 ");
            printf(" \n\n 11 - BRAHMA GARRAFA (355ML) - R$ 14.00 ");
            printf(" \n\n 12 - CHOPP BRAHMA (500ML) - R$ 21.00 ");
            printf(" \n\n 13 - GIN TÔNICA (500ML) - R$ 36.00 ");

            printf("\n\nDigite o código referente ao que você deseja:\n");
            scanf("%d", &op1);

            printf("\n\nDigite quantos você quer:");
            scanf("%d", &x);

            switch (op1)
            {
                    case 1:
                        calculo = x*7.00;
                        printf("OK");
                    break;

                    case 2:
                        calculo = x*7.00;
                        printf("OK");
                    break;

                    case 3:
                        calculo = x*10.00;
                        printf("OK");
                    break;

                    case 4:
                        calculo = x*12.00;
                        printf("OK");
                    break;

                    case 5:
                        calculo = x*11.00;
                        printf("OK");
                    break;

                    case 6:
                        calculo = x*10.00;
                        printf("OK");
                    break;

                    case 7:
                        calculo = x*10.00;
                        printf("OK");
                    break;

                    case 8:
                        calculo = x*17.00;
                        printf("OK");
                    break;

                    case 9:
                        calculo = x*25.00;
                        printf("OK");
                    break;

                    case 10:
                        calculo = x*27.00;
                        printf("OK");
                    break;

                    case 11:
                        calculo = x*14.00;
                        printf("OK");
                    break;

                    case 12:
                        calculo = x*21.00;
                        printf("OK");
                    break;

                    case 13:
                        calculo = x*36.00;
                        printf("OK");
                    break;

                    default:
                        printf("Número inválido, tente novamente!");
        }
            break;
        default:
            printf("Opção inválida, tente novamente!\n");
            continue; /* Skip the rest of the loop and ask for input again */
        }



        soma = calculo+soma;
    }

    printf("\nPedido Encerrado:\n");
    printf("\nResumo do Pedido:\n");

    printf("\n\nO total da sua conta ficou em: R$ %.2f\n", soma);

    printf("\n\nObrigado pela preferência!!\n");

    return 0;
}
