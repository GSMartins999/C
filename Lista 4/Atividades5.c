/*Desenvolva um programa em C que solicita ao usuário informar 20 números naturais. Ao
final, o programa deverá exibir a soma dos números pares e a
soma dos números impares.*/
#include <stdio.h>
    int main()
{
    int n, i, somaPares, somaImpares;
    for (i = 0; i < 20; i++)
    {
        printf("Escreva um número: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            somaPares += n;
        }
        else
        {
            somaImpares += n;
        }
    }
    printf("Soma dos pares: %d.\nSoma dos impares: %d", somaPares, somaImpares);
    return 0;
}