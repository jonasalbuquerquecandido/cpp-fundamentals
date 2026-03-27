#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int num;

    cout << "Digite um número: ";
    cin >> num;

    for (int i = num; i >= 0; i--) {
        cout << i << endl;
    }
    return 0;
}