/*1. O card�pio de uma lanchonete � o seguinte:
Especifica��o Pre�o unit�rio
100 Cachorro quente R$3,50
101 Bauru simples R$4,00
102 Bauru c/ovo R$4,50
103 Hamburger R$4,00
104 Cheeseburger R$3,00
Escrever um algoritmo que leia o c�digo do item pedido, a quantidade e calcule o valor a ser pago
por aquele lanche. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;
    float resultado, x;

    printf(" \n Escolha uma das op��es abaixo: ");

    printf(" \n 100. Cachorro quente ");
    printf(" \n 101. Bauru simples ");
    printf(" \n 102. Bauru com ovo ");
    printf(" \n 103. Hamburguer ");
    printf(" \n 104. Cheesburger ");

    printf(" \n Digite o n�mero da op��o desejada: ");
    scanf("%d", &op);

    printf("Digite quantos voc� quer:");
    scanf("%f", &x);

switch (op)

    {

    case 100:
    printf(" \n Op��o selecionada: 1. Cachorro quente ");
    resultado = x * 3.50;
    printf(" \n O valor do seu pedido ficar� em: R$ %.2f ", resultado);
    break;

    case 101:
    printf(" \n Op��o selecionada: 2. Bauru simples ");
    resultado = x * 4.0;
    printf(" \n O valor do seu pedido ficar� em: R$ %.2f ", resultado);
    break;

    case 102:
    printf(" \n Op��o selecionada: 3. Bauru com ovo ");
    resultado = x * 4.50;
    printf(" \n O valor do seu pedido ficar� em: R$ %.2f ", resultado);
    break;

    case 103:
    printf(" \n Op��o selecionada: 4. Hamburguer ");
    resultado = x * 4.0;
    printf(" \n O valor do seu pedido ficar� em: R$ %.2f ", resultado);
    break;

    case 104:
    printf(" \n Op��o selecionada: 4. Cheesburger ");
    resultado = x * 3.0;
    printf(" \n O valor do seu pedido ficar� em: R$ %.2f ", resultado);
    break;
}
}
