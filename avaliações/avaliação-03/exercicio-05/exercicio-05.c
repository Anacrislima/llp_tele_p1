#include <stdio.h>

int main() {
    int i = 1;

    printf("Números pares de 1 a 10:\n");
    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n\n");

    int numero, chute;
    numero = 42; // número secreto

    printf("Adivinhe um número entre 1 e 100 (-1 para sair):\n");

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if (chute == -1) {
            printf("Você desistiu!\n");
            break;
        }

        if (chute < numero) {
            printf("O número é maior que %d. Tente novamente!\n", chute);
        } else if (chute > numero) {
            printf("O número é menor que %d. Tente novamente!\n", chute);
        } else {
            printf("Parabéns! Você acertou o número!\n");
            break;
        }
    } while (chute != numero && chute != -1);

    printf("\n");

    int soma = 0;

    printf("Soma dos primeiros 10 números inteiros positivos:\n");
    for (int i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("A soma é: %d\n", soma);

    return 0;
}