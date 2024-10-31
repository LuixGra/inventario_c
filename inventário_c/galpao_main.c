#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITENS 100 // Define o número máximo de itens que podem ser armazenados

// Estrutura para representar um item no galpão
typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Item;

// Funções
void adicionarItem(Item itens[], int *contador);
void listarItens(Item itens[], int contador);
void imprimirItens(Item itens[], int contador); // Nova função para imprimir todos os itens
void removerItem(Item itens[], int *contador);

int main() {
    Item itens[MAX_ITENS];
    int contador = 0; // Contador para acompanhar o número de itens
    int opcao;

    do {
        printf("\n--- Sistema de Galpão Logístico ---\n");
        printf("1. Adicionar Item\n");
        printf("2. Listar Itens\n");
        printf("3. Remover Item\n");
        printf("4. Imprimir Todos os Itens\n"); // Nova opção de menu
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarItem(itens, &contador);
                break;
            case 2:
                listarItens(itens, contador);
                break;
            case 3:
                removerItem(itens, &contador);
                break;
            case 4:
                imprimirItens(itens, contador); // Chama a função de impressão
                break;
            case 5:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

// Função para adicionar um item
void adicionarItem(Item itens[], int *contador) {
    if (*contador < MAX_ITENS) {
        Item novoItem;

        printf("Digite o nome do item: ");
        scanf("%s", novoItem.nome);
        printf("Digite a quantidade: ");
        scanf("%d", &novoItem.quantidade);
        printf("Digite o preço: ");
        scanf("%f", &novoItem.preco);

        itens[*contador] = novoItem;
        (*contador)++;

        printf("Item adicionado com sucesso!\n");
    } else {
        printf("Limite de itens atingido!\n");
    }
}

// Função para listar todos os itens
void listarItens(Item itens[], int contador) {
    if (contador == 0) {
        printf("Nenhum item cadastrado.\n");
    } else {
        printf("\n--- Lista de Itens ---\n");
        for (int i = 0; i < contador; i++) {
            printf("Item %d:\n", i + 1);
            printf("Nome: %s\n", itens[i].nome);
            printf("Quantidade: %d\n", itens[i].quantidade);
            printf("Preço: %.2f\n", itens[i].preco);
            printf("----------------------\n");
        }
    }
}

// Função para imprimir todos os itens em formato de tabela
void imprimirItens(Item itens[], int contador) {
    if (contador == 0) {
        printf("Nenhum item para imprimir.\n");
    } else {
        printf("\n--- Impressão de Todos os Itens ---\n");
        printf("%-20s %-10s %-10s\n", "Nome", "Quantidade", "Preço");
        printf("------------------------------------------\n");

        for (int i = 0; i < contador; i++) {
            printf("%-20s %-10d %-10.2f\n", itens[i].nome, itens[i].quantidade, itens[i].preco);
        }
    }
}

// Função para remover um item pelo índice
void removerItem(Item itens[], int *contador) {
    int indice;

    if (*contador == 0) {
        printf("Nenhum item para remover.\n");
        return;
    }

    printf("Digite o índice do item a ser removido (1 a %d): ", *contador);
    scanf("%d", &indice);

    if (indice < 1 || indice > *contador) {
        printf("Índice inválido.\n");
    } else {
        for (int i = indice - 1; i < *contador - 1; i++) {
            itens[i] = itens[i + 1];
        }
        (*contador)--;
        printf("Item removido com sucesso!\n");
    }
}
