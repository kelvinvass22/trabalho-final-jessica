#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha* h = pilha_cria();
    int opcao, valor;

    do {
        printf("\n--- HISTORICO DE NAVEGACAO (Pilha LIFO) ---\n");
        printf("1. Visitar nova pagina (Push)\n");
        printf("2. Voltar pagina (Pop)\n");
        printf("3. Ver historico (Imprime)\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("ID da pagina: ");
                scanf("%d", &valor);
                pilha_push(h, valor);
                break;
            case 2:
                if (!pilha_vazia(h))
                    printf("Saindo da pagina: %d\n", pilha_pop(h));
                else
                    printf("Nao ha paginas para voltar.\n");
                break;
            case 3:
                printf("\nHistorico (Topo -> Base):\n");
                pilha_imprime(h);
                break;
        }
    } while (opcao != 0);

    pilha_libera(h);
    return 0;
}
