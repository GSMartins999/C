#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

/*Tendo como dados de entrada a altura (h) e o sexo(“M” ou “F”) de uma pessoa, construa um programa em C
que calcule seu peso ideal, utilizando as seguintes fórmulas:
 para homens: (72.7 * h) – 58;
 para mulheres: (62.1 * h) – 44.7.
*/
 

int main() 

{ 

   float h, soma1, soma2; 

   char pessoa; 

  

   printf("Informe seu sexo: "); 

   scanf("%c", &pessoa); 

  

   printf("Informe sua altura: "); 

   scanf("%f", &h); 

  

   if(pessoa == 'm'){ 

        soma1 = (72.7 * h) - 58; 

        printf("Seu peso ideal é: %0.2f", soma1); 

   } else if(pessoa == 'f'){ 

        soma2 = (62.1 * h) - (44.7); 

        printf("Seu peso ideal é: %0.2f", soma2); 

   } else{ 

        printf("Letra não informada"); 

   } 

  

} 