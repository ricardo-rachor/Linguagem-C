/*4 - Fazer um programa para medir os reflexos do usu�rio. O programa deve:
a. Mostrar a palavra �Agora!� ap�s um tempo aleat�rio e um n�mero, tamb�m aleat�rio
b. Medir o tempo at� que o usu�rio digite o n�mero pedido e mostrar esse tempo. */

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

    printf("Agora! Digite o n�mero: %d\n", numeroAleatorio);

    usleep(1000000);

    for (i = 0; i < 50; i++) {
        printf("\n");
    }

    inicio = clock();

    scanf("%d", &numeroDigitado);

    fim = clock();

    tempoDecorrido = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo de rea��o: %.5lf segundos.\n", tempoDecorrido);

    if (numeroDigitado == numeroAleatorio) {
        printf("Parab�ns, voc� acertou o n�mero!\n");
    } else {
        printf("Voc� errou o n�mero. O n�mero correto era %d.\n", numeroAleatorio);
    }

    return 0;
}
