#include <iostream>
#include <fstream>
#include <string>
#include "include/Ingrediente.h"

using namespace std;

Ingrediente::Ingrediente(int id, string nome){
  this->id = id;
  this->nome = nome;
}

int Ingrediente::getId() {
  return id;
}

string Ingrediente::getNome() {
  return nome;
}

void Ingrediente::setNome(string nome){
  this->nome = nome;
}
