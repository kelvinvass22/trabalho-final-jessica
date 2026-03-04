#include <stdio.h>
#include <stdlib.h>
#include "trabalho_fila.h"

int main() {
    Fila* f = fila_cria();
    int opcao, s;

    do {
        printf("\n--- SISTEMA DE ATENDIMENTO BANCARIO (FIFO) ---\n");
        printf("1. Gerar Nova Senha (Inserir)\n");
        printf("2. Chamar Proximo (Remover)\n");
        printf("3. Mostrar Fila de Espera (Navegar)\n");
        printf("0. Fechar Sistema\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o numero da senha: ");
                scanf("%d", &s);
                f = fila_insere(f, s);
                break;
            case 2:
                f = fila_remove(f);
                break;
            case 3:
                if (fila_vazia(f)) printf("Fila vazia!\n");
                else fila_imprime(f);
                break;
            case 0:
                fila_libera(f);
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
