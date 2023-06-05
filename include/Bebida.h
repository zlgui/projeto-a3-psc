#ifndef BEBIDA_H_
#define BEBIDA_H_

#include <iostream>
using namespace std;

class Bebida{
  private:
    int id;
    string tipo;
    string tamanho;
    string descricao;

  public:
    Bebida(int id, string tipo, string tamanho, string descricao);

    int getId();

    string getTipo();
    void setTipo(string tipo);

    string getTamanho();
    void setTamanho(string tamanho);
    
    string getDescricao();
    void setDescricao(string descricao);
};

#endif