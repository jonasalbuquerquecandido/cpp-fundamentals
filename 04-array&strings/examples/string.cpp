#include <iostream>
#include <clocale>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	string nome = "Jonas";
	
	// Mostra o tamanho da string
	cout << "Tamanho: " <<nome.length() << endl;
	
	// Acessa o primeiro caractere
	cout << "Primeira letra: " << nome[0] << endl;
	cout << "Quinta letra: " << nome[4] << endl;
	return 0;
}
