#include <stdio.h>
#include<stdlib.h>


typedef struct lista{
    int info;
    struct lista* prox;   
}nome_lista;


//função que cria a lista
nome_lista* criar_lista(void);

//função que inseri item (início)
nome_lista* inseri_lista(nome_lista* l, int valor);

//função que imprime a lista
void imprime_lista(nome_lista* l);

//função que verifica se a lista esta vazia
int veri_lista(nome_lista* l);

//funçãoq que busca na lista
nome_lista* busca_lista(nome_lista* l, int ele);

//função que remove da lista
nome_lista* remove_lista(nome_lista* l, int i);

//função que libera a lista
void libera_lista(nome_lista* l);

int main(void){
    nome_lista* lista;
    lista = criar_lista();
    lista = inseri_lista(lista, 10);
    lista = inseri_lista(lista, 20);
    imprime_lista(lista);


    if(veri_lista(lista)){
        printf("A lista não está vazia\n");
    }else{
        printf("A lista esta vazia\n");
    }

    int ele;
    printf("Qual elemento deseja procurar?");
    scanf("%d", &ele);

    nome_lista* resultado = busca_lista(lista, ele);
    if(resultado != NULL){
        printf("Seu elemento foi encontrado na posição %p\n", (void*)resultado);
    }else{
        printf("\nO elemento buscado não foi encontrado\n");
    }

    lista = remove_lista(lista, 20);
    imprime_lista(lista);

    return 0;
}

nome_lista* criar_lista(void){
    return NULL;
}

nome_lista* inseri_lista(nome_lista* l, int valor){
    nome_lista* novo = (nome_lista*)malloc(sizeof(nome_lista));
    novo -> info = valor;
    novo -> prox = l;
    return novo;
}

void imprime_lista(nome_lista* l){
    nome_lista* p;

    for(p = l; p!=NULL; p=p->prox){
        printf("A info na lista: %d\n", p->info);
    }
}

int veri_lista(nome_lista* l){
    if(l == NULL){
        return 1;
    }else{
        return 0;
    }
}

nome_lista* busca_lista(nome_lista* l, int ele){
    nome_lista* p;
    for(p = l; p!=NULL; p=p->prox){
        if(p->info==ele){
            printf("Seu elemento foi encontrado na posição %d\n", p->info);
            return p;
        }
    }
    return NULL;
}

nome_lista* remover_elemento(nome_lista* lista, int valor) {
    nome_lista* anterior = NULL;   // Ponteiro para o elemento anterior
    nome_lista* atual = lista;     // Ponteiro que percorre a lista

    // Encontrar o elemento na lista
    while (atual != NULL && atual->info != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    // Se o elemento não foi encontrado, retornar a lista inalterada
    if (atual == NULL) {
        return lista;
    }

    // Se o elemento está no início da lista
    if (anterior == NULL) {
        lista = atual->prox;
    } else {
        // Se o elemento está no meio ou final da lista
        anterior->prox = atual->prox;
    }

    // Liberar a memória alocada para o nó removido
    free(atual);

    // Retornar a lista atualizada
    return lista;
}


void libera_lista(nome_lista* l){
    nome_lista* p = l;
    while(p != NULL){
        nome_lista* t = p->prox;
        free(p);
        p = t;
    }
}