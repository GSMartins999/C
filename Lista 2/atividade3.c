#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
/* Faça um programa em C que receba do usuário 3 (três) valores X, Y, Z e imprima na tela se a soma de X + Y 

é menor, maior ou igual a Z.*/ 

int main() 

{ 

    int x, y, z; 

  

    printf("Informe um número: "); 

    scanf("%d", &x); 

  

    printf("Informe um número: "); 

    scanf("%d", &y); 

  

    printf("Informe um número: "); 

    scanf("%d", &z); 

  

    if(x + y > z){ 

        printf("A soma x + y é maior que z "); 

    } else if( x + y == z) { 

        printf("A soma de x + y é igual a z"); 

    } else { 

        printf("A soma de x + y é menor que z"); 

    } 

  

} 

 