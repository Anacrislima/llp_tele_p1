#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
    FILE *arquivo;
    char linha[MAX_LINE];
    int condicao_final = 0;

    // Criar arquivo
    arquivo = fopen("meu_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    // Alimentar arquivo com dados digitados no teclado
    printf("Digite linhas de texto (digite 'sair' para finalizar):\n");
    while (!condicao_final) {
        printf("> ");
        fgets(linha, MAX_LINE, stdin);
        linha[strcspn(linha, "\n")] = 0; // remover newline
        if (strcmp(linha, "sair") == 0) {
            condicao_final = 1;
        } else {
            fprintf(arquivo, "%s\n", linha);
        }
    }

    // Fechar arquivo
    fclose(arquivo);

    // Abrir arquivo no modo de leitura
    arquivo = fopen("meu_arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    // Ler cada linha do arquivo e mostrar no vídeo
    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, MAX_LINE, arquivo) != NULL) {
        printf("%s", linha);
    }

    // Fechar arquivo
    fclose(arquivo);

    return 0;
}