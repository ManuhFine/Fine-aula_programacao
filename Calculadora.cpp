/* Exercicio Calculadora:
# Faça um programa que calcule a soma, subtração, multiplicação e divisão.
# O programa precisa fazer a leitura dos numeros (inteiros e reais) e exibir o resultado.
# O programa deve ter um menu para o usuário escolher a operação.
# O programa deve continuar executando até que o usuário escolha sair.
# Opcional = Fazer calculos como Média, Porcentagem, Valor Absoluto, entre outros calculos.
*/

#include <iostream> // Biblioteca para entrada e saída de dados
#include <cstdlib> // Biblioteca para funções de utilidade geral
#include <string> // Biblioteca para manipulação de strings
#include <cmath> // Biblioteca para funções matemáticas, como raiz quadrada e potência
#include <ctime> // Biblioteca para manipulação de data e hora
#include <iomanip> // Biblioteca para manipulação de formatação de saída, como precisão decimal

using namespace std; // Usando o namespace std para evitar escrever std:: antes de cada função ou objeto da biblioteca padrão

void exibirMenu2() { // Função para exibir o menu de operações com dois números
    int escolha; // Variável para armazenar a escolha do usuário

    do { // Loop para continuar exibindo o menu até que o usuário decida sair
        cout << "\nQual operação você deseja realizar?\n"; // Exibe as opções de operações disponíveis
        cout << "[1] Soma\n";
        cout << "[2] Subtração\n";
        cout << "[3] Multiplicação\n";
        cout << "[4] Divisão\n";
        cout << "[5] Voltar ao menu principal\n";
        cout << "[6] Outras operações\n";
        cout << "Escolha uma opção: ";
        cin >> escolha; // Lê a escolha do usuário

        if (escolha == 5) { // Se o usuário escolher voltar ao menu principal
            cout << "Voltando ao menu principal...\n"; // Exibe mensagem de retorno
            break; // Sai do loop e volta ao menu principal
        }

        int num1, num2; // Variáveis para armazenar os dois números

        if (escolha >= 1 && escolha <= 4) { // Se a escolha for uma das operações básicas
            cout << "Digite o primeiro número: "; // Solicita o primeiro número ao usuário
            cin >> num1; // Lê o primeiro número
            cout << "Digite o segundo número: "; // Solicita o segundo número ao usuário
            cin >> num2; // Lê o segundo número
        }

        switch (escolha) { // Estrutura de controle para executar a ação baseada na escolha do usuário
            case 1: // Caso o usuário escolha soma
                cout << "Resultado da soma: " << num1 + num2 << endl; // Exibe o resultado da soma
                break; 
            case 2: // Caso o usuário escolha subtração
                cout << "Resultado da subtração: " << num1 - num2 << endl; // Exibe o resultado da subtração
                break;
            case 3: // Caso o usuário escolha multiplicação
                cout << "Resultado da multiplicação: " << num1 * num2 << endl; // Exibe o resultado da multiplicação
                break;
            case 4: // Caso o usuário escolha divisão
                if (num2 != 0) { // Verifica se o divisor não é zero
                    cout << "Resultado da divisão: " << static_cast<double>(num1) / num2 << endl; // Exibe o resultado da divisão
                } else { // Se o divisor for zero
                    cout << "Erro: divisão por zero.\n"; // Exibe mensagem de erro
                }
                break;
            case 6: { // Caso o usuário escolha outras operações
                int opcaoExtra; // Variável para armazenar a escolha de operações extras
                do { // Loop para continuar exibindo as opções de operações extras até que o usuário decida voltar
                    cout << "\nOutras operações:\n"; // Exibe as opções de operações extras
                    cout << "[1] Média\n";
                    cout << "[2] Porcentagem\n";
                    cout << "[3] Valor absoluto\n";
                    cout << "[4] Voltar\n";
                    cout << "Escolha uma opção: ";
                    cin >> opcaoExtra; // Lê a escolha do usuário para operações extras 

                    switch (opcaoExtra) { // Estrutura de controle para executar a ação baseada na escolha do usuário
                        case 1: { // Caso o usuário escolha média
                            double n1, n2; // Variáveis para armazenar os números para cálculo da média
                            cout << "Digite o primeiro número: "; // Solicita o primeiro número ao usuário
                            cin >> n1; // Lê o primeiro número
                            cout << "Digite o segundo número: "; // Solicita o segundo número ao usuário
                            cin >> n2; // Lê o segundo número 
                            cout << "Média: " << (n1 + n2) / 2 << endl; // Exibe o resultado da média
                            break;
                        }
                        case 2: { // Caso o usuário escolha porcentagem
                            double total, parte; // Variáveis para armazenar o valor total e a parte
                            cout << "Digite o valor total: "; // Solicita o valor total ao usuário
                            cin >> total; // Lê o valor total
                            cout << "Digite a parte: "; // Solicita a parte ao usuário
                            cin >> parte; // Lê a parte
                            if (total != 0) // Verifica se o total não é zero
                                cout << "Porcentagem: " << (parte / total) * 100 << "%" << endl; // Exibe o resultado da porcentagem
                            else // Se o total for zero
                                cout << "Erro: valor total não pode ser zero." << endl; // Exibe mensagem de erro
                            break;
                        }
                        case 3: { // Caso o usuário escolha valor absoluto
                            double valor; // Variável para armazenar o valor
                            cout << "Digite um número: "; // Solicita um número ao usuário
                            cin >> valor; // Lê o número
                            cout << "Valor absoluto: " << (valor < 0 ? -valor : valor) << endl; // Exibe o valor absoluto do número
                            break;
                        }
                        case 4: // Caso o usuário escolha voltar
                            cout << "Voltando para o menu anterior...\n"; // Exibe mensagem de retorno
                            break;
                        default: // Se o usuário escolher uma opção inválida
                            cout << "Opção inválida.\n"; // Se o usuário escolher uma opção inválida, exibe mensagem de erro
                    }
                } while (opcaoExtra != 4); // Loop continua até que o usuário escolha voltar
                break;
            }
            default: // Se o usuário escolher uma opção inválida
                cout << "Opção inválida. Escolha novamente.\n"; // Exibe mensagem de erro
        }

    } while (true); // Loop continua até que o usuário escolha voltar ao menu principal
}


void exibirMenu3() { // Função para exibir o menu de operações com três números
    // repete a lógica do menu de dois números, mas com três números
    int escolha;

    do {
        cout << "\nQual operação você deseja realizar?\n";
        cout << "[1] Soma\n";
        cout << "[2] Subtração\n";
        cout << "[3] Multiplicação\n";
        cout << "[4] Divisão\n";
        cout << "[5] Voltar ao menu principal\n";
        cout << "[6] Outras operações\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        if (escolha == 5) {
            cout << "Voltando ao menu principal...\n";
            break;
        }

        int num1, num2, num3; // Variáveis para armazenar os três números

        if (escolha >= 1 && escolha <= 4) {
            cout << "Digite o primeiro número: ";
            cin >> num1;
            cout << "Digite o segundo número: ";
            cin >> num2;
            cout << "Digite o terceiro número: ";
            cin >> num3; // Lê os três números
        }

        switch (escolha) {
            case 1:
                cout << "Resultado da soma: " << num1 + num2 + num3 << endl;
                break;
            case 2:
                cout << "Resultado da subtração: " << num1 - num2 - num3 << endl;
                break;
            case 3:
                cout << "Resultado da multiplicação: " << num1 * num2 * num3 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado da divisão: " << static_cast<double>(num1) / num2 / num3 << endl;
                } else {
                    cout << "Erro: divisão por zero.\n";
                }
                break;
            case 6: {
                int opcaoExtra;
                do {
                    cout << "\nOutras operações:\n";
                    cout << "[1] Média ponderada\n";
                    cout << "[2] Hipotenusa\n";
                    cout << "[3] Gorjeta\n";
                    cout << "[4] Voltar\n";
                    cout << "Escolha uma opção: ";
                    cin >> opcaoExtra;

                    switch (opcaoExtra) {
                        case 1: {
                            double n1, n2, p1, p2; // Variáveis para armazenar os números e seus pesos
                            cout << "Digite o primeiro número: ";
                            cin >> n1;
                            cout << "Digite o peso do número: ";
                            cin >> p1;
                            cout << "Digite o segundo número: ";
                            cin >> n2;
                            cout << "Digite o peso do número: ";
                            cin >> p2;
                            double mediaPonderada = (n1 * p1 + n2 * p2) / (p1 + p2);
                            cout << "Média ponderada: " << mediaPonderada << endl;
                            break;
                        }
                        case 2: {
                            double cateto1, cateto2, hipotenusa;
                            cout << "Digite o valor do primeiro cateto: ";
                            cin >> cateto1;
                            cout << "Digite o valor do segundo cateto: ";
                            cin >> cateto2;
                            hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); // Calcula a hipotenusa usando o Teorema de Pitágoras
                            cout << "O valor da hipotenusa é: " << hipotenusa << endl;
                            break;
                        }
                        case 3: {
                            double valorConta, percentual, total, gorjeta;
                            cout << "Digite o valor da conta: ";
                            cin >> valorConta;
                            cout << "Digite a porcentagem a adicionar (exemplo: 10 para 10%): ";
                            cin >> percentual;
                             gorjeta = valorConta * (percentual / 100);
                            total = valorConta + gorjeta;
                            cout << fixed << setprecision(2);  // fixa 2 casas decimais
                            cout << "Valor da gorjeta: " << gorjeta << endl;
                            cout << "Valor total com gorjeta: " << total << endl;
                            break;
                        }
                        case 4:
                            cout << "Voltando para o menu anterior...\n";
                            break;
                        default:
                            cout << "Opção inválida.\n";
                    }
                } while (opcaoExtra != 4);
                break;
            }
            default:
                cout << "Opção inválida. Escolha novamente.\n";
        }

    } while (true);
}

void exibirMenu4() { // Função para exibir o menu de operações com quatro números
    // repete a lógica do menu de dois números, mas com quatro números
    int escolha;

    do {
        cout << "\nQual operação você deseja realizar?\n";
        cout << "[1] Soma\n";
        cout << "[2] Subtração\n";
        cout << "[3] Multiplicação\n";
        cout << "[4] Divisão\n";
        cout << "[5] Voltar ao menu principal\n";
        cout << "[6] Outras operações\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        if (escolha == 5) {
            cout << "Voltando ao menu principal...\n";
            break;
        }

        int num1, num2, num3, num4; // Variáveis para armazenar os quatro números

        if (escolha >= 1 && escolha <= 4) {
            cout << "Digite o primeiro número: ";
            cin >> num1;
            cout << "Digite o segundo número: ";
            cin >> num2;
            cout << "Digite o terceiro número: ";
            cin >> num3;
            cout << "Digite o quarto número: ";
            cin >> num4; // Lê os quatro números
        }

        switch (escolha) {
            case 1:
                cout << "Resultado da soma: " << num1 + num2 + num3 + num4 << endl;
                break;
            case 2:
                cout << "Resultado da subtração: " << num1 - num2 - num3 - num4<< endl;
                break;
            case 3:
                cout << "Resultado da multiplicação: " << num1 * num2 * num3 * num4 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado da divisão: " << static_cast<double>(num1) / num2 / num3 / num4 << endl;
                } else {
                    cout << "Erro: divisão por zero.\n";
                }
                break;
            case 6: {
                int opcaoExtra;
                do {
                    cout << "\nOutras operações:\n";
                    cout << "[1] Juros Simples\n";
                    cout << "[2] Contar Dias\n";
                    cout << "[3] Rendimento SELIC\n";
                    cout << "[4] Voltar\n";
                    cout << "Escolha uma opção: ";
                    cin >> opcaoExtra;

                    switch (opcaoExtra) {
                        case 1: {
                            double capital, taxa, tempo, juros, montante;
                            cout << "Digite o capital inicial (R$): ";
                            cin >> capital;
                            cout << "Digite a taxa de juros (% ao período): ";
                            cin >> taxa;
                            cout << "Digite o tempo (número de períodos): ";
                            cin >> tempo;
                            juros = capital * (taxa / 100) * tempo;
                            montante = capital + juros;
                            cout << fixed << setprecision(2);
                            cout << "Juros: R$ " << juros << endl;
                            cout << "Montante final: R$ " << montante << endl;
                            break;
                        }
                        case 2: {
                            tm data1 = {};
                            tm data2 = {};
                            int dia1, mes1, ano1;
                            int dia2, mes2, ano2;
                            cout << "\nDigite a primeira data (dd mm aaaa): ";
                            cin >> dia1 >> mes1 >> ano1;
                            cout << "Digite a segunda data (dd mm aaaa): ";
                            cin >> dia2 >> mes2 >> ano2;
                            // Verifica se as datas são válidas
                            data1.tm_year = ano1 - 1900;
                            data1.tm_mon  = mes1 - 1;
                            data1.tm_mday = dia1;
                            //
                            data2.tm_year = ano2 - 1900;
                            data2.tm_mon  = mes2 - 1;
                            data2.tm_mday = dia2;
                            // Converte as estruturas tm para time_t
                            time_t t1 = mktime(&data1);
                            time_t t2 = mktime(&data2);
                            if (t1 == -1 || t2 == -1) {
                                cout << "Erro ao calcular as datas.\n";
                                return;
                            }
                            // Garante que data1 <= data2
                            if (difftime(t1, t2) > 0) {
                            swap(t1, t2);
                            swap(data1, data2);
                            }
                            // Diferença total em dias
                            double diferencaSegundos = difftime(t2, t1);
                            int diasTotais = diferencaSegundos / (60 * 60 * 24);
                            // Cálculo aproximado de anos/meses/dias
                            int anos = data2.tm_year - data1.tm_year;
                            int meses = data2.tm_mon - data1.tm_mon;
                            int dias = data2.tm_mday - data1.tm_mday;
                            if (dias < 0) {
                                dias += 30;  // aproximação
                                 meses--;
                            }
                            if (meses < 0) {
                                meses += 12;
                                anos--;
                            }
                            cout << "\nDiferença entre as datas:" << endl;
                            cout << diasTotais << " dias no total." << endl;
                            cout << anos << " anos, " << meses << " meses e " << dias << " dias (aproximadamente)." << endl;
                            break;
                        }
                        case 3: {
                            double capital, selicAnual, rendimento, montante;
                            int dias;
                            cout << "\nDigite o valor investido (R$): ";
                            cin >> capital;
                            cout << "Digite a taxa SELIC anual (%): ";
                            cin >> selicAnual;
                            cout << "Digite o tempo de aplicação (em dias): ";
                            cin >> dias;
                            double taxaDiaria = pow(1 + selicAnual / 100, 1.0 / 365) - 1;
                            montante = capital * pow(1 + taxaDiaria, dias);
                            rendimento = montante - capital;
                            cout << fixed << setprecision(2);
                            cout << "\nMontante final: R$ " << montante << endl;
                            cout << "Rendimento: R$ " << rendimento << endl;
                            break;
                        }
                        case 4:
                            cout << "Voltando para o menu anterior...\n";
                            break;
                        default:
                            cout << "Opção inválida.\n";
                    }
                } while (opcaoExtra != 4);
                break;
            }
            default:
                cout << "Opção inválida. Escolha novamente.\n";
        }

    } while (true);
}


int main() { // Função principal do programa
    int opcao; // Variável para armazenar a opção escolhida pelo usuário

    do { // Loop para continuar exibindo o menu principal até que o usuário decida sair
        cout << "\nﾟ•*¨*•.¸¸☆*･ﾟ CALCULADORA ･*☆¸¸.•*¨*•\n"; // Exibe o título do programa
        cout << "Você deseja realizar a operação com quantos números?\n"; // Solicita ao usuário a quantidade de números para a operação
        cout << "[1] Dois números\n";
        cout << "[2] Três números\n";
        cout << "[3] Quatro números\n";
        cout << "[4] Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao; // Lê a opção escolhida pelo usuário

        switch (opcao) { // Estrutura de controle para executar a ação baseada na opção escolhida
            case 1: // Caso o usuário escolha realizar a operação com dois números
                cout << "Você escolheu calcular com 2 números.\n";
                exibirMenu2(); // Chama a função para exibir o menu de operações com dois números
                break;
            case 2: // Caso o usuário escolha realizar a operação com três números
                cout << "Você escolheu calcular com 3 números..\n";
                exibirMenu3(); // Chama a função para exibir o menu de operações com três números
                break;
            case 3: // Caso o usuário escolha realizar a operação com quatro números
                cout << "Você escolheu calcular com 4 números..\n";
                exibirMenu4(); // Chama a função para exibir o menu de operações com quatro números
                break;
            case 4: // Caso o usuário escolha sair
                cout << "Saindo do programa.\n";
                return 0; // Encerra o programa
            default: // Se o usuário escolher uma opção inválida
                cout << "Opção inválida. Escolha novamente.\n";
        }

    } while (true); // Loop continua até que o usuário escolha sair

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
