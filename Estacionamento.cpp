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
#include <vector>

using namespace std;

struct Pessoa{
	
	string nome;
	int vaga;
	int automovel;
	int placa;
};

void cadastro(vector<Pessoa>& pessoas){
		Pessoa pessoa;
	
		cout << "Digite o nome: ";
		getline(cin, pessoa.nome);
		cout << "Digite a vaga: ";
		cin >> pessoa.vaga;
		cout << "Digite o automovel: ";
		cin >> pessoa.automovel;	
		cout << "Digite a placa: ";
		cin >> pessoa.placa;
		//add a "pessoa" no vetor
		pessoas.push_back(pessoa);
}

void exibirPessoas(const vector<Pessoa>& pessoas) {
    for (const auto& pessoa : pessoas) { // Percorre cada elemento (Pessoa) do vetor
        cout << "\nNome: " << pessoa.nome << endl;
        cout << "\nVaga: " << pessoa.vaga << endl;
        cout << "\nVeiculo: " << pessoa.automovel << endl;
        cout << "\nPlaca: " << pessoa.placa << endl;
        cout << "-----------------------------" << endl;
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
	
	vector<Pessoa> pessoas; //inicializa o vetor

	int escolha;
	
	while (true) {
		
	// Painel de escolhas, precisa add uma boleana e no final validar se é vdd ou false
	cout << " ============== > Registro do Estacionamento < ============== ";
	cout << "\nUm veiculo se aproxima.";
	cout << "\n- VEICULO ALEATÓRIO - de placa: -PLACA-, ocupou a vaga: -VAGA-.";
	cout << "\nFaça o registro.";
	cout << "\n";
	cout << "\n[1] Registrar Veiculo.";
	cout << "\n[2] Próximo Veiculo.";
	cout << "\n[3] Ver Vagas.";
	cout << "\n[4] Sair.";
	cout << "\n";
	cout << "\nEscolha uma opção: ";
	// Captura da escolha do usuário
	cin >> escolha;
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer do teclado após ler um inteiro

	//Processamento da escolha
	switch (escolha) {
		case 1:
			cout << "\nOpção de Registro escolhida.";
			cout << "\nCarregando...\n";
			cadastro(pessoas);
			break;
		case 2:
			cout << "\nOpção de Liberar o Portão escolhida.\n";
			cout << "\nPortão Liberado.";
			break;
		case 3:
			cout << "\nOpção de Vagas esolhida.";
			cout << "\nCarregando...";
			exibirPessoas(pessoas);
			break;
		case 4:
			cout << "Saindo... Até logo!";
			return 0;
		default:
			cout << "Opção Inválida. Por favor, escolha uma válida.";
			break;
	}
	
	    // Pausa para dar tempo de visualizar a saída antes de voltar ao menu
        cout << "\nPressione qualquer tecla para voltar ao menu...";
        cin.get(); // Espera o usuário pressionar uma tecla para continuar
        cout << endl;

	
return 0;

}
}
