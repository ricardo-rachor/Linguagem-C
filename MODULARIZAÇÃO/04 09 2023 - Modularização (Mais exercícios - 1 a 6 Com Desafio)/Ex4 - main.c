/*4 - Fazer um programa para medir os reflexos do usuário. O programa deve:
a. Mostrar a palavra “Agora!” após um tempo aleatório e um número, também aleatório
b. Medir o tempo até que o usuário digite o número pedido e mostrar esse tempo. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    int numeroAleatorio = rand() % 100 + 1;
    int numeroDigitado;
    clock_t inicio;
    clock_t fim;
    double tempoDecorrido;

    int i;

    printf("Prepare-se para medir seus reflexos!\n");

    usleep(2000000);

    printf("Agora! Digite o número: %d\n", numeroAleatorio);

    usleep(1000000);

    for (i = 0; i < 50; i++) {
        printf("\n");
    }

    inicio = clock();

    scanf("%d", &numeroDigitado);

    fim = clock();

    tempoDecorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo de reação: %.5lf segundos.\n", tempoDecorrido);

    if (numeroDigitado == numeroAleatorio) {
        printf("Parabéns, você acertou o número!\n");
    } else {
        printf("Você errou o número. O número correto era %d.\n", numeroAleatorio);
    }

    return 0;
}
