/*
Autor: Pedro Malandrin Klesse
RA: 790746
Data Criação: 09/05/2021
Data Atualização: 12/05/2021
*/

#include "fila.h"

//Operação não primitiva fora da classe
//Função imprime que retira o elemento da fila, imprime-o e recoloca ele na fila (executa essa sequência para todos)
void imprime(Fila *X){ 
    if (!(X->Vazia())){

    Fila filaAux = *X;
    tipoFila *aux = new tipoFila;

        cout << "Fila:\n" << endl;
        while(!filaAux.Vazia()){
            if (filaAux.Retira(*aux)){
            cout << "|*" << *aux << "*| " ;
            }
    }
}
    else
        cout << "A fila está vazia";
    
}

int main(){

    int escolha=1;
    tipoFila elemento_a_inserir;
    tipoFila elemento_a_retirar;
    bool condicaoInserir;
    bool condicaoRetirar;


    //Alocação Dinâmica da Fila
    Fila* fila = new Fila();


    cout << "\n*=*=*=*=*=*=" << "Bem-vindo a interface do aplicativo de filas" << "*=*=*=*=*=*=\n";

    //Enquanto a escolha for diferente de zero, o programa mostrará novamente as operações do programa
    while (escolha != 0){

    //Opções do programa
    cout << "\n\nCriar nova Fila:(1)\n";
    cout << "Inserir Elemento na Fila:(2)\n";
    cout << "Remover elemento na Fila:(3)\n";
    cout << "Imprimir elementos da Fila:(4)\n";
    cout << "Fechar o Programa:(0)\n>>> ";
    cin >> escolha;



    switch(escolha){
        
        //Cria uma nova fila: todos os elementos são zerados e o tamanho atual também é zerado
        case 1:
            fila->Cria();
            break;
        //Inserir o elemento desejado na fila
        case 2:
            cout << "Informe o elemento a ser inserido na fila:\n";
            cin >> elemento_a_inserir;
            condicaoInserir = fila->Insere(elemento_a_inserir);
            if (condicaoInserir)
                cout << "Inserção realizada com sucesso\n";
            else
                cout << "Não foi possível inserir, a fila está cheia\n";

            break;
        //Opção de Retirar um elemento da fila: o primeiro sempre será o elemento retirado
        case 3:
            condicaoRetirar = fila->Retira(elemento_a_retirar);
            if (condicaoRetirar)
                cout << "Remoção realizada com sucesso\n";
            else
                cout << "Não foi possível retirar, a fila está vazia\n";
            break;
        //Opção de imprimir a fila
        case 4:
            imprime(fila);
            cout << "\n\n";
            break; 
    }
    
    }

    //Libera o espaço da variável fila
    delete fila;
    
    return 0;

}