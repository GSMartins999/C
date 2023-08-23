#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Faça um programa em C que solicite ao usuário informar um número inteiro e apresente na 

// tela seu sucessor e seu antecessor. 

  

int main() 

{ 

     

    int numero; 

    printf("Digite um número: "); 

    scanf("%d", &numero); 

     

    printf("O número digitado foi: %d\n", numero); 

    printf("O seu sucessor é: %d\n", numero+1); 

    printf("O seu antecessor é: %d\n", numero-1); 

     

    return 0; 

} 