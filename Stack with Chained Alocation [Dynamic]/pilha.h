#ifndef PILHA_H
#define PILHA_H

//Bibliotecas
#include <iostream>
#include <string>

using namespace std;

//Criação do Registro do tipo Node
struct Node{ 
    int info; //Conteúdo do Nó
    struct Node *next; //Ponteiro que aponta para o próximo nó na lista encadeada
};

typedef struct Node *NodePtr; 

class Pilha{
    private:
        NodePtr Topo; //Ponteiro que aponta ao topo da lista encadeada
    public:
        Pilha(); //Inicialização da Pilha com topo apontando para NULL
        bool Empilha(int); //Empilha um inteiro passado por parâmetro
        bool Desempilha(int &); //Desempilha um inteiro e retorna seu valor na variável passada por 
        bool Cheia(); //Verifica se a pilha está cheia dado um tamanho máximo
        bool Vazia(); //Verifica se a pilha está vazia


};

#endif
