#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Fazer um programa em C que solicita do usuário um tempo em segundos, correspondente 

// à duração de um evento qualquer. Calcular e mostrar ao usuário o tempo equivalente em 

// horas, minutos e segundos. 

  

int main()
{
    

    int segundos, horas, minutos;

    printf("Insira um valor em segundos: ");
    scanf("%d", &segundos);
    
    
    
    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    segundos = (segundos%3600)%60;
    
    printf("valor do evento em horas %d\n", horas);
    printf(" minutos %d\n ",minutos);
    printf("segundos %d",segundos);

    return 0;
}

 