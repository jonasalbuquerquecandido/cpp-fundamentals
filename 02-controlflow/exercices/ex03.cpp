#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int num;

    cout << "Digite um número: ";
    cin  >> num;

    for (int i = 1; i <= 10; i++){
        cout << num << " X "  << i << ": " << num * i << endl;
        }
    return 0;
}