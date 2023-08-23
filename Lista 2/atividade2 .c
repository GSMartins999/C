#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

/* Faça um programa em C para ler dois números inteiros A e B e informar se A é divisível por B*/ 

int main() 

{ 

    int n1, n2; 

  

    printf("Informe um número: "); 

    scanf("%d", &n1); 

  

    printf("Informe outro número: "); 

    scanf("%d", &n2); 

  

    if(n1 % n2 == 0){ 

        printf("O número %d é divisível por %d ", n1,n2); 

    } else { 

        printf("Os números não são divisíveis"); 

    } 

  

} 