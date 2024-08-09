#include <stdio.h>

int main() {
    int opcao;

    printf("Selecione uma opção:\n");
    printf("1. Calculadora Simples\n");
    printf("2. Conversão de Temperatura\n");
    printf("3. Verificação de Número Par\n");
    printf("4. Cálculo de Média Ponderada\n");
    printf("5. Troca de Valores\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            calculadoraSimples();
            break;
        case 2:
            conversaoTemperatura();
            break;
        case 3:
            verificacaoNumeroPar();
            break;
        case 4:
            calculoMediaPonderada();
            break;
        case 5:
            trocaValores();
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

void calculadoraSimples() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    printf("Divisão: %f\n", (float)num1 / num2);
}

void conversaoTemperatura() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
}

void verificacaoNumeroPar() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }
}

void calculoMediaPonderada() {
    float nota1, nota2, nota3, media;
    printf("Digite as três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    printf("Média ponderada: %.2f\n", media);
}

void trocaValores() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("Valores trocados: %d %d\n", num1, num2);
}