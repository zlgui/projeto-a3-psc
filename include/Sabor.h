#ifndef SABOR_H
#define SABOR_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "include/Ingrediente.h"

using namespace std;

class Sabor{
  private:
    int id;
    vector<Ingrediente> ingrediente;
    
  public:
    Sabor(int id, vector<Ingrediente> ingrediente);
    int getId();
    vector<Ingrediente> getIngrediente();
    void setIngrediente(vector<Ingrediente> ingrediente);
};


#endif 