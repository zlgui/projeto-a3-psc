#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
    unsigned long int id;
    string email;
    string senha;
    string tipoUsuario;

public:
    Usuario(unsigned long int id, string email, string senha, string tipoUsuario);
    
    unsigned long int getId();
    void setId(unsigned long int id);

    string getEmail();
    void setEmail(string email);

    string getSenha();
    void setSenha(string senha);

    string getTipoUsuario();
    void setTipoUsuario(string tipoUsuario);


};

#endif