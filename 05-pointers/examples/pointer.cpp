#include <iostream>
#include <clocale>
using namespace std;

// Pointers
// São como setas que indicam onde está um valor de uma memória.
int main () {
	setlocale(LC_ALL, "Portuguese");
	int x = 10;
	
	int* p = &x; // int* p é um ponteiro para p - &x é o endereço de memória da var x - p passa a armazenar o valor de x.
	
	cout << "Valor: " << x << endl; 
	
	cout << "Endere�o: " << p << endl; // Imprimimos o conteúdo de p - que é o endereço da memória dex.
	
	cout << "Valor via ponteiro: " << *p << endl; // *p é o operador de desreferência que retorna 10s2kkk
	
	return 0;
	
}


