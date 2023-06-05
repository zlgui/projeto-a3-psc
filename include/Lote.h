#ifndef LOTE_H_
#define LOTE_H_

#include <iostream>

using namespace std;

class Lote{
    private:
        unsigned long int id;
        unsigned int quantidade;
        string dataDeValidade;
        unsigned int numeroLote;
    public:
        Lote(unsigned long int id, unsigned int quantidade, string dataDeValidade, unsigned int numeroLote);
        Lote();

        unsigned long int getId();
        void setId(unsigned long int id);

        unsigned int getQuantidade();
        void setQuantidade(unsigned int quantidade);

        string getDataDeValidade();
        void setDataDeValidade(string dataDeValidade);

        unsigned int getNumeroLote();
        void setNumeroLote(unsigned int numeroLote);

};

#endif
