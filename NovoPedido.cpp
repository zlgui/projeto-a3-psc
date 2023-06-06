#include <iostream>
#include <string>
using namespace std;

void novoPedido(){
    string nomeCliente;
    unsigned short int numeroMesa;
    unsigned short cpfNota;
    unsigned short tamanhoPizza;
    string cpf;

    cout <<"\n/////////////////////////////////// Preencha os dados do cliente /////////////////////////////////////\n";

    cout << "\nDigite o nome do cliente: ";
    cin >> nomeCliente;

    //Verifica o nome do cliente
    while(nomeCliente.empty()){
        cout << "\nO nome do cliente não pode ficar vazio, insira um nome válido: ";
        cin >> nomeCliente;
    }

    cout << "\nDigite o número da mesa: ";
    cin >> numeroMesa;

    //Verifica o número da mesa
    while(numeroMesa <=0 && numeroMesa > 50){
        cout << "\nDigite uma mesa válida: ";
        cin >> numeroMesa;
    }

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


    cout <<"\n/////////////////////////////////// Escolha o tamanho da pizza /////////////////////////////////////\n";

    cout <<"\n1- Nenhuma pizza  |  2- Pequena - R$ 50,00 |  3- Média - R$ 80.00 |  4- Grande - R$ 100,00\n";

    cout <<"\n* Qual tamanho de pizza o cliente deseja? ";
    cin >> tamanhoPizza;

    //Valida o tamanho da pizza
    while(tamanhoPizza != 1 && tamanhoPizza != 2 && tamanhoPizza != 3 && tamanhoPizza != 4){
        cout << "\nInsira um tamanho válido: ";
        cin >> tamanhoPizza;
    }
}