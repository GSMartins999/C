// Questão 1 -
#include <stdio.h>
int main()
{
    int v[15], i, maior, menor;
    float media = 0.0;
    printf("informe o vetor: ");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &v[i]);
        if (i == 0)
        {
            maior = v[i];
            menor = v[i];
        }
        else
        {
            if (v[i] > maior)
            {
                maior = v[i];
            }
            else if (v[i] < menor)
            {
                menor = v[i];
            }
        }
        media += v[i];
    }
    media = (float)media / 15;
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %2.2f", media);
}

// Questão 2 -
#include <stdio.h>
int main()
{
    int v[25], i;
    v[0] = 0;
    v[1] = 1;
    for (i = 2; i <= 25; i++)
    {
        v[i] = v[i - 2] + v[i - 1];
    }
    printf("sequência fibonacci: \n");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", v[i]);
    }
}

// Questão 3 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int v[30], i, al;
    bool tem;
    srand(time(NULL));
    for (i = 0; i < 30; i++)
    {
        v[i] = rand() % 100 + 1;
    }
    printf("Informe um valor: ");
    scanf("%d", &al);
    tem = false;
    for (i = 0; i < 30; i++)
    {
        if (v[i] == al)
        {
            tem = true;
            printf("Posição: %d\n", i);
        }
    }
    if (!tem)
    {
        printf("Número não localizado\n");
    }
    printf("vetor testado: \n");
    for (i = 0; i < 30; i++)
    {
        printf("%d ", v[i]);
    }
}

// Questão 4 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int v[15], i, maior, menor;
    float media = 0.0;
    for (i = 0; i < 15; i++)
    {
        do
        {
            printf("Informe o valor da posição %d:", i);
            scanf("%d", &v[i]);
        } while (v[i] < 0 || v[i] > 20);
    }
    for (i = 0; i < 15; i++)
    {
        if (i == 0)
        {
            maior = v[i];
            menor = v[i];
        }
        else
        {
            if (v[i] > maior)
            {
                maior = v[i];
            }
            else if (v[i] < menor)
            {
                menor = v[i];
            }
        }
        media += v[i];
    }
    media = (float)media / 15;
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    for (i = 0; i < 15; i++)
    {
        if (v[i] == maior)
        {
            printf("posição dos maiores: %d\n", i);
        }
    }
    printf("Menor: %d\n", menor);
    for (i = 0; i < 15; i++)
    {
        if (v[i] == menor)
        {
            printf("posição dos menores: %d\n", i);
        }
    }
}

// Questão 5 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int v[30], i, par = 0, impar = 0;
    int quantImpar[30], quantPar[30];
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        v[i] = rand() % 50 + 1;
    }
    printf("vetor gerado: \n");
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (int i = 0; i < 30; i++)
    {
        if (v[i] % 2 == 0)
        {
            quantPar[par] = v[i];
            par++;
        }
        else
        {
            quantImpar[impar] = v[i];
            impar++;
        }
    }
    printf("\nvalores pares do vetor: ");
    for (int i = 0; i < par; i++)
    {
        printf("%d ", quantPar[i]);
    }
    printf("\nQuantidade de pares: %d\n", par);
    printf("\n");
    printf("\nvalores impares do vetor: ");
    for (int i = 0; i < impar; i++)
    {
        printf("%d ", quantImpar[i]);
    }
    printf("\nQuantidade de impares: %d\n", impar);
    printf("\n");
}

// Questão 6 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    char repetir;
    int vetor[20], i, j, d;
    bool achei;
    do
    {
        // fazendo o vetor de aleatorios
        for (i = 0; i < 20; i++)
        {
            vetor[i] = rand() % 200 + 1;
        }
        printf("Vetor gerado: \n");
        for (i = 0; i < 20; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\nNúmeros primos no vetor: \n");
        achei = false;
        for (i = 0; i < 20; i++)
        {
            d = 0;
            for (j = 2; j < vetor[i]; j++)
            {
                if (vetor[i] % j == 0)
                {
                    d++;
                }
            }
            if (d == 0)
            {
                achei = true;
                printf(" %d", vetor[i]);
            }
        }
        if (!achei)
        {
            printf("Não há números primos nesse vetor");
        }
        printf("\nDeseja repetir o processo? (S/N): ");
        scanf(" %c", &repetir);
    }
    while( repetir == 'S' || repetir == 's');
    return 0;
}







// Questão 7 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int v[30], i, aux;
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        v[i] = rand() % 50 + 1;
    }
    printf("vetor original\n");
    for (i = 0; i < 30; i++)
    {
        printf(" %d", v[i]);
    }
    i = 0;
    while (i < 29)
    {
        if (v[i] > v[i + 1])
        {
            aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
            i = 0;
        }
        else
        {
            i++;
        }
    }
    i = 0;
    printf("\nvetor ordenado:\n\n");
    for (i = 0; i < 30; i++)
    {
        printf(" %d", v[i]);
    }
}






// Questão 8 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int v[10], i, pos, aux;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        v[i] = rand() % 30 + 1;
    }
    printf("vetor original:\n ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    pos = 9;
    for (i = 0; i < 5; i++)
    {
        aux = v[i];
        v[i] = v[pos - i];
        v[pos - i] = aux;
    }
    printf("\nvetor ordenado: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
}