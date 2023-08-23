#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Sabendo que um veículo tem o desempenho médio de 15km/L de combustível, faça um
// programa em C que solicite ao usuário informar o tempo de viagem em horas, a velocidade
// média em Km/h e então calcule e mostre o consumo de combustível nessa viagem.



 int main()
{
    
    float soma, horas, velocidade;

   
    
    printf("Quantas horas de viagem você irá fazer ? ");
    scanf("%f", &horas);
    
    printf("Qual a sua velocidade: ");
    scanf("%f" ,&velocidade);
    
    soma = (horas*velocidade)/15;
    
    printf("Seu carro consome: %f\n", soma);
    
    
 
    return 0;
}

