#include <iostream>
#include <windows.h>
#include "include/MenuPrincipal.h"
#include "include/Usuario.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    //menuPrincipal();

    Usuario user;

    user.listarUsuarios();
    
}

