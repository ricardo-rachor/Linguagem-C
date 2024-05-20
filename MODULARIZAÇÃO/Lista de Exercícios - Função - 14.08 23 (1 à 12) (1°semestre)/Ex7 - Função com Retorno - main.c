/*7.

- Dados tr�s valores, A, B e C, verificar, por meio de uma fun��o com retorno, se eles podem ser
lados de um tri�ngulo.

- Caso sejam, outra fun��o dever� calcular e informar sua �rea e se comp�em
um tri�ngulo is�sceles, escaleno ou equil�tero.

- F�rmula de Heron para a �rea de um tri�ngulo qualquer:
onde s � o semi-per�metro do tri�ngulo (s= (a+b+c)/2).

- Para que tr�s valores possam ser lados de um tri�ngulo, cada um deles dever� ser inferior a soma dos
outros dois.                                                                                                                                                                                             */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int tipoTriangulo(float num1, float num2, float num3);
float calculoArea(float num1, float num2, float num3);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, a;
    int f;

    printf("\n\tPROGRAMA DOS TRI�NGULOS\n");

    printf("\n\nDigite 3 n�meros:\n");
    printf("\nVamos descobrir se pode ser lados de um tri�ngulo e, se sim, a �rea e o tipo do mesmo:\n");
    scanf("\n%f", &numero1);
    scanf("%f", &numero2);
    scanf("%f", &numero3);

    if ((numero1 + numero2 <= numero3) || (numero1 + numero3 <= numero2) || (numero2 + numero3 <= numero1)) {
        printf("\nEsses lados n�o formam um tri�ngulo v�lido.\n");
    } else {
        a = calculoArea(numero1, numero2, numero3);
        f = tipoTriangulo(numero1, numero2, numero3);

        printf("\nA �rea do tri�ngulo �: %.2f\n", a);
        if (f == 1)
            printf("\nO tri�ngulo � Equil�tero, pois tem todos os lados iguais.\n");
        else if (f == 2)
            printf("\nO tri�ngulo � Is�sceles, pois tem dois lados iguais.\n");
        else if (f == 3)
            printf("\nO tri�ngulo � Escaleno, pois tem todos os lados diferentes.\n");
    }

    return 0;
}

float calculoArea(float num1, float num2, float num3){

float area, s;

s = (num1 + num2 + num3) / 2;
    area = sqrt(s * (s - num1) * (s - num2) * (s - num3)); /*sqrt faz a ra�z do que est� entre par�nteses*/

    return area;
}

int tipoTriangulo(float num1, float num2, float num3){

int forma;

if (num1 == num2 && num2 == num3) {
    forma = 1;
}   else if (num1 == num2 || num1 == num3 || num2 == num3) {
        forma = 2;
}       else {
            forma = 3;
}

return forma;
}
