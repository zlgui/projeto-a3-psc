#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "lote.h"

using namespace std;

class Ingrediente{
  private:
    int id;
    string nome;

  public:
    Ingrediente(int id, string nome);
    int getId();
    string getNome();
    void setNome(string nome);
};

#endif 