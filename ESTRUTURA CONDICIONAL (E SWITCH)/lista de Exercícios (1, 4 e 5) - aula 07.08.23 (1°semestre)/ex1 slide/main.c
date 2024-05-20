/*4. Faça um algoritmo que receba a idade, a altura e o peso de 25 pessoas, calcule e mostre:
- a quantidade de pessoas com idade superior a 50 anos;
- a média das alturas das pessoas com idade entre 10 e 20 anos;
- a percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, peso, id, somaAltura1020=0 , cont_idade=0, contmedia=0, contperc=0;
    float alt, num, percentagem, media;

    for (x=1;x<=2;x++){
        printf("Digite a idade: ");
        scanf("%d", &id);
        printf("Digite a altura: ");
        scanf("%f", &alt);
        printf("Digite o peso: ");
        scanf("%d", &peso);

    if (id > 50.0)
        cont_idade++;


    if (id>=10.0 && id<=20.0) {
        cont_idade++;
        somaAltura1020 += alt;
    }

    media = somaAltura1020 / cont_idade;

    if (peso<40.0)
        contperc++;
    }
    percentagem = (contperc / 6.0) * 100.0;

    printf("\n Há %.2f pessoas com mais de 50 anos\n", cont_idade);
    printf("\nA média das alturas das pessoas com idade entre 10 e 20 anos é: %.2f CM \n", media);
    printf("\nA percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas é: %.2f por cento. \n", percentagem);
}
