#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int* ptr = new int; // Reseva espaço na memória para um número inteiro.

    *ptr = 25; // Atribuição do valor para ptr

    cout << *ptr << endl; // Exibe o valor armazenado na memória do ptr.

    delete ptr; // Libera o espaço da memória que foi reservado com new.

    return 0; // Indica que o programa terminou com sucesso.
}