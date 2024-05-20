/*7.

- Dados três valores, A, B e C, verificar, por meio de uma função com retorno, se eles podem ser
lados de um triângulo.

- Caso sejam, outra função deverá calcular e informar sua área e se compõem
um triângulo isósceles, escaleno ou equilátero.

- Fórmula de Heron para a área de um triângulo qualquer:
onde s é o semi-perímetro do triângulo (s= (a+b+c)/2).

- Para que três valores possam ser lados de um triângulo, cada um deles deverá ser inferior a soma dos
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

    printf("\n\tPROGRAMA DOS TRIÂNGULOS\n");

    printf("\n\nDigite 3 números:\n");
    printf("\nVamos descobrir se pode ser lados de um triângulo e, se sim, a área e o tipo do mesmo:\n");
    scanf("\n%f", &numero1);
    scanf("%f", &numero2);
    scanf("%f", &numero3);

    if ((numero1 + numero2 <= numero3) || (numero1 + numero3 <= numero2) || (numero2 + numero3 <= numero1)) {
        printf("\nEsses lados não formam um triângulo válido.\n");
    } else {
        a = calculoArea(numero1, numero2, numero3);
        f = tipoTriangulo(numero1, numero2, numero3);

        printf("\nA área do triângulo é: %.2f\n", a);
        if (f == 1)
            printf("\nO triângulo é Equilátero, pois tem todos os lados iguais.\n");
        else if (f == 2)
            printf("\nO triângulo é Isósceles, pois tem dois lados iguais.\n");
        else if (f == 3)
            printf("\nO triângulo é Escaleno, pois tem todos os lados diferentes.\n");
    }

    return 0;
}

float calculoArea(float num1, float num2, float num3){

float area, s;

s = (num1 + num2 + num3) / 2;
    area = sqrt(s * (s - num1) * (s - num2) * (s - num3)); /*sqrt faz a raíz do que está entre parênteses*/

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
