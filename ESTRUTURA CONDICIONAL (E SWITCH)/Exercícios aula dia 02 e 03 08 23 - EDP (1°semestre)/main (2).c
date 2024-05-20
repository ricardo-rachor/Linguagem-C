/* Fa�a um algoritmo que receba a quantidade de dinheiro em reais e converta esse valor em d�lar,
euro e libra esterlina. Sabe-se que a cota��o do d�lar � de R$ 5,25, do euro � de R$ 6,16 e da libra
esterlina � de R$ 7,26. O algoritmo deve fazer as convers�es e mostr�-las. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // ENTRADA DE DADOS -> RECEBER VALOR EM REAIS -> %F (N�MERO COM V�RGULA)
    // CONVERS�O -> REAIS P/ AS 3 MOEDAS
    // C�LCULO -> DIVIDIR OS REAIS PELO PRE�O DAS MOEDAS

    float reais, dolar, euro, libra
    // TODOS AS VARI�VEIS PRECISAM SER COLOCADAS NO FLOAT

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    dolar = reais/5.25;
    euro = reais/6.16;
    libra = reais/7.16;

    printf("\nValor em Reais: R$ %2f", reais);
    printf("\nConvers�o para D�lar: R$ %2f", dolar);
    printf("\nConvers�o para Euro: R$ %2f", euro);
    printf("\nConvers�o para Libra: R$ %2f", libra);
}
