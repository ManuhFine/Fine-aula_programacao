//Simulando um calculo básico de notas
//Crie um algoritmo que leia 2 notas e calcule a média entre elas, sendo que, cada uma tem um peso de 5.
//Opcional = Baseando-se em uma média de 7.0, faça com que imprima se o aluno foi aprovado ou reprovado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
    setlocale(LC_ALL, "");
 
    float nota1, nota2, resultado; //define as variaveis
 
    printf("Digite as 2 notas:\n"); //imprime na tela pedindo para digitar a 1°nota
    scanf("%f %f", &nota1, &nota2); //lê e salva o digito.

    resultado = ((nota1*5) + (nota2*5) ) / 10; //Aqui, ele vai somar as notas e depois dividir, para tirar a média
    printf("A média é: %.1f", resultado); // Aqui, ele ja imprime o resultado da soma, sem mostrar o calculo (%.1f = mostrar apenas aquele numero de casa decimais).
    
    if (resultado >= 7.0) {
    printf("\nAluno aprovado!\n");
} else {
    printf("\nAluno reprovado.\n");
}
 
}
