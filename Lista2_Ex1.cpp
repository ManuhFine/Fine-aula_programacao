#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
};

int main(){
	Pessoa pessoa;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Digite o nome: ";
	getline(cin, pessoa.nome);
	cout << "Digite a idade: ";
	cin >> pessoa.idade;
	cout << "\nNome: " << pessoa.nome << endl;
	cout << "Idade: " << pessoa.idade << endl;
	return 0; 	
}