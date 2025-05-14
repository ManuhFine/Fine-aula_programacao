/* Exercicio Estacionamento:
# Faça um programa de check in e check out do estacionamento
# O programa precisa gerar um automovel e uma placa aleatória
# Faça um mini menu com "Registro, quantidade de vagas"
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <random>

using namespace std;

struct Pessoa{
	
	string nome;
	int vaga;
	int automovel;
	int placa;
};
	
char gerarLetra() {     // Gera uma letra maiúscula aleatória de A a Z
    return 'A' + rand() % 26;
};

char gerarNumero() {   // Gera um número aleatório de 0 a 9
	return '0' + rand() % 10;
};

// string gerarCar() {   // Gera o automovel
//};

int main(){
	
	// Definir o gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1); // Gera 0 ou 1 aleatoriamente

    // Vetor de palavras
    vector<string> palavras = {"Carro", "Moto"};

    // Aleatorizar a escolha
    int veiculo = dis(gen); // Gera 0 ou 1
    cout << "Novo Veiculo: " << palavras[veiculo] << std::endl;
    
    int letraresul;
	int numresul;
	int resulletra;
	int resulnum;
       
    for (int i = 0; i < 3; i++) { // Gera 3 letras aleatórias
        letraresul += gerarLetra();
    
    for (int i = 0; i < 1; i++) { // Gera 4 números aleatórios
        numresul += gerarNumero();
    }
    for (int i = 0; i < 1; i++) { // Gera 4 números aleatórios
        resulletra += gerarNumero();
	}
	for (int i = 0; i < 2; i++) { // Gera 4 números aleatórios
        resulnum += gerarNumero();
	}
	        
    // Exibe o resultado
    cout << "Automovel: " << letraresul << numresul << resulletra << resulnum << endl;
}

	Pessoa pessoa;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Digite o nome: ";
	getline(cin, pessoa.nome);
	cout << "Digite a vaga: ";
	cin >> pessoa.vaga;
	cout << "Digite o automovel: ";
	cin >> pessoa.automovel;	
	cout << "Digite a placa: ";
	cin >> pessoa.placa;	
	cout << "\nNome: " << pessoa.nome << endl;
	cout << "Vaga: " << pessoa.vaga << endl;
	cout << "\nVeiculo: " << pessoa.automovel << endl;
	cout << "Placa: " << pessoa.placa << endl;


	return 0; 	
}
