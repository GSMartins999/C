#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Faça um programa em C para calcular uma trajetória parabólica de um projétil. O programa
// deve solicitar ao usuário a velocidade inicial do lançamento em m/s e o ângulo do
// lançamento em graus. Calcular e mostrar a quantos metros de distância o projétil atingirá o
// chão, considerando aceleração da gravidade igual a 9,81 m/s



#include <stdio.h>
#include <math.h>

int main ()
{

    int velocidadeInit;
    float a;
    double angulo, metros;
    
    a = 9.81;
    
    printf ("Informe o valor da velocidade inicial: ");
    scanf ("%d", &velocidadeInit);
    
    printf ("Informe o valor do angulo:  ");
    scanf ("%lf", &angulo);

    angulo = (angulo * 3.14)/180;
    
    metros = pow(velocidadeInit,2)*sin(angulo)/a;
    
    printf("o objeto atingirá o chão em %5.2lf metros", metros);

}