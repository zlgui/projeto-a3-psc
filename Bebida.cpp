#include <iostream>
#include "include/Bebida.h"

using namespace std;

Bebida::Bebida(int id, string tipo, string tamanho, string descricao){
  this->id = id;
  this->tipo = tipo;
  this->tamanho = tamanho;
  this->descricao = descricao;
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
