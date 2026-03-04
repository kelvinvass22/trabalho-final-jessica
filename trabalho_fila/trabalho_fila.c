#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila {
    int info;
    struct fila* prox;
};

Fila* fila_cria(void) {
    return NULL;
}

// FUNÇÃO EXTRA: Busca para evitar repetidos (Tratamento solicitado)
int fila_busca(Fila* f, int v) {
    Fila* q;
    for (q = f; q != NULL; q = q->prox) {
        if (q->info == v) return 1; // Achou repetido
    }
    return 0; // Não achou
}

Fila* fila_insere(Fila* f, int v) {
    // Tratamento de não repetir
    if (fila_busca(f, v)) {
        printf("Erro: ID %d ja existe na fila!\n", v);
        return f;
    }

    Fila* n = (Fila*) malloc(sizeof(Fila));
    n->info = v;
    n->prox = NULL;

    if (f == NULL) return n;

    Fila* aux = f;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = n;
    return f;
}

Fila* fila_remove(Fila* f) {
    if (f == NULL) return NULL;
    Fila* t = f->prox;
    free(f);
    return t;
}

void fila_imprime(Fila* f) {
    Fila* q;
    for (q = f; q != NULL; q = q->prox) {
        printf("%d\n", q->info);
    }
}
