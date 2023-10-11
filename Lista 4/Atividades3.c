/*Faça um Programa em C que leia um número e informe se ele é ou não primo.*/
#include <stdio.h>
    int main()
{
    int n, i;
    printf("Informe um número: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            printf("O número não é primo");
        }
        else
        {
            printf("O número é primo");
        }
        return 0;
    }
}