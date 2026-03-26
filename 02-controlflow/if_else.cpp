#include <iostream>
#include <clocale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero = 10;
	
	if (numero > 10) {
		cout << "Positivo" << endl; 
	} else {
		cout << "Negativo" <<endl;
	}
	return 0;
}

