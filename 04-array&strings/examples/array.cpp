#include <iostream>
#include <clocale>
using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");

	int numeros[5] = {1, 2, 3, 4, 5};
	
	// Percorre o array
	for (int i = 0; i < 5; i++) {
		cout << numeros[i] << endl; //Acessa cada posi��o a posi� i =0 enqunto < 0 = I++
 	}
 	return 0;
}
