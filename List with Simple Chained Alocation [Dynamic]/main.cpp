#include "lista.hpp"

void imprime(Lista lista){
    Lista listaAux;
    int Aux = 0;
    //int vetor[99];

     while (!lista.Vazia()){
         lista.RemoveUm(Aux);
         cout << Aux << endl;
         listaAux.Insere(Aux);
     }

     while (!listaAux.Vazia()){
        listaAux.RemoveUm(Aux);
        lista.Insere(Aux);
     }

}

int main(){

    int aux;

    Lista mercado;

     mercado.Insere(100);
     mercado.Insere(105); 
     mercado.Insere(110);
     mercado.Insere(1115);
     mercado.Insere(90);
     mercado.Insere(99);

    mercado.imprime();
   //imprime(mercado);

   mercado.RemoveUm(aux);

   cout << "==========" << endl;

   mercado.imprime();
    
}