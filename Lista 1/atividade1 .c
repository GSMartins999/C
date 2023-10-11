#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Fazer um programa em C que solicita um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros. 

  

int main() 

{ 

     

    int metros; 

    printf("Digite um valor em metros: "); 

    scanf("%d", &metros); 

    printf("O valor em metros foi: %d\n", metros); 

     

    printf("O valor de metros em decimetro é: %d\n", metros*10); 

    printf("O valor de metros em centímetros é: %d\n", metros*100); 

    printf("O valor de metros em milimetros é: %d\n", metros*1000); 

  

    return 0; 

} 
