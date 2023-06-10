#include <iostream>
#include <string>
#include <vector>

#include "include/Sabor.h"

using namespace std;

string nomeCliente(){
    string nomeCliente;

    cout <<"\n/////////////////////////////////// Preencha os dados do cliente /////////////////////////////////////\n";

    cout << "\nDigite o nome do cliente: ";
    cin >> nomeCliente;

    //Verifica o nome do cliente
    while(nomeCliente.empty()){
        cout << "\nO nome do cliente não pode ficar vazio, insira um nome válido: ";
        cin >> nomeCliente;
    }

    return nomeCliente;
}

string numeroMesa(){
    string numeroMesa;

    cout << "\nDigite o número da mesa: ";
    cin >> numeroMesa;

    //Valida o número da mesa
    while(numeroMesa.empty()){
        cout << "\nO número da mesa não pode ficar vazio, por favor insira um novo número: ";
        cin >> numeroMesa;
    }

    return numeroMesa;
}

string escolherCPF(){
    unsigned short cpfNota;
    string cpf;

    cout << "\nO cliente deseja CPF na nota?";
    cout << "\n 1- Sim | 2- Não\n";
    cin >> cpfNota;

    //Verifica se a resposta em relação ao CPF está válida
    while(cpfNota != 1 && cpfNota != 2){
        cout << "\nInsira uma resposta válida: ";
        cin >> cpfNota;
    }

    //Se o cliente não informar o CPF, ele será vazio
    if(cpfNota == 1){
        cout << "\nInsira o CPF do cliente: ";
        cin >> cpf;

        while(cpf.length() != 11){
            cout <<"\ninsira um CPF válido: ";
            cin >> cpf;
        }
    } else {
        cpf = "";
    }

    return cpf;
}

unsigned short tamanhoPizza(){
    unsigned short tamanhoPizza;

    cout <<"\n/////////////////////////////////// Escolha o tamanho da pizza /////////////////////////////////////\n";

    cout <<"\n1- Nenhuma pizza  |  2- Pequena - R$ 50,00 |  3- Média - R$ 80.00 |  4- Grande - R$ 100,00\n";

    cout <<"\n* Qual tamanho de pizza o cliente deseja? ";
    cin >> tamanhoPizza;

    //Valida o tamanho da pizza
    while(tamanhoPizza != 1 && tamanhoPizza != 2 && tamanhoPizza != 3 && tamanhoPizza != 4){
        cout << "\nInsira um tamanho válido: ";
        cin >> tamanhoPizza;
    }

    return tamanhoPizza;
}

vector<Sabor> escolherSabores(){
    unsigned short quantSabores;

     cout <<"\n/////////////////////////////////// Escolha os sabores da pizza /////////////////////////////////////\n";

     cout <<"\nQuantos sabores você deseja? ";
     cin >> quantSabores;

     //Valida a quantidade de sabores
     while(quantSabores != 1 && quantSabores != 2 && quantSabores !=3 && quantSabores != 4){
        if(quantSabores < 1){
            cout <<"A quantidade mínima de sabores é 1, insira uma quantidade válida: ";
        } else if(quantSabores > 4){
            cout <<"A quantidade máxima de sabores é 4, insira uma quantidade válida: ";
        } else{
            cout <<"Por favor insira uma quantidade válida: ";
        }
        cin >> quantSabores;
     }

     cout << endl;

     vector<Sabor> saboresPedido;
     Sabor sabores = Sabor();

    //Imprime sabores
    for(Sabor sabor : sabores.listarSabores()){
        cout << sabor;
    }

    cout << endl;

     //Armazena os sabores escolhidos em um vetor
     for(int i= 0; i< quantSabores; i++){
        string s;
        bool encontrado = false;

        while(encontrado == false) {
            cout <<"\nEscolha o sabor " << i+1 <<": ";
            cin >> s;

            for(Sabor sabor : sabores.listarSabores()){
                if(s == sabor.getNome()){
                    saboresPedido.push_back(sabor);
                    encontrado = true;
                }
            }

            if(!encontrado){
                cout <<"\nO sabor digitado não foi encontrado!\n";
            }
        }
     }

     return saboresPedido;
}

void novoPedido(){
   string nome = nomeCliente();
   string numeroDaMesa = numeroMesa();
   string cpf = escolherCPF();
   unsigned short tamanhoDaPizza = tamanhoPizza();
   
    if(tamanhoDaPizza != 1){
        vector<Sabor> saboresPizza = escolherSabores();
    }


}
