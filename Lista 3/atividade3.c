#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
/*Faça um programa em C que receba dois números reais e execute as operações listadas a seguir de acordo com a escolha do usuário:

Escolha do usuário Operação
1 Média Aritmética entre os números digitados
2 Média Ponderada entre os números digitados, sendo que o primeiro tem peso 2 e o segundo tem peso 3.
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostrar uma mensagem de erro
*/
 
 int main(){
    
    float n1, n2; 
    int operacao;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    
    printf("Selecione a operação que você quer:\n1 - Média Aritmética\n2 - Média Ponderada\n3 - Produto entre dois números\n4 - Divisão\n");
    scanf("%d", &operacao);
    

    switch(operacao){
    
    case 1:
        printf("A média é: %.2f\n", n1 + n2 / 2);
    break;
    case 2:
        printf("A média Ponderada é: %.2f\n", ((n1 * 2) + (n2 * 3)) / (n1 + n2) );
    break;
    case 3:
        printf("O produto entre números é: %.2f\n", (n1 * n1) + (2*n1)+(2*n2) + (n2 *n2));
    break;
    case 4:
        printf("A Divisão é: %.2f\n", n1 / n2 );
    break;
    default:
   	 printf("Opção invalida");
     }

}
