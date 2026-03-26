#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int i = 0;
	
	// While executa a condição enquanto for verdadeira
	while (i < 5 ){
		cout << i << endl;
		i++; // Altera o valor da variável
	}
	
	return 0;
}
