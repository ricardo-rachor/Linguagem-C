/*6. Fa�a um programa que leia um c�digo (1, 2, 3 ou 4) e dois valores do tipo inteiro, calcula e fornece:
� A adi��o dos n�meros para c�digo =1
� A subtra��o dos n�meros para c�digo =2
� A multiplica��o dos n�meros para c�digo =3
� A divis�o dos n�meros para c�digo = 4.
Voc� deve criar uma fun��o para cada opera��o e essa fun��o deve retornar o resultado para a fun��o
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

    printf("\n\tPROGRAMA DA MATEM�TICA B�SICA ");

    printf("\n\nDigite 2 n�meros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);


    printf("\n\n 1 - Adi��o");
    printf("\n 2 - Subtra��o");
    printf("\n 3 - Multiplica��o");
    printf("\n 4 - Divis�o\n");

    printf("\n Digite o c�digo: ");
    scanf("%d", &codigo);

    c = calculo (numero1, numero2, codigo);

    if ((codigo>=1) && (codigo<=4))
        printf("\nO resultado �: %.2f", c   );
        else
            printf("\nC�digo inv�lido, tente novamente!");

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
