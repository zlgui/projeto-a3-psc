#include <iostream>

using namespace std;

#include "include/TamanhoPizza.h"

//Construtores

TamanhoPizza::TamanhoPizza(unsigned short tamanho, float valor){
    this->tamanho = tamanho;
    this->valor = valor;
}

TamanhoPizza::TamanhoPizza(){};

//Getters e setters

unsigned short TamanhoPizza::getTamanho(){
    return tamanho;
}

void TamanhoPizza::setTamanho(unsigned short tamanho){
    this->tamanho = tamanho;
}

float TamanhoPizza::getValor(){
    return valor;
}

void TamanhoPizza::setValor(float valor){
    this->valor = valor;
}

