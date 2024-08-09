#include <stdio.h>

int main(void) {
    int x;

    // Lê a pontuação do jogador
    printf("Digite a pontuação obtida pelo jogador: ");
    scanf("%d", &x);

    // Avalia a pontuação e imprime a mensagem correspondente
    if (x >= 0 && x < 10) {
        printf("Insuficiente\n");
    } else if (x >= 10 && x < 40) {
        printf("Regular\n");
    } else if (x >= 40 && x < 70) {
        printf("Bom\n");
    } else if (x >= 70 && x < 90) {
        printf("Ótimo\n");
    } else if (x >= 90 && x <= 100) {
        printf("Excelente\n");
    } else {
        printf("Pontuação inválida\n");
    }

    return 0;
}
