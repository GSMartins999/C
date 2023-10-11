/*Fazer um programa em C para mostrar os 15 primeiros termos da série de Fibonacci.*/
#include <stdio.h>
    int main()
{
    int i, n1, n2, n3;
    n1 = 0;
    n2 = 1;
    printf("sequencia fibonacci: %d %d\n ", n1, n2);
    for (i = 3; i <= 15; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}