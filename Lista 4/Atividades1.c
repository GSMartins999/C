/*Faça um Programa em C que exiba na tela todos os números divisíveis por 3 entre 12 e
450.*/
#include <stdio.h>
    int main()
{
    int i;
    for (i = 12; i <= 450; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}