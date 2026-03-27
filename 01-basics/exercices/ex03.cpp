#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2, n3, media;

    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;
    media = (n1 + n2 + n3)/3;

    cout << " A média dos números " << n1 << " " << n2 << " e " << n3 << " é " << media << endl;
    return 0;
}