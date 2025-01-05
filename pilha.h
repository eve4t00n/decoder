#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Estrutura dos nós responsáveis por formar a pilha;
typedef struct no{
    int valor;
    struct no *proximo;
} No;

//Verifica se pilha está vazia
bool pilhaVazia(No *topo);
//Adiciona um novo elemento na pilhas
void push(No **topo,int v);
//Remove um elemento da pilha
void pop(No **topo);
//Retorna o elemento do topo da pilha
int peek(No *topo);

#endif
