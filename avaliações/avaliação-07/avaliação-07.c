#include <stdio.h>
#include <string.h>

// Estrutura de produto
typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int quantidadeEstoque;
} Produto;

// Array de produtos
Produto produtos[100];

// Função para cadastrar produto
void cadastrarProduto() {
    printf("Cadastrar Produto\n");
    printf("Codigo: ");
    scanf("%d", &produtos[0].codigo);
    printf("Descricao: ");
    scanf("%s", produtos[0].descricao);
    printf("Valor Unitario: ");
    scanf("%f", &produtos[0].valorUnitario);
    printf("Quantidade Estoque: ");
    scanf("%d", &produtos[0].quantidadeEstoque);
}

// Função para consultar produto para alteração
void consultarProdutoAlteracao() {
    printf("Consultar Produto para Alteração\n");
    printf("Codigo: %d\n", produtos[0].codigo);
    printf("Descricao: %s\n", produtos[0].descricao);
    printf("Valor Unitario: %.2f\n", produtos[0].valorUnitario);
    printf("Quantidade Estoque: %d\n", produtos[0].quantidadeEstoque);
    printf("Alterar dados? (s/n): ");
    char resposta;
    scanf(" %c", &resposta);
    if (resposta == 's') {
        printf("Novo Codigo: ");
        scanf("%d", &produtos[0].codigo);
        printf("Nova Descricao: ");
        scanf("%s", produtos[0].descricao);
        printf("Novo Valor Unitario: ");
        scanf("%f", &produtos[0].valorUnitario);
        printf("Nova Quantidade Estoque: ");
        scanf("%d", &produtos[0].quantidadeEstoque);
    }
}

// Função para listar todos os produtos
void listarProdutos() {
    printf("Listar todos os produtos\n");
    for (int i = 0; i < 100; i++) {
        if (produtos[i].codigo != 0) {
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
            printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
            printf("Valor do Estoque: %.2f\n", produtos[i].valorUnitario * produtos[i].quantidadeEstoque);
        }
    }
}

// Função para excluir produto
void excluirProduto() {
    printf("Excluir Produto\n");
    int codigo;
    printf("Codigo do produto a excluir: ");
    scanf("%d", &codigo);
    for (int i = 0; i < 100; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado\n");
            printf("Confirmar exclusao? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == 's') {
                produtos[i].codigo = 0;
                printf("Produto excluido\n");
            } else {
                printf("Exclusao cancelada\n");
            }
            return;
        }
    }
    printf("Produto nao encontrado\n");
}

int main() {
    int opcao;
    do {
        printf("Menu\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar todos os produtos\n");
        printf("4. Excluir Produto\n");
        printf("5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                consultarProdutoAlteracao();
                break;
            case 3:
                listarProdutos();
                break;
            case 4:
                excluirProduto();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 5);
    return 0;
}