/*3. O departamento que controla o índice de poluição do meio ambiente mantém controle sobre 3 grupos de
indústrias que são altamente poluidoras. Faça um programa que, após ler o tipo da empresa e o nível de
poluição do ar, emite uma notificação adequada conforme os índices da tabela abaixo: (utilize uma função sem
retorno)

Grupo Nível aceitável Ajustar produção Paralisar produção

1 <0.35 0.35 - 0.45 Acima de 0.45
2 <0.3 0.30 - 0.4 Acima de 0.4
3 <025 0.25 – 0.35 Acima de 0.35
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
   setlocale(LC_ALL, "Portuguese");

    int op;
    float nivel;

    printf("\n\n Grupos de Empresa: ");
    printf(" \n 1.");
    printf(" \n 2.");
    printf(" \n 3.");

    printf(" \n Digite o código referente ao tipo da sua empresa: ");
    scanf("%d", &op);

    printf(" \n Digite o nível da poluição do ar: ");
    scanf("%f", &nivel);

    calculo(op, nivel);

}

void calculo(int op, float nivel){

switch (op)

{


    case 1:
    printf("\n\n Opção selecionada: 1.\n");
    printf("Pelo índice de poluição, a empresa está com a seguinte chamada:");
    if (nivel < 0.35)
        printf("Nível aceitável");
        else if ((nivel >= 0.35) && (nivel <= 0.45))
            printf("Ajustar produção");
            else if (nivel > 0.45)
                printf("Paralisar produção");

    break;

    case 2:
    printf("\n\nOpção selecionada: 2.\n");
    printf("Pelo índice de poluição, a empresa está com a seguinte chamada:");
    if (nivel < 0.3)
        printf("Nível aceitável");
        else if ((nivel >= 0.30) && (nivel <= 0.4))
            printf("Ajustar produção");
            else if (nivel > 0.4)
                printf("Paralisar produção");
                else if (nivel < 0)
                    printf("Número inválido, tente novamente!");
    break;

    case 3:
    printf("\n\n Opção selecionada: 3.\n");
    printf("Pelo índice de poluição, a empresa está com a seguinte chamada:");
    if (nivel < 0.25)
        printf("Nível aceitável");
        else if ((nivel >= 0.25) && (nivel <= 0.35))
            printf("Ajustar produção");
            else if (nivel > 0.35)
                printf("Paralisar produção");
                else if (nivel < 0)
                    printf("Número inválido, tente novamente!");
    break;

}
}




