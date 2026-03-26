#include <iostream>
#include <windows.h>

using namespace std;

    struct Pessoa{
        string nome;
        int idade;
    };

    int main() {
        SetConsoleOutputCP(CP_UTF8);
        Pessoa p1; // Cria variável do tipo struct

        // Atribui valores
        p1.nome = "Jonas";
        p1.idade = 20;

        // Exibe dados
        cout << p1.nome << " tem " << p1.idade << " anos";
        return 0;
    }
