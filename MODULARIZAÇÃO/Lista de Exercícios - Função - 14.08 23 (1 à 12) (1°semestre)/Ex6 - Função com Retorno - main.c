/*6. Faça um programa que leia um código (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e fornece:
– A adição dos números para código =1
– A subtração dos números para código =2
– A multiplicação dos números para código =3
– A divisão dos números para código = 4.
Você deve criar uma função para cada operação e essa função deve retornar o resultado para a função
principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo (int num1, int num2, int cod);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, codigo;
    float c;

    printf("\n\tPROGRAMA DA MATEMÁTICA BÁSICA ");

    printf("\n\nDigite 2 números:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);


    printf("\n\n 1 - Adição");
    printf("\n 2 - Subtração");
    printf("\n 3 - Multiplicação");
    printf("\n 4 - Divisão\n");

    printf("\n Digite o código: ");
    scanf("%d", &codigo);

    c = calculo (numero1, numero2, codigo);

    if ((codigo>=1) && (codigo<=4))
        printf("\nO resultado é: %.2f", c   );
        else
            printf("\nCódigo inválido, tente novamente!");

    return 0;

}

float calculo (int num1, int num2, int cod){

    float cal;

    if (cod == 1)
        return cal = (num1 + num2);
        else if (cod == 2)
            return cal = (num1 - num2);
            else if (cod == 3)
                return cal = (num1 * num2);
                else if (cod == 4)
                    return cal = (num1 / num2);
    else
        return 0;


}
