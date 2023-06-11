#ifndef BEBIDA_H_
#define BEBIDA_H_

#include <iostream>
#include <vector>
using namespace std;

class Bebida{
  private:
    int id;
    string tipo;
    string tamanho;
    string descricao;

  public:
    Bebida(int id, string tipo, string tamanho);

    int getId();

    string getTipo();
    void setTipo(string tipo);

    string getTamanho();
    void setTamanho(string tamanho);

    Bebida quebraLinha(string a);

    vector<Bebida> listarBebidas();
};

#endif
