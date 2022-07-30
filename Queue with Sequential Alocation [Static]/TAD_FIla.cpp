#include "fila.h"


void Fila::Cria(){
    //Zera o tamanho atual da fila
    tam_atual = 0;
}

//Insere elementos caso a fila não esteja cheia
bool Fila::Insere(tipoFila novoElemento){
    if (this->Cheia()){
        return false;
    }
    else {
        tam_atual++;
        vetor[tam_atual-1] = novoElemento;
        return true;
    }
}

//Retira elementos caso a fila não esteja vazia
bool Fila::Retira(tipoFila &elementoRetirado){
    if (this->Vazia()){
        return false;
        
    }

    else{
        elementoRetirado = vetor[0];
        for(int i=0; i < tam_atual ;i++){
            vetor[i] = vetor[i+1];
        }
        
        tam_atual--;
        return true;
    }
        
}

//Verifica se a fila está cheia comparando o tamanho atual com o tamanho máximo
bool Fila::Cheia(){
    return (tam_atual == MAX);
}

//Verifica se a fila está vazia através da negação da operação abaixo (tamanho atual maior ou igual a um)
bool Fila::Vazia(){
    return ( !(tam_atual >=1) );

}

/*

void Fila::imprime(){ 

    tipoFila aux;
    this->Retira(aux);
    for (int i=0;i<tam_atual;i++){
        cout << "||*" << aux << "*||" << endl;
        this->Insere(aux);
    }
        
} */