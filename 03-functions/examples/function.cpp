#include <iostream>
#include <clocale>
using namespace std;

// Função que soma dois números - retorna o resultado da operação	
	int soma(int a, int b) {
		return a + b;
	}
	
// Criar o escopo para ler os dados obtidos pela função - referenciar a função
	int main () {
		setlocale(LC_ALL,"Portuguese");
		cout << soma(3, 9);
		return 0;
	}
