#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Usuario {
private:
    unsigned long int id;
    string email;
    string senha;
    string tipoUsuario;
    string nome;

    friend ostream& operator<<(ostream& os, const Usuario& objeto) {
        os << "ID: " << objeto.id << " ";
        os << "Email: " << objeto.email << " ";
        os << "Senha: " << objeto.senha << endl;
        os << "Tipo do usuário: " << objeto.tipoUsuario << endl;
        os << "Nome: " << objeto.nome << endl;
        return os;
    }

public:
    Usuario(unsigned long int id, string email, string senha, string tipoUsuario, string nome);
    Usuario();
    
    unsigned long int getId();
    void setId(unsigned long int id);

    string getEmail();
    void setEmail(string email);

    string getSenha();
    void setSenha(string senha);

    string getTipoUsuario();
    void setTipoUsuario(string tipoUsuario);

    string getNome();
    void setNome(string nome);

    Usuario quebraLinha(string a);

    vector<Usuario> listarUsuarios();

};

#endif