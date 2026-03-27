#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int num;

    cout << "Digite um número: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "PAR";
    } else {
        cout << "IMPAR";
    }
    return 0;
}