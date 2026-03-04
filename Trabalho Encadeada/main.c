#include <stdio.h>
#include <stdlib.h>
#include "trabalho_encadeado.h"

int main() {
    Lista* minha_lista = lista_cria();
    int opcao, valor;

    do {
        printf("\n--- MENU PLAYLIST (Lista Encadeada) ---\n");
        printf("1. Adicionar Musica (Inserir)\n");
        printf("2. Remover Musica (Remover)\n");
        printf("3. Ver Playlist (Navegar)\n");
        printf("4. Buscar Musica (Pesquisar)\n");
        printf("0. Sair e Liberar Memoria\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o ID da musica: ");
                scanf("%d", &valor);
                minha_lista = lista_insere(minha_lista, valor);
                printf("Musica %d adicionada!\n", valor);
                break;

            case 2:
                printf("Digite o ID para remover: ");
                scanf("%d", &valor);
                minha_lista = lista_remove(minha_lista, valor);
                printf("Tentativa de remocao concluida.\n");
                break;

            case 3:
                printf("\n--- Sua Playlist Atual ---\n");
                if(lista_vazia(minha_lista)) {
                    printf("A playlist esta vazia!\n");
                } else {
                    lista_imprime(minha_lista);
                }
                break;

            case 4:
                printf("Digite o ID para buscar: ");
                scanf("%d", &valor);
                if(lista_busca(minha_lista, valor) != NULL) {
                    printf("Musica %d encontrada na lista!\n", valor);
                } else {
                    printf("Musica %d nao encontrada.\n", valor);
                }
                break;

            case 0:
                lista_libera(minha_lista);
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}
