#include <iostream>
#include <windows.h>
#include "include/MenuPrincipal.h"
#include "include/Sabor.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Sabor s = Sabor();

    for(Sabor sabor : s.listarSabores()){
        cout << sabor << "  \n";
    }


    //menuPrincipal();

}

