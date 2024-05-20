/* 1 - Fazer um programa que leia dois vetores A e B, de tamanho 8,
e realize a troca dos elementos destes vetores; ou seja,
ap�s a execu��o do programa o vetor B dever� conter os
valores fornecidos para o vetor A, e vice-versa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 8

// Fun��o para inverter os vetores
void inverter(int VA[MAX], int VB[MAX]) {
    int temp;
    for (int i = 0; i < MAX; i++) {
        temp = VA[i];
        VA[i] = VB[i];
        VB[i] = temp;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int VA[MAX], VB[MAX];

    /* ENTRADA DE DADOS */

    for (int x = 0; x < MAX; x++) {
        printf("Digite um n�mero inteiro para o Vetor A: ");
        scanf("%d", &VA[x]);
        printf("-------------------------------------------------------\n");
    }

    for (int x = 0; x < MAX; x++) {
        printf("Digite um n�mero inteiro para o Vetor B: ");
        scanf("%d", &VB[x]);
        printf("-------------------------------------------------------\n");
    }

    /* MOSTRAR OS VETORES ORIGINAIS */

    printf("\n\tAssim ficou o seu vetor A original:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VA[i]);
    }

    printf("\n\n\tAssim ficou o seu vetor B original:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VB[i]);
    }

    /* INVERTER OS VETORES */

    printf("\n-----------------------------------------------------\n");

    printf("\nInvertendo os vetores...\n\n");

    inverter(VA, VB); // Chamando a fun��o para inverter os vetores

    printf("\n\tAssim ficou o vetor A ap�s a invers�o:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VA[i]);
    }

    printf("\n\n\tAssim ficou o vetor B ap�s a invers�o:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VB[i]);
    }

    return 0;
}/* 1 - Fazer um programa que leia dois vetores A e B, de tamanho 8,
e realize a troca dos elementos destes vetores; ou seja,
ap�s a execu��o do programa o vetor B dever� conter os
valores fornecidos para o vetor A, e vice-versa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 8

// Fun��o para inverter os vetores
void inverter(int VA[MAX], int VB[MAX]) {
    int temp;
    for (int i = 0; i < MAX; i++) {
        temp = VA[i];
        VA[i] = VB[i];
        VB[i] = temp;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int VA[MAX], VB[MAX];

    /* ENTRADA DE DADOS */

    for (int x = 0; x < MAX; x++) {
        printf("Digite um n�mero inteiro para o Vetor A: ");
        scanf("%d", &VA[x]);
        printf("-------------------------------------------------------\n");
    }

    for (int x = 0; x < MAX; x++) {
        printf("Digite um n�mero inteiro para o Vetor B: ");
        scanf("%d", &VB[x]);
        printf("-------------------------------------------------------\n");
    }

    /* MOSTRAR OS VETORES ORIGINAIS */

    printf("\n\tAssim ficou o seu vetor A original:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VA[i]);
    }

    printf("\n\n\tAssim ficou o seu vetor B original:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VB[i]);
    }

    /* INVERTER OS VETORES */

    printf("\n-----------------------------------------------------\n");

    printf("\nInvertendo os vetores...\n\n");

    inverter(VA, VB); // Chamando a fun��o para inverter os vetores

    printf("\n\tAssim ficou o vetor A ap�s a invers�o:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VA[i]);
    }

    printf("\n\n\tAssim ficou o vetor B ap�s a invers�o:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VB[i]);
    }

    return 0;
}
