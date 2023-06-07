#include <iostream>
#include <string>
#include <vector>
#include "include/Sabor.h"
#include "include/Ingrediente.h"

using namespace std;

Sabor::Sabor(int id, vector<Ingrediente> Ingrediente){
  this->id = id;
  this->ingrediente = ingrediente;
}

int Sabor::getId() {
  return id;
}

vector<Ingrediente> Sabor::getIngrediente(){
  return ingrediente;
}

void Sabor::setIngrediente(vector<Ingrediente> Ingrediente){
  this->ingrediente = ingrediente;
}