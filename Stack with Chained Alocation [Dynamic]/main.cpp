/*
Autor(es): Pedro Malandrin Klesse
RA: 790746
Data de Criação: 19/05/2020
Data de Atualização: 20/05/2020
*/


#include "pilha.h"

void imprime(Pilha *X){
    Pilha *pilhaAux = new Pilha(); //Criação pilha auxiliar
    int *aux = new int; //Criação variável auxiliar

    if (!X->Vazia()){ // Só imprimirá se a fila não estiver vazia


        while(!X->Vazia()){
                //Retira os elementos da pilha principal através da variável auxiliar, imprime-os e coloca-os na pilha auxiliar
                if (X->Desempilha(*aux)){ 
                    pilhaAux->Empilha(*aux);
                    cout << "|*" << *aux << "*| " << endl;
                    
                }
        }
        //Passa os elementos da pilha auxiliar de volta para a pilha principal através da variável auxiliar
        while (!pilhaAux->Vazia()){
            pilhaAux->Desempilha(*aux);
            X->Empilha(*aux);
        }

    }

    else
        cout << "A pilha está vazia!" << endl;

    delete (aux);
}

int main(){

    int escolha = 1;
    int elemento_a_empilhar, elemento_a_retirar;
    bool condicao_empilhar, condicao_desempilhar;

    Pilha *pilha = new Pilha();

    cout << "\n*=*=*=*=*=*=" << "Bem-vindo a interface do programa de Pilha de inteiros" << "*=*=*=*=*=*=\n\n";

    //Enquanto a escolha for diferente de zero, o programa mostrará novamente as operações
    while (escolha != 0){

    //Opções do programa
    cout << "Inserir Elemento na Pilha:(1)\n";
    cout << "Remover elemento da Pilha:(2)\n";
    cout << "Imprimir elementos da Pilha:(3)\n";
    cout << "Fechar o Programa:(0)\n>>> ";
    cin >> escolha;



    switch(escolha){
        
        
        //Empilhar o elemento desejado na pilha
        case 1:
            cout << "Informe o elemento a ser inserido na fila:\n";
            cin >> elemento_a_empilhar;
            condicao_empilhar = pilha->Empilha(elemento_a_empilhar);
            if (condicao_empilhar)
                cout << "*Inserção realizada com sucesso*\n";
            else
                cout << "!Não foi possível inserir, a pilha está cheia!\n";

            break;
        //Opção de Retirar um elemento da fila: o primeiro sempre será o elemento retirado
        case 2:
        condicao_desempilhar = pilha->Desempilha(elemento_a_retirar);
            if (condicao_desempilhar)
                cout << "*Remoção realizada com sucesso*\n";
            else
                cout << "!Não foi possível retirar, a pilha está vazia!\n";
            break;
        //Opção de imprimir a fila
        case 3:
            imprime(pilha);
            cout << "\n\n";
            break; 
    }


    cout << "\n\n";
    
    }

    return 0;
}