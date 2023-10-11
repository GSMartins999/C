/*Fazer um programa em C para exibir a tabuada de um número escolhido pelo usuário.
Considerar tabuada do número 1 ao 10. */
#include <stdio.h>
    int main()
{
    int i, n1, n2, n3;
    for (i = 1; i <= 1000; i++)
    {
        if ((i * i) % 2 == 0)
        {
            printf("O número %d é quadrado perfeito\n", i);
        }
    }
}