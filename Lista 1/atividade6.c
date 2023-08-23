#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

// Faça um programa C para calcular a quantidade de lâmpadas 60 watts necessárias para
// um determinado cômodo. O programa deverá ler o tamanho em metros quadrados do
// cômodo e informar a quantidade lâmpadas, sabendo que são necessários 15 watts/m² para
// se ter uma boa luminosidade.



int main()
{
    int comprimento, largura, soma, lampadas;

    printf("Digite o valor do comprimento do cômodo: ");
    scanf("%d", &comprimento);

    printf("Digite o valor da largura do cômodo: ");
    scanf("%d", &largura);

    soma = comprimento * largura;
    lampadas = soma * 15/ 60;

    printf("O recomendado para o quarto é %d lâmpadas", lampadas);
    
    
}
