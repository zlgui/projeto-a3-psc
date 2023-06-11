#include <iostream>
#include <string>
#include<fstream>
#include "include/Bebida.h"


using namespace std;

Bebida::Bebida(int id, string tipo, string tamanho){
  this->id = id;
  this->tipo = tipo;
  this->tamanho = tamanho;
}

int Bebida::getId() {
  return id;
}

string Bebida::getTipo() {
  return tipo;
}

void Bebida::setTipo(string tipo){
  this->tipo = tipo;
}

string Bebida::getTamanho() {
  return tamanho;
}

void Bebida::setTamanho(string tamanho){
  this->tamanho = tamanho;
}

//Outros métodos

//Converte uma linha da base de dados em objeto
Bebida Bebida::quebraLinha(string a) {
    int contador = 0, contadorSharp = 0;
    string idString, tipo, tamanho;

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
            tipo = atributo;
        } else if(contadorSharp == 2) {
          tamanho = atributo;
        }

        contadorSharp++;
        contador++;

        if (contadorSharp >= 3) {
            break;
        }
    }

    //Converte o idString para id inteiro
    unsigned long int id = stoi(idString);

    auto x = Bebida(id, tipo, tamanho);
    return x;
}

vector<Bebida> Bebida::listarBebidas() {

  fstream arquivo("bebidas.txt");
  auto vetorBebidas = vector<Bebida>();

  string linha;

  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      Bebida i = quebraLinha(linha);
      vetorBebidas.push_back(i);
    }

  } else {
      cout << "Erro ao abrir o arquivo." << endl;
  }

  arquivo.close();
  return vetorBebidas;

}

