#include "pilha.h"

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
