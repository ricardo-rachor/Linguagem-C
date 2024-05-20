/*3. O departamento que controla o �ndice de polui��o do meio ambiente mant�m controle sobre 3 grupos de
ind�strias que s�o altamente poluidoras. Fa�a um programa que, ap�s ler o tipo da empresa e o n�vel de
polui��o do ar, emite uma notifica��o adequada conforme os �ndices da tabela abaixo: (utilize uma fun��o sem
retorno)

Grupo N�vel aceit�vel Ajustar produ��o Paralisar produ��o

1 <0.35 0.35 - 0.45 Acima de 0.45
2 <0.3 0.30 - 0.4 Acima de 0.4
3 <025 0.25 � 0.35 Acima de 0.35
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

    printf(" \n Digite o c�digo referente ao tipo da sua empresa: ");
    scanf("%d", &op);

    printf(" \n Digite o n�vel da polui��o do ar: ");
    scanf("%f", &nivel);

    calculo(op, nivel);

}

void calculo(int op, float nivel){

switch (op)

{


    case 1:
    printf("\n\n Op��o selecionada: 1.\n");
    printf("Pelo �ndice de polui��o, a empresa est� com a seguinte chamada:");
    if (nivel < 0.35)
        printf("N�vel aceit�vel");
        else if ((nivel >= 0.35) && (nivel <= 0.45))
            printf("Ajustar produ��o");
            else if (nivel > 0.45)
                printf("Paralisar produ��o");

    break;

    case 2:
    printf("\n\nOp��o selecionada: 2.\n");
    printf("Pelo �ndice de polui��o, a empresa est� com a seguinte chamada:");
    if (nivel < 0.3)
        printf("N�vel aceit�vel");
        else if ((nivel >= 0.30) && (nivel <= 0.4))
            printf("Ajustar produ��o");
            else if (nivel > 0.4)
                printf("Paralisar produ��o");
                else if (nivel < 0)
                    printf("N�mero inv�lido, tente novamente!");
    break;

    case 3:
    printf("\n\n Op��o selecionada: 3.\n");
    printf("Pelo �ndice de polui��o, a empresa est� com a seguinte chamada:");
    if (nivel < 0.25)
        printf("N�vel aceit�vel");
        else if ((nivel >= 0.25) && (nivel <= 0.35))
            printf("Ajustar produ��o");
            else if (nivel > 0.35)
                printf("Paralisar produ��o");
                else if (nivel < 0)
                    printf("N�mero inv�lido, tente novamente!");
    break;

}
}




