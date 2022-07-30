#include "pilha.h"

void Pilha::Cria(){
    this->topo = -1;
    this->filaCriada = true;
}

bool Pilha::getFilaCriada(){
    return filaCriada;
}

bool Pilha::Empilha(int X){

    bool DeuCerto;

    if (this->getFilaCriada()){
        DeuCerto = true;
            if (this->Cheia()){
                DeuCerto = false; 
            }

            else{
                this->topo++;
                elementos[topo] = X; 
        
                 }
    }

   return DeuCerto;

}

bool Pilha::Desempilha(tipoPilha &elementoRetirado){
bool DeuCerto = false;
    if (this->getFilaCriada()){
    DeuCerto=true;
    if (this->Vazia()){
        DeuCerto = false;
        return DeuCerto;
    }
    else{
        elementoRetirado = elementos[topo];
        this->topo--;
    }

    }

    return DeuCerto;
}


bool Pilha::Vazia(){
       if ( this->topo == -1){
            return true;
   }
   else{
    return false;
   }
    }

   

bool Pilha::Cheia(){
     return ( this->topo == tam_max-1);
       
}
