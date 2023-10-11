#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
/*Questão 1
Faça um programa em C, que solicite ao usuário informar dois números inteiros e a operação que ele deseja executar (Operações: soma, subtração,
divisão, multiplicação). Execute a operação desejada e apresente o resultado na tela. Se a operação informada for inválida, mostrar uma mensagem de erro.
*/

int main(){
    
    int n1, n2,conta;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    printf("Digite outro número: ");
    scanf("%d", &n2);
    
    printf("1 - Soma\n2 - subtração\n3 - divisão\n4 - multiplicação\n");
    scanf("%d", &conta);
    
    printf("A opção escolhida foi: %d\n", conta);


    switch(conta){
    
    case 1:
        printf("O resultado é : %d\n", n1 + n2);
    break;
    case 2:
        printf("O resultado é : %d\n", n1 - n2);
    break;
    case 3:
        printf("O resultado é : %d\n", n1 / n2);
    break;
    case 4:
        printf("O resultado é : %d\n", n1 * n2);
    break;
    default:
        printf("Opção invalida");
    }

}