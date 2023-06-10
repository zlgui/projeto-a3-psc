#ifndef SABOR_H
#define SABOR_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Ingrediente.h"

using namespace std;

class Sabor{
  private:
    int id;
    string nome;
    vector<Ingrediente> ingrediente;

    friend ostream& operator<<(ostream& os, const Sabor& objeto) {
        os << "Nome: " << objeto.nome << endl;
        return os;
    }

  public:
    Sabor(int id, string nome, vector<Ingrediente> ingrediente);
    Sabor();

    int getId();
    string getNome();
    vector<Ingrediente> getIngrediente();

    void setNome(string nome);
    void setIngrediente(vector<Ingrediente> ingrediente);

    Sabor quebraLinha(string a);
    vector<Sabor> listarSabores();

};


#endif
