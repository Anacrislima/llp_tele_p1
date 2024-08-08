#include <stdio.h>

// Função para exibir os bits de um número
void exibirBits(unsigned int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int a = 29;  // Exemplo de número: 29 em binário é 0001 1101
    unsigned int b = 15;  // Exemplo de número: 15 em binário é 0000 1111

    printf("Número a: %u\n", a);
    printf("Bits de a: ");
    exibirBits(a);

    printf("Número b: %u\n", b);
    printf("Bits de b: ");
    exibirBits(b);

    // Operações bit a bit
    printf("a & b: ");
    exibirBits(a & b); // AND

    printf("a | b: ");
    exibirBits(a | b); // OR

    printf("a ^ b: ");
    exibirBits(a ^ b); // XOR

    printf("~a: ");
    exibirBits(~a);    // NOT (inversão de bits)

    printf("a << 2: ");
    exibirBits(a << 2); // Deslocamento à esquerda por 2 bits

    printf("a >> 2: ");
    exibirBits(a >> 2); // Deslocamento à direita por 2 bits

    return 0;
}