#include "pilha.h"

//Verifica se pilha está vazia
bool pilhaVazia(No *topo){
    return topo == NULL;
}

//Adiciona um novo elemento na pilha
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

//Remove um elemento da pilha
void pop(No **topo){
    if(pilhaVazia(*topo)){
        puts("Pilha vazia. Sem elementos para remover!");
        return;
    }
    No *aux = *topo;//Variável auxiliar para remover o topo da pilha com segurança
    *topo = (*topo)->proximo;//Parênteses usados para respeitar a precedência de operação
    free(aux);
}

//Retorna o elemento do topo da pilha
int peek(No *topo){
    if(pilhaVazia(topo)){
        return -1;//Índice de erro
    }
    return topo->valor;
}
