/*
4. A partir do pre�o a vista de um determinado produto,
calcular o pre�o total a pagar e o valor da presta��o
mensal, referentes ao pagamento parcelado. Se o
pagamento for parcelado em tr�s vezes dever� ser dado
um acr�scimo de 10% no total a pagar. Se for parcelado
em 5 vezes, o acr�scimo � de 20%. Resolva o exerc�cio
com fun��o sem retorno.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcularPreco(float preco, int parcelas);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float preco;
    int parcelas;

    printf("\n Digite o pre�o do produto: ");
    scanf("%f", &preco);
    printf("\n Em quantas parcelas voc� quer fazer? 3 vezes ou 5 vezes? ");
    scanf("%d", &parcelas);

    calcularPreco(preco, parcelas);

    return 0;
}

void calcularPreco(float preco, int parcelas)
{
    float parcela;

    if (parcelas == 3) {
        preco = preco + (preco * 0.10);
        parcela = preco / 3;
        printf("\n O valor total do produto ficou: %.2f", preco);
        printf("\n O valor das parcelas do produto ficou: %.2f\n", parcela);
    } else if (parcelas == 5) {
        preco = preco + (preco * 0.20);
        parcela = preco / 5;
        printf("\n O valor total do produto ficou: %.2f", preco);
        printf("\n O valor das parcelas do produto ficou: %.2f\n", parcela);
    } else {
        printf("\n N�mero de parcelas inv�lido.\n");
    }
}
