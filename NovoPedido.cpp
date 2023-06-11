#include <iostream>
#include <string>
#include <vector>

#include "include/Sabor.h"
#include "include/TamanhoPizza.h"
#include "include/Bebida.h"

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

TamanhoPizza tamanhoPizza(){
    unsigned short tamanhoPizza;
    TamanhoPizza tamanhosPizza = TamanhoPizza();

    cout <<"\n/////////////////////////////////// Escolha o tamanho da pizza /////////////////////////////////////\n";

    cout << endl;


    for(TamanhoPizza tamanho : tamanhosPizza.listarTamanhoPizza()){
        cout << tamanho;
    }

    cout << endl;

    cout <<"\n* Qual tamanho de pizza o cliente deseja? ";
    cin >> tamanhoPizza;

    TamanhoPizza tamanhoSelecionado;
    bool encontrou = false;
    while (encontrou == false) {
       for(TamanhoPizza tamanho : tamanhosPizza.listarTamanhoPizza()){
            if(tamanhoPizza == tamanho.getId()){
                tamanhoSelecionado = tamanho;
                encontrou = true;
                break;
            }
        }
    }

    return tamanhoSelecionado;
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

vector<Bebida> escolherBebidas(){
     cout <<"\n/////////////////////////////////// Escolha As bebidas /////////////////////////////////////\n";

}

void novoPedido(){
   string nome = nomeCliente();
   string numeroDaMesa = numeroMesa();
   string cpf = escolherCPF();
   TamanhoPizza tamanhoDaPizza = tamanhoPizza();
   vector<Sabor> saboresPizza = escolherSabores();
   vector<Bebida> bebidas;


}
