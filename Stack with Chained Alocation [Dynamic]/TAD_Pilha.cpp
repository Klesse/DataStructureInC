#include "pilha.h"

Pilha::Pilha(){
    this->Topo = NULL; //Inicializa a pilha sem nós, com o Topo apontando para NULL
}

bool Pilha::Empilha(int X){
    //Empilhará o elemento caso a pilha não esteja cheia
    if (!this->Cheia()){

    NodePtr PAux; //Cria ponteiro auxiliar
    PAux = new Node; //Cria um novo nó e aponta PAux para ele
    PAux->info = X; //Atribui o valor de X a Paux info
    PAux->next = this->Topo; //next de PAux passa a apontar para onde Topo aponta
    this->Topo = PAux; //Topo passa a apontar onde o PAux aponta
    PAux = NULL; //PAux aponta para NULL
        return true;
    }
    
    else    
        return false;
}

bool Pilha::Desempilha(int &X){

    if (!this->Vazia()){
        NodePtr PAux; //Criação de um ponteiro auxiliar
        X = this->Topo->info; //Passa o valor de info do nó apontado pelo ponteiro Topo para a variável X
        PAux = this->Topo; //Aponta PAux aonde Topo está apontando
        this->Topo = this->Topo->next; //Direciona Topo para onde next de Topo está apontando
        delete PAux; //Deleta o ponteiro PAux
        return true;
    }

    else
        return false;
}

bool Pilha::Cheia(){
    int tam_max = 50; // Definição do tamanho máximo da Pilha

    int contador = 0; //Variável que mostrará após o loop o número de elementos da pilha

    NodePtr PAux; // Cria um ponteiro auxiliar
    PAux = this->Topo;

    while (PAux != NULL){ //Percorre toda a lista contando o número de elementos
        PAux = PAux->next;
        contador++;
    }

    if (contador == tam_max) //Retorna que a lista é cheia caso o contador tenha o mesmo valor que o tamanho máximo da pilha
        return true;
    else    
        return false;
}


bool Pilha::Vazia(){
    //Caso o Topo esteja apontando para um endereço não definido, a pilha será dada como vazia
    return(this->Topo == NULL);
  
}