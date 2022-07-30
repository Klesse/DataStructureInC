#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>
#include <string>

using namespace std;

struct Node{
    int info;
    struct Node *next;
};

typedef struct Node *NodePtr;

class Lista{
    private:
        NodePtr L = NULL;
    public:
        void Insere(int);
        void Remove(int &);
        void RemoveUm(int &);
        void RemoveTodos(int []);
        bool Vazia();
        bool Cheia();
        void imprime();

};

#endif