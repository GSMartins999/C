#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Faça um programa em C que solicite ao usuário informar 6 (seis) números. Calcule e 

// mostre: 

// 1. a média dos 3 (três) primeiros informados 

// 2. a média dos 3 (três) últimos informados 

// 3. a soma das médias 

  

int main() 

  

{ 

    int n1, n2, n3, n4, n5, n6, soma1, soma2, media; 

    printf("Informe o N1: "); 

    scanf("%d", &n1); 

 

    printf("Informe o N2: "); 

    scanf("%d", &n2); 

  

    printf("Informe o N3: "); 

    scanf("%d", &n3); 

    soma1 = (n1 + n2 + n3) / 3; 

    scanf("A media dessas três primeiras notas é: %d", &soma1) ; 

 

    printf("Informe o N4: "); 

    scanf("%d", &n4); 

  

    printf("Informe o N5: "); 

    scanf("%d", &n5); 

  

    printf("Informe o N6: "); 

    scanf("%d", &n6); 

    scanf("A media desses outros três é: %d", &soma2); 

    soma2 = (n4 + n5 + n6) / 3; 


    media = soma1 + soma2; 

    printf("A média das 6 notas é: %d", media); 

    return 0; 

} 
