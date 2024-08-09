#include <stdio.h>

// Função para exibir os bits de um número inteiro
void exibirBits(unsigned int num) {
    int i;
    unsigned int mascara = 1 << 31; // Máscara para isolar cada bit
    
    printf("%u em binário: ", num);
    
    // Itera sobre cada bit e exibe 0 ou 1
    for (i = 0; i < 32; i++) {
        putchar(num & mascara ? '1' : '0');
        num <<= 1; // Deslocamento para a esquerda
    }
    
    printf("\n");
}

int main() {
    printf("1. O que é Manipulação de Bits?\n");
    printf("A manipulação de bits é a técnica de trabalhar com os bits individuais de uma palavra binária.\n\n");
    
    printf("2. Qual a Importância da Manipulação de Bits?\n");
    printf("A manipulação de bits é importante por permitir uma otimização do código, criar algoritmos eficientes e lidar com dados de forma granular.\n\n");
    
    printf("3. Quais são as Operações Básicas de Manipulação de Bits?\n");
    printf("As operações básicas de manipulação de bits incluem AND bit a bit, OR bit a bit, XOR bit a bit e deslocamento de bits.\n\n");
    
    printf("4. Exemplo em Linguagem C:\n");
    
    unsigned int a = 170; // 10101010 em binário
    unsigned int b = 85;  // 01010101 em binário
    
    // Exibir os bits dos números
    printf("Número a:\n");
    exibirBits(a);
    
    printf("\nNúmero b:\n");
    exibirBits(b);
    
    // Operação AND bit a bit
    unsigned int resultadoAnd = a & b;
    printf("\nResultado AND:\n");
    exibirBits(resultadoAnd);
    
    // Operação OR bit a bit
    unsigned int resultadoOr = a | b;
    printf("\nResultado OR:\n");
    exibirBits(resultadoOr);
    
    // Operação XOR bit a bit
    unsigned int resultadoXor = a ^ b;
    printf("\nResultado XOR:\n");
    exibirBits(resultadoXor);
    
    // Deslocamento de bits para a esquerda
    unsigned int deslocamentoEsquerda = a << 2;
    printf("\nDeslocamento à esquerda:\n");
    exibirBits(deslocamentoEsquerda);
    
    // Deslocamento de bits para a direita
    unsigned int deslocamentoDireita = a >> 2;
    printf("\nDeslocamento à direita:\n");
    exibirBits(deslocamentoDireita);
    
    return 0;
}