```cpp

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
    double height;
    double weight;
    string classe;
};

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    Pessoa pessoa;
    
    cout << "Para calcular seu IMC, preencha os dados:\n";
    cout << "Digite o nome: ";
    getline (cin, pessoa.nome);
    cout << "Digite a idade: ";
    cin >> pessoa.idade;
    cin.ignore();
    cout << "Digite a sua altura (em metros): ";
    cin >> pessoa.height;
    cout << "Digite o seu peso (em KG): ";
    cin >> pessoa.weight;
    
    //Calcula e armazana o calculo do IMC    
    double imc = pessoa.weight / (pessoa.height * pessoa.height);
    
    // determina a classe do IMC
    if (imc <= 18.5) {
        pessoa.classe = "Você está abaixo do peso para a sua altura.";
        } else if (imc <= 24.9){
            pessoa.classe = "Você está com o peso normal para a sua altura.";
        } else if (imc <= 29.9){
            pessoa.classe = "Você está com sobrepeso para a sua altura.";
        } else if (imc <= 34.9){
            pessoa.classe = "Você está com obesida grau I para a sua altura.";
        }else if (imc <= 39.9){
            pessoa.classe = "Você está com obesidade grau II para a sua altura.";
        } else {
            pessoa.classe = "Você está com obesidade grau III ou móbita para a sua altura.";
        };
        
    //Aqui imprime as informações
    cout << "\n===== RESULTADO =====" << endl;
    cout << "Nome: " << pessoa.nome  << endl;
    cout << "Idade: " << pessoa.idade << " anos" << " ";
        if (pessoa.idade >= 18) {
            cout << "(Você é maior de idade).\n";
           } else {
            cout << "(Você é menor de idade).\n";
        };
    cout << "Altura: " << pessoa.height << " m" << endl;
    cout << "Peso: " << pessoa.weight << " kg" << endl;
    cout << "IMC: " << pessoa.classe << endl;

    return 0;  
}```
