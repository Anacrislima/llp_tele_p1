#include <stdio.h>

void fazerCafe() {
    printf("Fazendo café...\n");
    printf("1. Ferva água.\n");
    printf("2. Adicione pó de café à cafeteira.\n");
    printf("3. Despeje a água quente sobre o pó.\n");
    printf("4. Espere alguns minutos.\n");
    printf("5. Coe o café e sirva.\n");
    printf("Café pronto!\n");
}

void fritarOvo() {
    printf("Fritando ovo...\n");
    printf("1. Quebre o ovo em uma tigela.\n");
    printf("2. Adicione sal e pimenta ao gosto.\n");
    printf("3. Aqueça uma frigideira em fogo médio.\n");
    printf("4. Adicione manteiga ou óleo à frigideira.\n");
    printf("5. Despeje o ovo na frigideira.\n");
    printf("6. Cozinhe até o ovo estar frito.\n");
    printf("7. Sirva quente.\n");
    printf("Ovo frito pronto!\n");
}

void atravessarRua() {
    printf("Atravessando rua...\n");
    printf("1. Pare e observe os semáforos.\n");
    printf("2. Verifique se há trânsito.\n");
    printf("3. Olhe para a esquerda, direita e novamente para a esquerda.\n");
    printf("4. Atravessse a rua com cuidado.\n");
    printf("5. Chegue ao outro lado com segurança.\n");
    printf("Rua atravessada com segurança!\n");
}

void fazerVitaminaBanana() {
    printf("Fazendo vitamina de banana...\n");
    printf("1. Pegue 1 banana madura.\n");
    printf("2. Adicione 1 xícara de leite.\n");
    printf("3. Adicione 1 colher de mel.\n");
    printf("4. Bata tudo no liquidificador.\n");
    printf("5. Coe a vitamina e sirva.\n");
    printf("Vitamina de banana pronta!\n");
}

int main() {
    int opcao;

    printf("Selecione uma opção:\n");
    printf("1. Fazer café\n");
    printf("2. Fritar um ovo\n");
    printf("3. Atravessar uma rua\n");
    printf("4. Fazer uma vitamina de banana\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            fazerCafe();
            break;
        case 2:
            fritarOvo();
            break;
        case 3:
            atravessarRua();
            break;
        case 4:
            fazerVitaminaBanana();
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}