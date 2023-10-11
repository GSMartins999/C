/*Faça um Programa em C que solicita 10 números inteiros ao usuário e apresente o maior,
o menor e a média aritmética dos valores informados.*/
#include <stdio.h>
    int main()
{
    int maior, menor, n, i;
    float soma;
    maior = menor = n = soma;
    for (i = 1; i <= 10; i++)
    {
        printf("Escreva um número: ");
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
        }
        else if (n < menor)
        {
            menor = n;
        }
        soma += n;
    }
    printf("Maior: %d\nMenor: %d\nMédia: %.2f", maior, menor, soma / 10);
}