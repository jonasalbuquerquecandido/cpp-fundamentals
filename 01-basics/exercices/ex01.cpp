#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);

    string nome;

    cout << "Nome de usuário: ";
    cin >> nome;
    cout << "Olá, " << nome << endl;
    return 0;
}