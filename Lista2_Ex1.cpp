/* Exercicio Struct:
# Faça um programa para digitar nome e idade
# Faça o programa mostrar nome e idade descrito e se a pessoa é ou não maior de idade
*/


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
