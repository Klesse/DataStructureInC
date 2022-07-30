#include "pilha.h"


void imprime(Pilha *X){
    if (!X->Vazia() && X->getFilaCriada()){

        Pilha PilhaAux = *X;
        tipoPilha aux;

        while(!PilhaAux.Vazia()){
            if (PilhaAux.Desempilha(aux))
                cout << aux << endl;
        }
    }

    else 
        cout << "A pilha está vazia ou não foi criada!" << endl;

}

    

int main(){

    Pilha *cartas = new Pilha;

    cartas->Cria();
 
    cartas->Empilha(1);
    cartas->Empilha(2);
    cartas->Empilha(3);
    cartas->Empilha(4);
    cartas->Empilha(5);
    //cartas.Desempilha(); 
    imprime(cartas);
}