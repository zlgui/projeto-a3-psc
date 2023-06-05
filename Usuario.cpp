#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "include/Usuario.h"

// Métodos construtores

Usuario::Usuario(unsigned long int id, string email, string senha, string tipoUsuario, string nome) {
    this->id = id;
    this->email = email;
    this->senha = senha;
    this->tipoUsuario = tipoUsuario;
    this->nome = nome;
};

Usuario::Usuario(){};


// Getters e setters

unsigned long int Usuario::getId()
{
    return id;
};

void Usuario::setId(unsigned long int id)
{
    this->id = id;
}

string Usuario::getEmail()
{
    return email;
};

void Usuario::setEmail(string email)
{
    this->email = email;
}

string Usuario::getSenha()
{
    return senha;
};

void Usuario::setSenha(string senha)
{
    this->senha = senha;
}

string Usuario::getTipoUsuario()
{
    return tipoUsuario;
};

void Usuario::setTipoUsuario(string tipoUsuario)
{
    this->tipoUsuario = tipoUsuario;
}

string Usuario::getNome()
{
    return nome;
}

void Usuario::setNome(string nome)
{
    this->nome = nome;
}

/////// Outros métodos ///////

//Converte uma linha da base de dados em objeto
Usuario Usuario::quebraLinha(string a) {
    int contador = 0, contadorSharp = 0;
    string idString, email, senha, tipoUsuario, nome;
    
    for (int i = 0; i < a.size(); i++) {
        vector<char> vt;
        while (contador < a.size() && a[contador] != '#') {
            vt.push_back(a[contador]);
            contador++;
        }
        
        // Converter vetor de char para string correspondente
        string atributo(vt.data(), vt.size());
        
        if (contadorSharp == 0) {
            idString = atributo;
        } else if (contadorSharp == 1) {
            email = atributo;
        } else if (contadorSharp == 2) {
            senha = atributo;
        } else if (contadorSharp == 3) {
            tipoUsuario = atributo;
        } else if (contadorSharp == 4) {
            nome = atributo;
        }
        
        contadorSharp++;
        contador++;
        
        if (contadorSharp >= 5) {
            break;
        }
    }

    //Converte o idString para id inteiro
    unsigned long int id = stoi(idString);


    auto x = Usuario(id, email, senha, tipoUsuario, nome);
    return x;
}


vector<Usuario> Usuario::listarUsuarios() {

  fstream arquivo("usuarios.txt");
  auto vetorUsuarios = vector<Usuario>();

  string linha;
  
  if (arquivo.is_open()) {
    while (getline(arquivo, linha)) {
      Usuario i = quebraLinha(linha);
      vetorUsuarios.push_back(i);
    }
    
  } else {
      cout << "Erro ao abrir o arquivo." << endl;
  }
  
  for (const auto& usuario : vetorUsuarios) {
    cout << usuario << " ";
  }
  
  arquivo.close();
  return vetorUsuarios;

}