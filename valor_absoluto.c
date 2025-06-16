//Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
    setlocale(LC_ALL, "");
    
    int valor1, valor2;
 
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("A diferença entre os dois é: %d", abs(valor1 - valor2) );
 
}
