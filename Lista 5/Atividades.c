//Questão 1 -
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, x, y, z;
    printf("informe o a: ");
    scanf("%d", &a);
    do
    {
        printf("informe b: ");
        scanf("%d", &b);
    } while (b <= a);
    do
    {
        printf("informe z: ");
        scanf("%d", &z);
    } while (z <= b);
    for (x = a; x <= b; x++)
    {
        for (y = x; y <= b; y++)
        {
            if (x + y == z)
            {
                printf("%d + %d = %d\n", x, y, z);
            }
        }
    }
    printf("não existe soma que atenda");
}

//Questão 2 -
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade, quantP = 0, maiorId, menorId, quantWoman = 0, IdadeMenorS;
    float salario, media = 0.0, MenorSalario;
    char sexo, sexoMenorS;
    do
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        if (idade > 0)
        {
            printf("Informe seu salário: ");
            scanf("%f", &salario);
            printf("Informe o sexo M / F: ");
            scanf(" %c", &sexo);
            media += salario;
            if (quantP == 0)
            {
                maiorId = idade;
                menorId = idade;
                MenorSalario = salario;
                IdadeMenorS = idade;
                sexoMenorS = sexo;
            }
            else
            {
                if (idade > maiorId)
                {
                    maiorId = idade;
                }
                else if (idade < menorId)
                {
                    menorId = idade;
                }
                if (salario < MenorSalario)
                {
                    MenorSalario = salario;
                    IdadeMenorS = idade;
                    sexoMenorS = sexo;
                }
            }
            quantP++;
            if (sexo == 'f' || sexo == 'F')
            {
                quantWoman++;
            }
        }
    } while (idade > 0);
    media = media / quantP;
    printf("\nMédia dos salarios: %.2f \n", media);
    printf("Maior idade: %d e Menor Idade: %d \n", maiorId, menorId);
    printf("Quantidade de mulheres: %d \n", quantWoman);
    printf("Idade menor salario %d e Sexo menor salario: %c", IdadeMenorS, sexoMenorS);
}


//Questão 3 -
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int divisor, dividendo, q, r;
    printf("Informe o primeiro valor: ");
    scanf("%d", &divisor);
    printf("Informe o segundo valor: ");
    scanf("%d", &dividendo);
    while (divisor % dividendo != 0)
    {
        r = divisor % dividendo;
        divisor = dividendo;
        dividendo = r;
    }
    printf("o MDC é %d", dividendo);
}



//Questão 4 -
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
    int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, p = 2, d, i;
    bool primo;
    do
    {
        printf("Informe um valor: ");
        scanf("%d", &n);
    } while (n < 50 || n > 1000);
    while (n != 1)
    {
        while (n % p == 0)
        {
            printf("%d ", p);
            n /= p;
        }
        primo = false;
        while (!primo)
        {
            p++;
            d = 0;
            for (i = 2; i < p; i++)
            {
                if (p % i == 0)
                {
                    d++;
                }
            }
            if (d == 0)
            {
                primo = true;
            }
        }
    }
}