/*3. Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar
18W de potência. Faça um algoritmo que receba as duas dimensões de um cômodo (em metros),
calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   float base, altura, mquadrado, potencia;
    // TODOS AS VARIÁVEIS PRECISAM SER COLOCADAS NO FLOAT

    printf("Digite a medida da base do quarto: ");
    scanf("%f", &base);
    printf("Digite a medida da altura do quarto: ");
    scanf("%f", &altura);

    mquadrado = base * altura;
    potencia = mquadrado * 18;


    printf("\nSeu cômodo tem: %.2f metros quadrados ", mquadrado);
    printf("\nSeu cômodo precisa de: %.2f W de potência ", potencia);

}
