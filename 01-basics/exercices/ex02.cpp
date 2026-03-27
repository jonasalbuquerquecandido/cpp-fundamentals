#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2, soma;

    cout << "Digite um número: ";
    cin >> num1;
    cout << "Digite outro número: ";
    cin >> num2;
    soma = num1 + num2;
    cout << "A soma de " << num1 << " e " << num2 << " é: " << soma << endl;
    return 0;
}
