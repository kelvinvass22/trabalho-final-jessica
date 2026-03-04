#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct lista {
    int info;
    struct lista *prox;
};

struct pilha {
    struct lista *topo;
};

Pilha* pilha_cria(void) {
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    if (p == NULL) exit(1);
    p->topo = NULL;
    return p;
}

int pilha_vazia(Pilha *p) {
    return p->topo == NULL;
}

void pilha_push(Pilha *p, int info) {
    struct lista *l = (struct lista*)malloc(sizeof(struct lista));
    if (l == NULL) exit(1);
    l->info = info;
    l->prox = p->topo;
    p->topo = l;
}

int pilha_pop(Pilha *p) {
    if (pilha_vazia(p)) {
        printf("Pilha Vazia!!!\n");
        exit(1);
    }
    struct lista *l = p->topo;
    int a = l->info;
    p->topo = l->prox;
    free(l);
    return a;
}

void pilha_imprime(Pilha *p) {
    struct lista *lAux = p->topo;
    while (lAux != NULL) {
        printf("%d\n", lAux->info);
        lAux = lAux->prox;
    }
}

void pilha_libera(Pilha *p) {
    struct lista *l = p->topo;
    while (l != NULL) {
        struct lista *lAux = l->prox;
        free(l);
        l = lAux;
    }
    free(p);
}
