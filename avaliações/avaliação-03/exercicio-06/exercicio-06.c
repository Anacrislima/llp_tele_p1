#include <stdio.h>

int main() {
    // Atividade 1: Array Unidimensional
    int numeros[5];
    int soma = 0;

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
        soma += numeros[i];
    }
    printf("\nSoma: %d\n\n", soma);

    // Atividade 2: Array Multidimensional (Matriz)
    int matriz[3][3];
    int soma_diagonal = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
            if (i == j) {
                soma_diagonal += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("Soma da diagonal principal: %d\n", soma_diagonal);

    return 0;
}