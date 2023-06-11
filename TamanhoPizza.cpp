#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "include/TamanhoPizza.h"

//Construtores

TamanhoPizza::TamanhoPizza(unsigned long int id, string tamanho, double valor){
    this->id = id;
    this->tamanho = tamanho;
    this->valor = valor;
}

TamanhoPizza::TamanhoPizza(){};

//Getters e setters
unsigned long int TamanhoPizza::getId(){
    return id;
}

string TamanhoPizza::getTamanho(){
    return tamanho;
}

void TamanhoPizza::setTamanho(string tamanho){
    this->tamanho = tamanho;
}

double TamanhoPizza::getValor(){
    return valor;
}

void TamanhoPizza::setValor(double valor){
    this->valor = valor;
}

//Outros métodos

//Converte uma linha da base de dados em objeto
TamanhoPizza TamanhoPizza::quebraLinha(string a) {
    int contador = 0, contadorSharp = 0;
    string idString, tamanho, valorString;

    for (int i = 0; i < a.size(); i++) {
        vector<char> vt;
        while (contador < a.size() && a[contador] != '#') {
            vt.push_back(a[contador]);
            contador++;
        }

        // Converter vetor de char para string correspondente
        string atributo(vt.data(), vt.size());

        if (contadorSharp == 0) {
            idString = atributo;
        } else if (contadorSharp == 1) {
            tamanho = atributo;
        } else if(contadorSharp == 2){
            valorString = atributo;
        }

        contadorSharp++;
        contador++;

        if (contadorSharp >= 3) {
            break;
        }
    }

    //Converte o idString para id inteiro e valor para float
    unsigned long int id = stoi(idString);
    double valor = stod(valorString);


    auto x = TamanhoPizza(id, tamanho, valor);
    return x;
}


vector<TamanhoPizza> TamanhoPizza::listarTamanhoPizza() {

  fstream arquivo("tamanhosPizza.txt");
  auto vetorTamanhos = vector<TamanhoPizza>();

  string linha;

  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      TamanhoPizza i = quebraLinha(linha);
      vetorTamanhos.push_back(i);
    }

  } else {
      cout << "Erro ao abrir o arquivo." << endl;
  }

  arquivo.close();
  return vetorTamanhos;

}

