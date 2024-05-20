/*2. Um posto est� vendendo combust�vel com a seguinte tabela de descontos:
�
- �lcool:
* At� 30 litros, desconto de 3% por litro;
* Acima de 30 e at� 40 litros 5% de desconto;
* Acima de 40 litros, desconto de 7% por litro.

- Gasolina:
* At� 20 litros, desconto de 4% por litro;
* Acima de 20 litros e at� 30, desconto de 6% por litro;
* Acima de 30 litros desconto de 8% por litro.

Fa�a um programa que receba o n�mero de litros vendidos, o tipo de combust�vel (codificado da seguinte
forma:

A � �lcool,
G - gasolina)

Calcule, atrav�s de uma fun��o com retorno, o valor a ser pago pelo cliente sabendo que o pre�o
da gasolina � de R$ 6,98 o litro e do �lcool R$ 5,56.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char op;
    int desconto;
    float litros, calculo, resultado, valor;

    printf(" \n\n A. �lcool ");
    printf(" \n\n G. Gasolina ");

    printf("\n\nOl�! Digite o c�digo referente a o que voc� deseja:\n");
    scanf("%c", &op);


switch (op)

    {

    case 'A':
    printf(" \n Op��o selecionada: A. �lcool ");
    printf("\n Tabela de Descontos: \n");
    printf(" \n - �LCOOL: \n");
    printf("\n * At� 30 litros, desconto de 3 por cento por litro. \n");
    printf("\n * Acima de 30 e at� 40 litros 5 por cento de desconto. \n");
    printf("\n * Acima de 40 litros, desconto de 7 por cento por litro. \n");
    printf(" \n Digite quantos litros voc� deseja: ");
    scanf("%f", &litros);
    valor = litros * 5.56;
    if ((litros > 0) && (litros <= 30)){
        calculo = valor * 0.03;
        resultado = (valor - (valor*0.03));
        desconto = 3;
        }else if ((litros > 30) && (litros <= 40)){
            calculo = valor * 0.05;
            resultado = (valor - (valor*0.05));
            desconto = 5;
            }else if (litros > 40){
                calculo = valor * 0.07;
                resultado = (valor - (valor*0.07));
                desconto = 7;
                }else
                    printf("N�mero de litros inv�lido, digite novamente:");

    printf(" \n Voc� pagaria %.2f, por�m ter� um desconto de %d por cento, o equivalente a: R$ %.2f ", valor, desconto, calculo);
    printf(" \n Sendo assim, voc� pagar�: R$ %.2f ", resultado);
    break;

    case 'G':
    printf(" \n Op��o selecionada: G. Gasolina ");
    printf("\n Tabela de Descontos: \n");
    printf("\n - GASOLINA: \n");
    printf("\n * At� 20 litros, desconto de 4 por cento por litro. \n");
    printf("\n * Acima de 20 litros e at� 30, desconto de 6 por cento por litro. \n");
    printf("\n * Acima de 30 litros desconto de 8 por cento por litro. \n");
    printf(" \n Digite quantos litros voc� deseja: ");
    scanf("%f", &litros);
    valor = litros * 6.98;
    if ((litros > 0) && (litros<= 20)){
        calculo = valor * 0.04;
        resultado = (valor - (valor*0.04));
        desconto = 4;
        }else if ((litros > 20) && (litros <= 30)){
            calculo = valor * 0.06;
            resultado = (valor - (valor*0.06));
            desconto = 6;
            }else if (litros > 30){
                calculo = valor * 0.08;
                resultado = (valor - (valor*0.08));
                desconto = 8;
                }else
                    printf("N�mero de litros inv�lido, digite novamente:");

    printf(" \n\n Voc� pagaria %.2f, por�m, ter� um desconto de %d por cento, o equivalente a: R$ %.2f ",valor, desconto, calculo);
    printf(" \n\n Sendo assim, voc� pagar�: R$ %.2f ", resultado);
    break;

    default:
    printf("Letra inv�lida, digite A para �lcool ou G para gasolina");

    }
}
