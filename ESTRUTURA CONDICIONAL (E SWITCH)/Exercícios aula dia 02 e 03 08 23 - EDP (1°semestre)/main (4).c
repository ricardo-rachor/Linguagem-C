/*3. Sabe-se que para iluminar de maneira correta os c�modos de uma casa, para cada m2, deve-se usar
18W de pot�ncia. Fa�a um algoritmo que receba as duas dimens�es de um c�modo (em metros),
calcule e mostre a sua �rea (em m2) e a pot�ncia de ilumina��o que dever� ser utilizada.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   float base, altura, mquadrado, potencia;
    // TODOS AS VARI�VEIS PRECISAM SER COLOCADAS NO FLOAT

    printf("Digite a medida da base do quarto: ");
    scanf("%f", &base);
    printf("Digite a medida da altura do quarto: ");
    scanf("%f", &altura);

    mquadrado = base * altura;
    potencia = mquadrado * 18;


    printf("\nSeu c�modo tem: %.2f metros quadrados ", mquadrado);
    printf("\nSeu c�modo precisa de: %.2f W de pot�ncia ", potencia);

}
