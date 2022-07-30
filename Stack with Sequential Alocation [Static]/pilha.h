#ifndef PILHA_H
#define PILHA_H
#define tam_max 50

#include <iostream>

using namespace std;

typedef int tipoPilha;

class Pilha{
    private:
        int topo;
        bool filaCriada;
        int elementos[tam_max];

    public:
        void Cria(); //Cria Pilha
        bool getFilaCriada(); //Retorna verdadeiro caso a fila seja criada
        bool Empilha(tipoPilha); //Retorna bool DeuCerto
        bool Desempilha(tipoPilha &); //retorna bool DeuCerto
        bool Vazia(); //Verifica se a pilha está vazia
        bool Cheia(); //
        
};


#endif