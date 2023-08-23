#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Faça um programa em C para calcular o salário líquido de um professor. O usuário deverá
// informar o valor da hora/aula, o número de aulas dadas e o percentual de desconto do
// INSS.



int main()
{
    int horaaula, aulasdadas, soma, salario;
    float inss, soma2;
    
    printf("Informe o valor das aulas: ");
    scanf("%d", &horaaula);
    printf("Informe o número de aulas dadas: ");
    scanf("%d", &aulasdadas);
    printf("Informe qual o percentual de desconto do seu inss :");
    scanf("%f", &inss);
    
    soma = horaaula * aulasdadas;
    soma2 = soma * (inss/100);
    salario = soma - soma2;
    
    printf("Seu salário é: %d", salario);
    return 0;
    
}


