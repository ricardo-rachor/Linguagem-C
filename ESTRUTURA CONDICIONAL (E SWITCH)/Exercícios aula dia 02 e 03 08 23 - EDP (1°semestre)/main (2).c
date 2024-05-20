/* Faça um algoritmo que receba a quantidade de dinheiro em reais e converta esse valor em dólar,
euro e libra esterlina. Sabe-se que a cotação do dólar é de R$ 5,25, do euro é de R$ 6,16 e da libra
esterlina é de R$ 7,26. O algoritmo deve fazer as conversões e mostrá-las. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // ENTRADA DE DADOS -> RECEBER VALOR EM REAIS -> %F (NÚMERO COM VÍRGULA)
    // CONVERSÃO -> REAIS P/ AS 3 MOEDAS
    // CÁLCULO -> DIVIDIR OS REAIS PELO PREÇO DAS MOEDAS

    float reais, dolar, euro, libra
    // TODOS AS VARIÁVEIS PRECISAM SER COLOCADAS NO FLOAT

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    dolar = reais/5.25;
    euro = reais/6.16;
    libra = reais/7.16;

    printf("\nValor em Reais: R$ %2f", reais);
    printf("\nConversão para Dólar: R$ %2f", dolar);
    printf("\nConversão para Euro: R$ %2f", euro);
    printf("\nConversão para Libra: R$ %2f", libra);
}
