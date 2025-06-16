//Para lembrar...
//Crie variaveis, onde cada uma, faça uma operação matematica com os valores digitados.
//Opcional = Fazer o usuario digitar valores diferentes para cada variavel.

#include <stdio.h> //Fornece funções para entrada e saida de dados.
#include <stdlib.h> //Fornece funções de uso geral, especialmente relacionadas a: gerenciamento de memoria, conversão de tipos, controle de processos.
#include <locale.h> //Permite configurar o idioma, formatação de números, datas, e acentuação de acordo com a localidade (região/país).

//Função principal do programa
void main() { 
    
    //Para configurar a linguagem
    setlocale(LC_ALL,"");
    
    //Define as variaveis:
    int a, b;
    
	//Pede para o usuario digitar valores para as variaveis
	printf("Para fazer os diversos calculos, digite apenas numeros inteiros\n"); //imprime na tela, 
	printf("Digite o primeiro valor: "); //pedindo para digitar um numero.
    scanf("%d", &a); //lê e salva o digito.
    printf("Digite o segundo valor: "); 
    scanf("%d", &b);

    //Aqui, o sistema vai fazer os calculos e imprimir os resultado
	//Soma
	printf("\n A soma de %d e %d = %d",a, b, a + b);

	//Subtração
	printf("\n A subtracao de %d e %d = %d",a, b, a - b);

	//Divisão
	printf("\n A divisao de %d e %d = %d",a, b, a / b);

	//Multiplicação
	printf("\n A multiplicacao de %d e %d = %d",a, b, a * b);
	
	//Média dos valores
	printf("\n A média de %d e %d = %d",a, b, (a + b) / 2);

	//Pausa o programa após executar
	system("pause");

}
