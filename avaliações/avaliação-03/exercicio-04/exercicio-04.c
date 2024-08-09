#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Verificar se um número é positivo, negativo ou zero\n");
    printf("2. Verificar se um ano é bissexto\n");
    printf("3. Exibir o dia da semana correspondente a um número\n");
    printf("4. Exibir o maior de dois números inteiros\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            int num;

            printf("Digite um número inteiro: ");
            scanf("%d", &num);

            if (num > 0) {
                printf("O número é positivo.\n");
            } else if (num < 0) {
                printf("O número é negativo.\n");
            } else {
                printf("O número é zero.\n");
            }

            break;
        }
        case 2: {
            int ano;

            printf("Digite um ano: ");
            scanf("%d", &ano);

            if (ano % 4 == 0) {
                if (ano % 100 == 0) {
                    if (ano % 400 == 0) {
                        printf("%d é um ano bissexto.\n", ano);
                    } else {
                        printf("%d não é um ano bissexto.\n", ano);
                    }
                } else {
                    printf("%d é um ano bissexto.\n", ano);
                }
            } else {
                printf("%d não é um ano bissexto.\n", ano);
            }

            break;
        }
        case 3: {
            int dia;

            printf("Digite um número de 1 a 7: ");
            scanf("%d", &dia);

            switch (dia) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda-feira\n");
                    break;
                case 3:
                    printf("Terça-feira\n");
                    break;
                case 4:
                    printf("Quarta-feira\n");
                    break;
                case 5:
                    printf("Quinta-feira\n");
                    break;
                case 6:
                    printf("Sexta-feira\n");
                    break;
                case 7:
                    printf("Sábado\n");
                    break;
                default:
                    printf("Número inválido\n");
                    break;
            }

            break;
        }
        case 4: {
            int a, b;

            printf("Digite dois números inteiros: ");
            scanf("%d %d", &a, &b);

            int maior = (a > b) ? a : b;

            printf("O maior número é: %d\n", maior);

            break;
        }
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}