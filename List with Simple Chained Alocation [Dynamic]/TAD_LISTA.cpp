#include "lista.hpp"

void Lista::Insere(int X){
    if (L == NULL){ //CASO 1: LISTA VAZIA
        L = new Node;
        L->info = X;
        L->next = NULL;
    }

    else {
        if (L != NULL && L->next == NULL){ //CASO 2: Lista com 1 elemento
            
            if (X > L->info){ //CASO 2.1: Valor a ser inserido maior que o primeiro elemento
                NodePtr PAux = new Node;
                PAux->next = L;
                PAux->info = X;
                L = PAux;
                PAux = NULL;

            }
            else{ //CASO 2.2: Valor a ser inserido menor que o primeiro elemento
                L->next = new Node;
                L->next->info = X;
                L->next->next = NULL;
            }
            
        }

        else { //CASO 3: Lista com mais de um elemento
           
                if (X > L->info){ //CASO 3.1 X maior que o primeiro elemento da lista
                    NodePtr PAux = new Node;
                    PAux->info = X;
                    PAux->next = L;
                    L = PAux;
                    PAux = NULL;
                }
                else{ //CASO 3.2 X Maior que outro elemento da lista
                    NodePtr PAux = L->next;
                    NodePtr Anterior = L;

                    while(PAux != NULL){
                        if (X > PAux->info){
                            Anterior->next = new Node;
                            Anterior->next->info = X;
                            Anterior->next->next = PAux;
                            return;

                    }

                     PAux = PAux->next;
                     Anterior = Anterior->next;

                     
                }
                if (PAux == NULL){ //CASO 3.3 X Menor que todos os elementos da lista
                        PAux = new Node;
                        PAux->info = X;
                        PAux->next = NULL;
                        Anterior->next = PAux;
                        return;

        }
        }
    }
}
}

bool Lista::Vazia(){
    return (L == NULL);
}


void Lista::RemoveUm(int &X){
    X = L->info;
    L = L->next;
}


void Lista::RemoveTodos(int V[]){
    int i = 0;
    while (L!= NULL){
        RemoveUm(V[i]);
        i++;
    }
}

void Lista::imprime(){
    NodePtr PAux = L;
    while (PAux != NULL){
        cout << PAux->info << endl;
        PAux = PAux->next;
    }
}