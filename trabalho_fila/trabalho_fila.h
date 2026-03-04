typedef struct fila Fila;

Fila* fila_cria();
Fila* fila_insere(Fila* f, int senha);
Fila* fila_remove(Fila* f);
void fila_imprime(Fila* f);
int fila_vazia(Fila* f);
void fila_libera(Fila* f);
