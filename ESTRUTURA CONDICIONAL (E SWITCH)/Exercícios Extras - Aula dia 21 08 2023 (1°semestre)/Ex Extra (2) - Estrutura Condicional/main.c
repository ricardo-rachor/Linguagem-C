/*2. Um posto está vendendo combustível com a seguinte tabela de descontos:
·
- Álcool:
* Até 30 litros, desconto de 3% por litro;
* Acima de 30 e até 40 litros 5% de desconto;
* Acima de 40 litros, desconto de 7% por litro.

- Gasolina:
* Até 20 litros, desconto de 4% por litro;
* Acima de 20 litros e até 30, desconto de 6% por litro;
* Acima de 30 litros desconto de 8% por litro.

Faça um programa que receba o número de litros vendidos, o tipo de combustível (codificado da seguinte
forma:

A – álcool,
G - gasolina)

Calcule, através de uma função com retorno, o valor a ser pago pelo cliente sabendo que o preço
da gasolina é de R$ 6,98 o litro e do álcool R$ 5,56.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char op;
    int desconto;
    float litros, calculo, resultado, valor;

    printf(" \n\n A. Álcool ");
    printf(" \n\n G. Gasolina ");

    printf("\n\nOlá! Digite o código referente a o que você deseja:\n");
    scanf("%c", &op);


switch (op)

    {

    case 'A':
    printf(" \n Opção selecionada: A. Álcool ");
    printf("\n Tabela de Descontos: \n");
    printf(" \n - ÁLCOOL: \n");
    printf("\n * Até 30 litros, desconto de 3 por cento por litro. \n");
    printf("\n * Acima de 30 e até 40 litros 5 por cento de desconto. \n");
    printf("\n * Acima de 40 litros, desconto de 7 por cento por litro. \n");
    printf(" \n Digite quantos litros você deseja: ");
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
                    printf("Número de litros inválido, digite novamente:");

    printf(" \n Você pagaria %.2f, porém terá um desconto de %d por cento, o equivalente a: R$ %.2f ", valor, desconto, calculo);
    printf(" \n Sendo assim, você pagará: R$ %.2f ", resultado);
    break;

    case 'G':
    printf(" \n Opção selecionada: G. Gasolina ");
    printf("\n Tabela de Descontos: \n");
    printf("\n - GASOLINA: \n");
    printf("\n * Até 20 litros, desconto de 4 por cento por litro. \n");
    printf("\n * Acima de 20 litros e até 30, desconto de 6 por cento por litro. \n");
    printf("\n * Acima de 30 litros desconto de 8 por cento por litro. \n");
    printf(" \n Digite quantos litros você deseja: ");
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
                    printf("Número de litros inválido, digite novamente:");

    printf(" \n\n Você pagaria %.2f, porém, terá um desconto de %d por cento, o equivalente a: R$ %.2f ",valor, desconto, calculo);
    printf(" \n\n Sendo assim, você pagará: R$ %.2f ", resultado);
    break;

    default:
    printf("Letra inválida, digite A para Álcool ou G para gasolina");

    }
}
