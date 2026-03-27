#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    int arr[5] = {5, 3, 2, 4, 1}; // Criação do array
    bool swapped;

    for (int i = 0; i < 5; i++){  // Criação do loop do array i para em cada posição até menor que 5 // controla a passagem pelo array
        swapped = false;
        for (int j = 0; j < 4; j++) { // Criação de uma segunda variável j  // deve percorrer o array interno e trocar os elementos
            if (arr[j] > arr[j + 1]) { // Se a variável j é maior é j mair 1 entao:
                int temp = arr[j]; // Criação da variável temp interia que recebe arr j
                arr[j] = arr[j + 1]; //arr j recbe array j mais 
                arr[j + 1] = temp; // arrya j + 1 recebe temp
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}