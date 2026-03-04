#include "trabalho_encadeado.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
    int info;
    struct lista *prox;
};

Lista* lista_cria() {
    return NULL;
}

int lista_vazia(Lista *L) {
    return (L == NULL);
}

Lista* lista_insere(Lista *L, int info) {
    Lista* novo = (Lista*) malloc(sizeof(struct lista));
    if (novo == NULL) {
        return L;
    }
    novo->info = info;
    novo->prox = L;
    return novo;
}

Lista* lista_busca(Lista *L, int info) {
    Lista* p;
    for (p = L; p != NULL; p = p->prox) {
        if (p->info == info)
            return p;
    }
    return NULL;
}

void lista_imprime(Lista *L) {
    Lista* p;
    for (p = L; p != NULL; p = p->prox) {
        printf("Info = %d\n", p->info);
    }
}

Lista* lista_remove(Lista* L, int info) {
    Lista* ant = NULL;
    Lista* p = L;

    while (p != NULL && p->info != info) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) return L;

    if (ant == NULL) {
        L = p->prox;
    } else {
        ant->prox = p->prox;
    }

    free(p);
    return L;
}

void lista_libera(Lista *L) {
    Lista* p = L;
    while (p != NULL) {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}
