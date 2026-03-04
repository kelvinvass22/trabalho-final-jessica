typedef struct lista Lista;

Lista* lista_cria(void);
Lista* lista_insere(Lista* lista_ponteiro, int valor_recebido);
Lista* lista_remove(Lista* lista_ponteiro, int valor_alvo);
void lista_imprime(Lista* lista_ponteiro);
void lista_libera(Lista* lista_ponteiro);
