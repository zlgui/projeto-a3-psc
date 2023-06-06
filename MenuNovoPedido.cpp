#include <iostream>
#include "include/MenuPrincipal.h"
#include "include/NovoPedido.h"

using namespace std;

void menuNovoPedido(){
    unsigned short resposta;

    cout <<"\n/////////////////////////////////// Novo pedido /////////////////////////////////////\n";

    cout <<"\n1- Criar novo pedido  |  2- Voltar para o menu principal\n";
    cout <<"\n* Qual atividade você deseja realizar? ";
    cin >> resposta;

    //Validação da resposta
    while(resposta != 1 && resposta != 2){
        cout <<"\nOpção inválida, por favor tente novamente: ";
        cin >> resposta;
    }

    switch (resposta)
    {
    case 1:
        novoPedido();
        break;

    case 2:
        menuPrincipal(); 
        break;
    }
};