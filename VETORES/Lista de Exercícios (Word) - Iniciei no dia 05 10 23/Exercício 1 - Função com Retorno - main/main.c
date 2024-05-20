/* 1 - Fazer um programa que leia dois vetores A e B, de tamanho 8,
e realize a troca dos elementos destes vetores; ou seja,
após a execução do programa o vetor B deverá conter os
valores fornecidos para o vetor A, e vice-versa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 8

// Função para inverter os vetores
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
        printf("Digite um número inteiro para o Vetor A: ");
        scanf("%d", &VA[x]);
        printf("-------------------------------------------------------\n");
    }

    for (int x = 0; x < MAX; x++) {
        printf("Digite um número inteiro para o Vetor B: ");
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

    inverter(VA, VB); // Chamando a função para inverter os vetores

    printf("\n\tAssim ficou o vetor A após a inversão:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VA[i]);
    }

    printf("\n\n\tAssim ficou o vetor B após a inversão:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VB[i]);
    }

    return 0;
}/* 1 - Fazer um programa que leia dois vetores A e B, de tamanho 8,
e realize a troca dos elementos destes vetores; ou seja,
após a execução do programa o vetor B deverá conter os
valores fornecidos para o vetor A, e vice-versa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 8

// Função para inverter os vetores
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
        printf("Digite um número inteiro para o Vetor A: ");
        scanf("%d", &VA[x]);
        printf("-------------------------------------------------------\n");
    }

    for (int x = 0; x < MAX; x++) {
        printf("Digite um número inteiro para o Vetor B: ");
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

    inverter(VA, VB); // Chamando a função para inverter os vetores

    printf("\n\tAssim ficou o vetor A após a inversão:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VA[i]);
    }

    printf("\n\n\tAssim ficou o vetor B após a inversão:\n\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %d | ", VB[i]);
    }

    return 0;
}
