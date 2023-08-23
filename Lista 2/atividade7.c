#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

/*O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação
sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / (altura )2
. Elabore um programa em
C que receba como entrada o peso e a altura de um adulto e mostre sua condição de acordo com a tabela
abaixo:
IMC em adultos 			Condição
Abaixo de 18,5 			Abaixo do peso
Entre 18,5 e 25 		Peso normal
Entre 25 e 30 			Acima do peso
Acima de 30 			obeso 
*/

int main()  

  

{  

  float peso, h;  

  double imc;  

 

  printf("Informe seu peso: ");  

  scanf("%f", &peso);  

  printf("Informe sua altura: ");  

  scanf("%f", &h);  

 

  imc = peso / (pow (h,2)); 

  if(imc < 18.5){ 

      printf("Seu Imc é de: %0.2lf. Você está abaixo do peso ", imc); 

  } else if ( imc == 18.5 || imc < 25){ 

      printf("Seu Imc é de: %0.2lf.Você está com o peso normal ", imc); 

  } else if(imc == 25 || imc < 30){ 

      printf("Seu Imc é de: %0.2lf. Você está Acima do peso", imc); 

  } else { 

      printf("Seu Imc é de: %0.2lf.Você está obeso", imc); 

  } 

} 
