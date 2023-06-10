#include <iostream>
#include <windows.h>
#include "include/MenuPrincipal.h"
#include "include/Ingrediente.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Ingrediente i = Ingrediente();

    i.listarIngredientes();
    //menuPrincipal();

}

