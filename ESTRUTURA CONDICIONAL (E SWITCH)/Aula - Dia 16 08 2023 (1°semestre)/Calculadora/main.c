#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, resultado, op;

    printf("Digite o valor do primeiro operando:");
    scanf("%d", &x);
    printf("Digite o valor do segundo operando:");
    scanf("%d", &y);

    printf(" \n Escolha uma das op��es abaixo: ");

    printf(" \n 1. Soma ");
    printf(" \n 2. Subtra��o ");
    printf(" \n 3. Multiplica��o ");
    printf(" \n 4. Divis�o ");

    printf(" \n Digite o n�mero da op��o desejada: ");
    scanf("%d", &op);

switch (op)

    {

    case 1:
    printf(" \n Op��o selecionada: 1. Soma ");
    resultado = x + y;
    printf(" \n A soma dos dois n�meros �: %d ", resultado);
    break;

    case 2:
    printf(" \n Op��o selecionada: 2. Subtra��o ");
    resultado = x - y;
    printf(" \n A subtra��o dos dois n�meros �: %d ", resultado);
    break;

    case 3:
    printf(" \n Op��o selecionada: 3. Multiplica��o ");
    resultado = x * y;
    printf(" \n A multiplica��o dos dois n�meros �: %d ", resultado);
    break;

    case 4:
    printf(" \n Op��o selecionada: 4. Divis�o ");
    resultado = x / y;
    printf(" \n A divis�o dos dois n�meros �: %d ", resultado);
    break;

}
}
