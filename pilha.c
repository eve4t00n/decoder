#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Estrutura dos nós responsáveis por formar a pilha;
typedef struct no{
    int valor;
    struct no *proximo;
} No;

bool pilhaVazia(No *topo){
    return topo == NULL;
}

void push(No **topo,int v){
    No *novoNo = (No*)malloc(sizeof(No));
    if(!novoNo){
        puts("Erro ao criar novo Elemento!");
        return;
    }
    novoNo->valor = v;
    novoNo->proximo = *topo;
    *topo = novoNo;
}

void pop(No **topo){
    if(pilhaVazia(*topo)){
        puts("Pilha vazia. Sem elementos para remover!");
        return;
    }
    No *aux = *topo;
    *topo = (*topo)->proximo;//Parênteses usados para respeitar a precedência de operação
    free(aux);
}

int peek(No *topo){
    if(pilhaVazia(topo)){
        return -1;//Índice de erro
    }
    return topo->valor;
}

int main(){
    No *pilha = NULL;//Inicialização da Pilha
    if(pilhaVazia(pilha)){
        puts("Pilha Vazia\n");
    } else {
        puts("Pilha Com Elementos\n");
    }
    push(&pilha,10);
    printf("Topo da Pilha: %d\n",peek(pilha));
    push(&pilha,29);
    printf("Topo da Pilha: %d\n",peek(pilha));
    pop(&pilha);
    printf("Topo da Pilha: %d\n",peek(pilha));
    return 0;
}
