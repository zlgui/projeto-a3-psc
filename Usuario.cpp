#include <iostream>
#include <string>

using namespace std;

#include "include/Usuario.h"

    Usuario::Usuario(unsigned long int id, string email, string senha, string tipoUsuario){
        this->id = id;
        this->email = email;
        this->senha = senha;
        this->tipoUsuario = tipoUsuario;
    };
    
    unsigned long int Usuario::getId(){
        return id;
    };

    void Usuario::setId(unsigned long int id){
        this->id = id;
    }

    string Usuario::getEmail(){
        return email;
    };

    void Usuario::setEmail(string email){
        this->email = email;
    }

    string Usuario::getSenha(){
        return senha;
    };

    void Usuario::setSenha(string senha){
        this->senha = senha;
    }

    string Usuario::getTipoUsuario(){
        return tipoUsuario;
    };

    void Usuario::setTipoUsuario(string tipoUsuario){
        this->tipoUsuario = tipoUsuario;
    }
