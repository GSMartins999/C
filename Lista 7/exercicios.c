//Questão 1 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
    int main()
{
    srand(time(NULL));
    int matrizM[10][10], matrizN[10][10], i, j, s[10][10];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matrizM[i][j] = rand() % 60 + 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matrizN[i][j] = rand() % 50 + 1;
        }
    }
    printf("matrizes geradas: N\n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\t", matrizN[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrizes geradas: M\n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\t", matrizM[i][j]);
        }
        printf("\n");
    }
    printf("\n\nmatriz soma :\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            s[i][j] = (matrizM[i][j] + matrizN[i][j]);
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
}

//Questão 2 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
    int main()
{
    srand(time(NULL));
    int matrizM[10][10], DP, DS, i, j;
    printf("matrizM gerada: \n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matrizM[i][j] = rand() % 50 + 1;
            printf(" %d\t", matrizM[i][j]);
            if (i == j)
            {
                DP += matrizM[i][j];
            }
            if (i + j == 9)
            {
                DS += matrizM[i][j];
            }
        }
        printf("\n");
    }
    printf("soma da diagonal principal: %d\n", DP);
    printf("soma da diagonal secundaria: %d", DS);
}

//Questão 3 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
    int main()
{
    srand(time(NULL));
    int matrizM[8][6], maior, menor, i, j;
    // preenchendo m
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matrizM[i][j] = rand() % 15 + 1;
        }
    }
    printf("matriz gerada: M\n\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf(" %d\t", matrizM[i][j]);
        }
        printf("\n");
    }
    maior = matrizM[0][0];
    menor = matrizM[0][0];
    for (i = 1; i < 8; i++)
    {
        for (j = 1; j < 6; j++)
        {
            if (maior < matrizM[i][j])
            {
                maior = matrizM[i][j];
            }
            else if (menor > matrizM[i][j])
            {
                menor = matrizM[i][j];
            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (matrizM[i][j] == maior)
            {
                printf("\nmaior: %d linha: %d coluna: %d\n", maior, i, j);
            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (matrizM[i][j] == menor)
            {
                printf("\nmenor: %d linha: %d coluna: %d \n", menor, i, j);
            }
        }
    }
}

//Questão 4 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
    int main()
{
    srand(time(NULL));
    int matrizM[7][9], pares, somaPar, i, j;
    float media = 0.0;
    printf("matriz M: \n\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            matrizM[i][j] = rand() % 30 + 1;
            printf(" %d\t", matrizM[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (matrizM[i][j] % 2 == 0)
            {
                somaPar += matrizM[i][j];
                pares++;
            }
        }
    }
    media = (float)somaPar / pares;
    printf("\nMedia dos valores pares contidos na matriz: %.2f\n", media);
}

//Questão 5 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
    int main()
{
    srand(time(NULL));
    int matrizA[6][8], matrizB[8][7], i, j, k, matrizC[6][7];
    printf("matriz A: \n\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            matrizA[i][j] = rand() % 10 + 1;
            printf(" %d\t", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\nmatriz B: \n\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            matrizB[i][j] = rand() % 10 + 1;
            printf(" %d\t", matrizB[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            matrizC[i][j] = 0;
            for (k = 0; k < 8; k++)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    printf("\nResultado da matriz \n\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf(" %d\t", matrizC[i][j]);
        }
        printf("\n");
    }
}

//Questão 6
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
    int
    main()
{
    srand(time(NULL));
    int matrizM[10][8], matrizS[10][8], maior, teste, i, j;
    printf("matriz M: \n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            matrizM[i][j] = rand() % 10 + 1;
            printf(" %d\t", matrizM[i][j]);
        }
        printf("\n\n");
    }
    maior = matrizM[0][0];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (maior < matrizM[i][j])
            {
                maior = matrizM[i][j];
            }
        }
        for (j = 0; j < 8; j++)
        {
            matrizS[i][j] = matrizM[i][j] * maior;
        }
    }
    printf("matriz S: \n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf(" %d\t", matrizS[i][j]);
        }
        printf("\n\n");
    }
}

//Questão 7
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
    int
    main()
{
    srand(time(NULL));
    int matrizM[9][7], teste, te, i, j, testeImp, teImpar;
    float mediaPares = 0.0, mediaImpares = 0.0;
    printf("matrizM gerada: \n\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            matrizM[i][j] = rand() % 20 + 1;
            printf(" %d\t", matrizM[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (j % 2 == 0)
            {
                teste += matrizM[i][j];
                te++;
            }
            else if (j == 0)
            {
                teste += matrizM[i][j];
                te++;
            }
            else
            {
                testeImp += matrizM[i][j];
                teImpar++;
            }
        }
    }
    mediaPares = (float)teste / te;
    mediaImpares = (float)testeImp / teImpar;
    printf("Media das colunas pares %2.f \n", mediaPares);
    printf("Media das colunas impares %2.f", mediaImpares);
}
