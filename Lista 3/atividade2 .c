#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

/*Questão - 2
Uma loja fornece 10% de desconto para funcionários e 15% de desconto para clientes vips. Faça um programa em C que calcule o valor total a ser pago
por uma pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário
(2) ou vip (3). Cliente comum não recebe desconto.
*/
 int main(){
    
    float valor;
    int usuario;
    
    printf("Digite o valor da sua compra: ");
    scanf("%f", &valor);
    
    printf("Selecione qual tipo de cliente você é:\n1 - comum\n2 - funcionário\n3 - vip\n");
    scanf("%d", &usuario);
    

    switch(usuario){
    
    case 1:
        printf("Você não recebe desconto o valor pago será: %f\n", valor);
    break;
    case 2:
        printf("Seu compra com desconto de 10%% é de: %.2f\n", valor * 0.9);
    break;
    case 3:
        printf("Seu compra com desconto de 15%% é de: %.2f\n",valor * 0.85 );
    break;
    default:
    	printf("Opção invalida");
    }

}



