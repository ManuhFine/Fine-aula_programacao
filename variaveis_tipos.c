//Exercicio para lembrar os tipos de variaveis...

#include <stdio.h>
#include <locale.h>
 
void main(){
 
	//Permite usar acentos
	setlocale(LC_ALL,"");
 
    //Imprime Olá
    printf("Olá \n");
    
    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);
    
    //Lendo valor quebrado
    int b = 5.5;
    printf("O valor de b é = %d \n", b);
    scanf("%f", &b);
    printf("O valor de a mudou para %f", b);
    
    //Lendo letra
    char letra = 't';
    printf("O valor de c é = %d \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);
}
