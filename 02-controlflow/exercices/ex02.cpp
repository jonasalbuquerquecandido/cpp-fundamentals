#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);
    
    int n1, n2, n3;
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;
    if ((n1 > n2) & (n1 > n3)) {
        cout << "O maior número é: " << n1 << endl;
    }
    if ((n2 > n1) & (n2 > n3)) {
        cout << "O maior número é: " << n2 << endl;
    } else {
        cout << "O maior número é: " << n3 << endl;
    }
    return 0;
} 
