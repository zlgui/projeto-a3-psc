#include <iostream>

using namespace std;

#include "include/Lote.h"

//Construtores

Lote::Lote(unsigned long int id, unsigned int quantidade, string dataDeValidade, unsigned int numeroLote) {
    this->id = id;
    this->quantidade = quantidade;
    this->dataDeValidade = dataDeValidade;
    this->numeroLote = numeroLote;
}

Lote::Lote(){};

//Getters e setters

unsigned long int Lote::getId(){
    return id;
}

void Lote::setId(unsigned long int id){
    this->id = id;
}

unsigned int Lote::getQuantidade(){
    return quantidade;
}

void Lote::setQuantidade(unsigned int quantidade){
    this->quantidade = quantidade;
}

string Lote::getDataDeValidade(){
    return dataDeValidade;
}

void Lote::setDataDeValidade(string getDataDeValidade){
    this->dataDeValidade = dataDeValidade;
}

unsigned int Lote::getNumeroLote(){
    return numeroLote;
}

void Lote::setNumeroLote(unsigned int numeroLote){
    this->numeroLote = numeroLote;
}


