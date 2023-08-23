#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
/*Escreva um programa em C que receba a velocidade máxima em uma avenida e a velocidade com que um
motorista estava dirigindo nela. Calcule a multa que o motorista vai receber, considerando que são pagos
R$ 5,00 por cada km/h que estiver acima da velocidade permitida (considere apenas números inteiros). Se a
velocidade do motorista estiver dentro do limite, o programa deve informar que não há multa. */


int main() 

{ 

    int vv, vm, sub, multa; 

  

    printf("Informe a velocidade da via: "); 

    scanf("%d", &vv); 

  

    printf("Informe a velocidade dos motoristas: "); 

    scanf("%d", &vm); 

  

    if( vm > vv){ 

        sub = vm - vv; 

        multa = sub * 5; 

        printf("%d", multa); 

    } else { 

        printf("Não há multa"); 

    } 

  

} 

 
