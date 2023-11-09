// Questão 1 -
/******************************************************************************
Desenvolver um programa em C que contenha uma função que recebe 3 notas de um aluno
por parâmetro e uma letra.
Se a letra for A a função calcula a média aritmética das notas do aluno e se for P, a sua
média ponderada (pesos: 5, 3 e 2).
O resultado deve retornar ao programa principal para ser exibido na tela.
*******************************************************************************/
#include <stdio.h>
    float media(float n1, float n2, float n3, char letra)
{
    if (letra == 'A' || letra == 'a')
    {
        return ((n1 + n2 + n3) / 3);
    }
    else
    {
        return ((n1 * 5 + n2 * 3 + n3 * 3) / 10);
    }
}
int main()
{
    float n1, n2, n3;
    char letra;
    printf("Digite 3 notas e uma letra: \n");
    scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
    media(n1, n2, n3, letra);
    printf("Sua média é: %0.2f", media(n1, n2, n3, letra));
    return 0;
}






// Questão 2 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    int numero(int numeros)
{
    if (numeros < 2)
    {
        return false;
    }
    for (int i = 2; i < numeros; i++)
    {
        if (numeros % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int numeros;
    printf("Digite um número: ");
    scanf("%d", &numeros);
    numero(numeros);
    if (numero(numeros))
    {
        printf("%d é primo", numeros);
    }
    else
    {
        printf("%d não é primo", numeros);
    }
    return 0;
}





// Questão 3 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    int soma(unsigned long long int numeros)
{
    int soma = 0;
    while (numeros >= 10)
    {
        soma += numeros % 10;
        numeros /= 10;
    }
    soma += numeros;
    return soma;
}
int main()
{
    unsigned long long int numeros;
    printf("Informe um valor: \n");
    scanf("%llu", &numeros);
    printf("A soma %llu é igual a %d \n", numeros, soma(numeros));
    return 0;
}





// Questão 4 -
#include <stdio.h>
    float peso(float altura, char sexo)
{
    float soma;
    if (sexo == 'f' || sexo == 'F')
    {
        soma = (62.1 * altura) - 44.7;
        return soma;
    }
    else if (sexo == 'm' || sexo == 'M')
    {
        soma = (72.7 * altura) - 58;
        return soma;
    }
    else
    {
        return 0;
    }
}
int main()
{
    float altura;
    char sexo;
    printf("Escreva seu sexo: ");
    scanf("%c", &sexo);
    printf("Escreva sua altura: ");
    scanf("%f", &altura);
    peso(altura, sexo);
    printf("O sexo informado foi: %c\n", sexo);
    printf("A altura informado foi: %0.2f\n", altura);
    printf("O seu peso ideal é: %0.2f", peso(altura, sexo));
    return 0;
}





// Questão 5 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    int triangulo(int x, int y, int z)
{
    if (x < y + z && z < x + y && y < z + x)
    {
        if (x == y && x == z)
        {
            printf("Equilatero");
        }
        else if (x == y || x == z || y == z)
        {
            printf("isosceles");
        }
        else
        {
            printf("escaleno");
        }
        return true;
    }
    else
    {
        printf("Não é triangulo");
        return false;
    }
}
int main()
{
    int x = 0, y = 0, z = 0;
    printf("Informe os lados:\n");
    scanf("%d %d %d", &x, &y, &z);
    (triangulo(x, y, z));
}




// Questão 6 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    int quantDiv(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int num;
    printf("Informe um numero: \n");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("O valor deve ser inteiro e positivo.\n");
    }
    else
    {
        int divisores = quantDiv(num);
        printf("O valor %d tem %d divisores.\n", num, divisores);
    }
    return 0;
}





// Questão 7 -
#include <stdio.h>
#include <stdbool.h>
    bool ehNumeroPerfeito(int numero)
{
    int somaDivisores = 0;
    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            somaDivisores += i;
        }
    }
    return (somaDivisores == numero);
}
int main()
{
    int numero;
    printf("Digite um número natural: ");
    scanf("%d", &numero);
    if (numero <= 0)
    {
        printf("O número deve ser um número natural.\n");
    }
    else
    {
        bool resultado = ehNumeroPerfeito(numero);
        if (resultado)
        {
            printf("O número %d é perfeito.\n", numero);
        }
        else
        {
            printf("O número %d não é perfeito.\n", numero);
        }
    }
    return 0;
}






// Questão 8 -
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    int SomaDig(unsigned long long int n)
{
    int soma = 0;
    while (n >= 10)
    {
        soma += n % 10;
        n /= 10;
    }
    soma += n;
    return soma;
}
bool confDigi(int N, unsigned long long int num)
{
    while (num > 0)
    {
        if (N == num % 10)
        {
            return true;
        }
        num /= 10;
    }
    return false;
}
bool verificaPer(unsigned long long int a, unsigned long long int b)
{
    int resto;
    while (a > 0)
    {
        resto = a % 10;
        a /= 10;
        if (resto > 0)
        {
            if (!confDigi(resto, b))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    unsigned long long int N1, N2;
    printf("Informe o primeiro numero: ");
    scanf("%llu", &N1);
    do
    {
        printf("Informe o segundo numero: ");
        scanf("%llu", &N2);
    } while (N1 == N2);
    if (SomaDig(N1) == SomaDig(N2))
    {
        if (verificaPer(N1, N2))
        {
            printf("%llu é permutacao de %llu", N1, N2);
        }
        else
        {
            printf("%llu não é permutacao de %llu", N1, N2);
        }
    }
    else
    {
        printf("%llu é permutacao de %llu", N1, N2);
    }
    return 0;
}