#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int arr[5] = {1, 3, 5, 7, 9};
    int target = 5; 

    for (int i = 0; i < 5; i++) { // O i pegará o valor do parâmetro do array
        if (arr[i] == target) {
            cout << "Encontrado na posição " << i << endl; 
        }
    }
    return 0;
}