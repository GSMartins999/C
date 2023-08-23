#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

/* Escreva um programa em C que calcule o salário semanal de um trabalhador. As entradas são: o número de
horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima
de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.
*/
 

int main() 

{ 

    int ht, vh, multiplica, bonus, soma; 

  

    printf("Informe o número de horas trabalhadas na semana: "); 

    scanf("%d", &ht); 

  

    printf("Informe o valor da hora: "); 

    scanf("%d", &vh); 

  

    multiplica = ht * vh; 

  

    if( ht <= 40){ 

        printf("Você não recebe bonus.\n"); 

    } else if( ht > 40 && ht < 60){ 

        bonus = multiplica * 50 / 100; 

        printf("Seu bonus é: %d.\n", bonus); 

  

    } else if( ht >= 60){ 

        bonus = multiplica * 60/100; 

        printf("Seu bonus é: %d.\n", bonus); 

 

    } else { 

        printf("Error"); 

    } 

    soma = multiplica + bonus; 

  

    printf("A soma do seu salário com seu bonus é: %d", soma); 

  

} 

 