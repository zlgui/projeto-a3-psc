#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "include/Sabor.h"
#include "include/Ingrediente.h"

using namespace std;

Ingrediente ingredienteFinal = Ingrediente();

Sabor::Sabor(int id, string nome, vector<Ingrediente> Ingrediente){
  this->id = id;
  this->nome = nome;
  this->ingrediente = ingrediente;
}

Sabor::Sabor(){};

int Sabor::getId() {
  return id;
}

string Sabor::getNome(){
  return nome;
}

vector<Ingrediente> Sabor::getIngrediente(){
  return ingrediente;
}

void Sabor::setIngrediente(vector<Ingrediente> Ingrediente){
  this->ingrediente = ingrediente;
}

void Sabor::setNome(string nome){
  this->nome = nome;
}

Sabor Sabor::quebraLinha(string a){
   int contador = 0, contadorSharp = 0;
    string idString, nome, ingredientes;

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
        } else if (contadorSharp == 1) {
            ingredientes = atributo;
        }

        contadorSharp++;
        contador++;

        if (contadorSharp >= 3) {
            break;
        }
    }

    //Converte o idString para id inteiro
    unsigned long int id = stoi(idString);

    //Transforma a string ingredientes em um vetor novamente
    int count = 0, contadorPorcentagem = 0;
    vector<string> vetorIngredientes;

    for (int i = 0; i < ingredientes.size(); i++) {
        vector<char> vti;
        while (count < ingredientes.size() && ingredientes[count] != '%') {
            vti.push_back(ingredientes[contador]);
            contador++;
        }

        string ing(vti.data(), vti.size());

        vetorIngredientes.push_back(ing);
    }

    //percorre a lista de ingredientes e armazena os ingredientes com o nome correspondente
    vector<Ingrediente> ingredienteSabor;
    for(string i : vetorIngredientes){
      for(Ingrediente j : ingredienteFinal.listarIngredientes()){
        if(j.getNome() == i){
          ingredienteSabor.push_back(j);
        }
      }
    }

    auto x = Sabor(id, nome, ingredienteSabor);
    return x;
};



vector<Sabor> Sabor::listarSabores(){
  fstream arquivo("sabores.txt");
  auto vetorSabores = vector<Sabor>();

  string linha;

  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      Sabor i = quebraLinha(linha);
      vetorSabores.push_back(i);
    }

  } else {
      cout << "Erro ao abrir o arquivo." << endl;
  }

  arquivo.close();
  return vetorSabores;

};

