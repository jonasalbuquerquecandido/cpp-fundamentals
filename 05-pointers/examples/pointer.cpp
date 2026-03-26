#include <iostream>

using namespace std;

// Pointers

int main () {
	
	int x = 10;
	
	int* p = &x;
	
	cout << "Valor: " << x << endl;
	
	cout << "Endereço: " << p << endl;
	
	cout << "Valor via ponteiro: " << *p << endl;
	
	return 0;
	
}


