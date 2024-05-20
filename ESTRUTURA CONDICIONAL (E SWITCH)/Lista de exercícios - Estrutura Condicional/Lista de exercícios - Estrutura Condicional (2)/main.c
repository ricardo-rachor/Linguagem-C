#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "Portuguese_Brazil");

     float n1, n2, n3, n4, media;

     printf("\n\nDigite a nota1:\n");
     scanf(" %f", &n1);
     printf("\n\nDigite a nota2:\n");
     scanf(" %f", &n2);
     printf("\n\nDigite a nota3:\n");
     scanf(" %f", &n3);
     printf("\n\nDigite a nota4:\n");
     scanf(" %f", &n4);

     media = (n1+n2+n3+n4) / 4;

     printf("A média das notas é: %.2f", media);

}
