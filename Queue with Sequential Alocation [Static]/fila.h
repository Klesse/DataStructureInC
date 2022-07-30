#ifndef FILA_H
#define FILA_H
#define MAX 50 //Valor máximo padrão para qualquer fila criada

#include <iostream>
#include <string>

using namespace std;

//Escolher tipo da variável dos elementos da fila
typedef string tipoFila;

class Fila{
    private:
        int tam_atual; //Tamanho atual da fila, inicializado por 0;
        tipoFila vetor[MAX]; //Vetor que representa a fila sendo a posição 0 o início da fila
    public:
        //Operações Primitivas
        void Cria();
        bool Insere(tipoFila); //Insereve o elemento passado por parâmetro no começo da fila
        bool Retira(tipoFila &); //Retira o primeiro elemento da fila e retorna ele pelo método
        bool Cheia(); //Caso a fila esteja cheia, retorna verdadeiro, caso contrário, falso
        bool Vazia(); //Caso a fila esteja vazia, retorna verdadeiro, caso contrário, falso
        //Operação não primitiva dentro da classe
        //void imprime(); //Imprimi a fila 

};

#endif 
