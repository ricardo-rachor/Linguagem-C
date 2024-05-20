/*3. Crie um programa que preencha uma matriz 2 x 4 com
números inteiros na função principal. Através de funções com
retorno, calcule e mostre:

a) A quantidade de elementos entre 12 e 20 em cada linha;

b) A média dos elementos pares da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 2
#define C 4

void Func_a(int matriz[][C]);
float Func_b(int matriz[][C]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int M[L][C], i, j;
    float R2;


    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    Func_a(M);
    R2 = Func_b(M);
    printf("A m�dia dos elementos pares da matriz �: %.2f", R2);
}

void Func_a(int matriz[][C]){
    int i, j, cont=0;

    for(i=0;i<L;i++){
       for(j=0;j<C;j++){
            printf("%d\t", matriz[i][j]);
            if((matriz[i][j]>12) && (matriz[i][j]<20))
                cont++;
       }
       printf("\nQuantidade de valores entre 12 e 20 na linha %d\n", cont, i);
       printf("\n");
       cont=0;
    }
}

float Func_b(int matriz[][C]){
    int i, j;
    float media, cont=0, soma=0;

    for(i=0;i<L;i++){
       for(j=0;j<C;j++){
            if(matriz[i][j]%2==0){
                soma=soma+matriz[i][j];
                cont++;
            }
       }
    }
    media=soma/cont;
    return media;
}
