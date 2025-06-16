//Simulando um calculo básico de notas
//Crie um algoritmo que leia 3 notas e calcule a média entre elas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
    setlocale(LC_ALL, "");
 
    float nota1, nota2, nota3, resultado; //define as variaveis
 
    printf("Digite a primeira nota:\n"); //imprime na tela pedindo para digitar a 1°nota
    scanf("%f", &nota1); //lê e salva o digito.

    printf("Digite a segunda nota:\n"); //imprime na tela pedindo para digitar a 2°nota
    scanf("%f", &nota2); //lê e salva o digito.
    
    printf("Digite a terceira nota:\n"); //imprime na tela pedindo para digitar a 3°nota
    scanf("%f", &nota3); //lê e salva o digito.

    resultado = (nota1 + nota2 + nota3) / 3; //Aqui, ele vai somar as notas e depois dividir, para tirar a média
    printf("A média é: %f", resultado); // Aqui, ele ja imprime o resultado da soma, sem mostrar o calculo.
 
}
