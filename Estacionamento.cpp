/* Exercicio Estacionamento:
# Faça um programa de check in e check out do estacionamento
# O programa precisa gerar um automovel e uma placa aleatória
# Faça um mini menu com "Registro, quantidade de vagas"
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <random>
#include <vector>

using namespace std;

const int TOTAL_VAGAS = 10; // ou qualquer número de vagas

// Funções para geração aleatória de veículo e placa
string gerarTipoVeiculo() {
    static mt19937 rng(time(nullptr));
    uniform_int_distribution<int> dist(0, 1); // 0 para carro, 1 para moto
    return dist(rng) == 0 ? "Carro" : "Moto";
}

string gerarPlaca() {
    static mt19937 rng(time(nullptr));
    uniform_int_distribution<int> letraDist('A', 'Z');
    uniform_int_distribution<int> numeroDist(0, 9);

    string placa;
    for (int i = 0; i < 3; ++i) placa += static_cast<char>(letraDist(rng));
    placa += to_string(numeroDist(rng));
    placa += static_cast<char>(letraDist(rng));
    for (int i = 0; i < 2; ++i) placa += to_string(numeroDist(rng));
    return placa;
}

// Estrutura de dados do veículo
struct Veiculo {
    string nome;
    int vaga;
    string automovel;
    string placa;
};

// Cadastro do veículo
void cadastro(vector<Veiculo>& veiculos) {
    if (veiculos.size() >= TOTAL_VAGAS) {
        cout << "\nEstacionamento cheio! Não é possível registrar novo veículo.\n";
        return;
    }

    Veiculo veiculo;
    cout << "Novo veículo detectado.\n";
    veiculo.automovel = gerarTipoVeiculo();
    veiculo.placa = gerarPlaca();
    cout << "\nVeículo: " << veiculo.automovel;
    cout << "\nPlaca: " << veiculo.placa << endl;
    
    cout << "Digite o nome do motorista: ";
    getline(cin, veiculo.nome);
    cout << "Digite a vaga ocupada: ";
    cin >> veiculo.vaga;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    veiculos.push_back(veiculo);
    cout << "\nVeículo registrado com sucesso!\n";
}

// Exibição de veículos registrados
void exibirVeiculos(const vector<Veiculo>& veiculos) {
    if (veiculos.empty()) {
        cout << "\nNenhum veículo registrado ainda.\n";
        return;
    }

    for (const auto& veiculo : veiculos) {
        cout << "\nNome do motorista: " << veiculo.nome;
        cout << "\nVaga ocupada: " << veiculo.vaga;
        cout << "\nVeículo: " << veiculo.automovel;
        cout << "\nPlaca: " << veiculo.placa;
        cout << "\n-----------------------------\n";
    }
}

// Exibição de veículos registrados, para remoção.
void removerVeiculo(vector<Veiculo>& veiculos) {
    if (veiculos.empty()) {
        cout << "\n Nenhum veículo registrado para remover.\n";
        return;
    }

    string placaBusca;
    cout << "\nDigite a placa do veículo que deseja remover: ";
    getline(cin, placaBusca);

    for (auto it = veiculos.begin(); it != veiculos.end(); ++it) {
        if (it->placa == placaBusca) {
            cout << "\nVeículo removido com sucesso!";
            cout << "\nMotorista: " << it->nome;
            cout << "\nPlaca: " << it->placa << "\n";
            veiculos.erase(it); // remove da lista
            return;
        }
    }

    cout << "\nPlaca não encontrada.\n";
}

int main() {

    vector<Veiculo> veiculos; // Lista de veículos
    int escolha;
    
    while (true) {
        // Menu
        cout << "\n ============== > Registro do Estacionamento < ============== ";
        cout << "\n[1] Registrar Veículo";
        cout << "\n[2] Remover Veículo";
        cout << "\n[3] Ver Vagas Ocupadas";
        cout << "\n[4] Sair";
        cout << "\nEscolha uma opção: ";
        cin >> escolha;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa buffer

        switch (escolha) {
            case 1:
                cout << "\nOpção de Registro escolhida.\n";
                cadastro(veiculos);
                break;
            case 2:
                cout << "\nOpção de Remover Veículo escolhida.\n";
                removerVeiculo(veiculos);
                break;
            case 3:
                cout << "\nVeículos registrados:\n";
                exibirVeiculos(veiculos);
                cout << "\nVagas ocupadas: " << veiculos.size();
                cout << "\nVagas disponíveis: " << (TOTAL_VAGAS - veiculos.size()) << " de " << TOTAL_VAGAS << "\n";
                break;
            case 4:
                cout << "\nSaindo... Até logo!";
                return 0;
            default:
                cout << "\nOpção inválida. Tente novamente.\n";
                break;
        }

        // Pausa para visualizar a saída antes de voltar ao menu
        cout << "\nPressione Enter para voltar ao menu...";
        cin.get();
    }

    return 0;
}
