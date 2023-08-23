#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
/* Faça um programa em C para ler dois números inteiros e informar qual o maior ou se são iguais.*/ 

int main() 

{ 

    int n1, n2; 

  

    printf("Informe um número: "); 

    scanf("%d", &n1); 

  

    printf("Informe um número: "); 

    scanf("%d", &n2); 

  

    if(n1 > n2){ 

        printf("O número %d é maior que o número %d ", n1,n2); 

    } else if(n2 > n1){ 

        printf("O númeoro %d é maior que o %d ", n2,n1); 

    } else { 

        printf("Os números são iguais"); 

    } 

  

} 

 