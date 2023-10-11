/*Faça um Programa em C que imprima na tela todos os números primos no intervalo entre
10 e 600.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, n, d;
    for (n = 10; n <= 600; n++)
    {
        d = 0;
        for (i = n - 1; i > 1; i--)
        {
            if (n % i == 0)
            {
                d++;
            }
        }
        if (d == 0)
        {
            printf("%d \n", n);
        }
    }
}