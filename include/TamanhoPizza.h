#ifndef TAMANHOPIZZA_H_
#define TAMANHOPIZZA_H_

#include <iostream>
using namespace std;

class TamanhoPizza{
    private:
        unsigned short tamanho;
        float valor;
    public:
        TamanhoPizza(unsigned short tamanho, float valor);
        TamanhoPizza();

        unsigned short getTamanho();
        void setTamanho(unsigned short tamanho);

        float getValor();
        void setValor(float valor);
};

#endif