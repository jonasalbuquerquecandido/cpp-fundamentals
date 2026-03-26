#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int dia = 1;
	
	switch (dia) {
		case 1: cout << "Domingo";
		break;
		case 2: cout << "Segunda";
		break;
		case 3: cout << "Outro dia";
	}
	return 0;
}
