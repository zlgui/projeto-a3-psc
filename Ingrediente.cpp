#include <iostream>
#include <fstream>
#include <string>
#include "include/Ingrediente.h"

using namespace std;

Ingrediente::Ingrediente(int id, string nome){
  this->id = id;
  this->nome = nome;
}

Ingrediente::Ingrediente(){};

int Ingrediente::getId() {
  return id;
}

string Ingrediente::getNome() {
  return nome;
}

void Ingrediente::setNome(string nome){
  this->nome = nome;
}

//Outros métodos

//Converte uma linha da base de dados em objeto
Ingrediente Ingrediente::quebraLinha(string a) {
    int contador = 0, contadorSharp = 0;
    string idString, nome;

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
            nome = atributo;
        }

        contadorSharp++;
        contador++;

        if (contadorSharp >= 2) {
            break;
        }
    }

    //Converte o idString para id inteiro
    unsigned long int id = stoi(idString);


    auto x = Ingrediente(id, nome);
    return x;
}


vector<Ingrediente> Ingrediente::listarIngredientes() {

  fstream arquivo("ingredientes.txt");
  auto vetorIngredientes = vector<Ingrediente>();

  string linha;

  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      Ingrediente i = quebraLinha(linha);
      vetorIngredientes.push_back(i);
    }

  } else {
      cout << "Erro ao abrir o arquivo." << endl;
  }

  arquivo.close();
  return vetorIngredientes;

}
