// Questão 1 -
/******************************************************************************
Desenvolver um programa em C que contenha uma função que recebe por parâmetro um
valor inteiro
correspondente a um tempo em segundos e devolve ao programa principal o tempo em
horas, minutos e
segundos. O programa principal exibirá uma mensagem informando o tempo calculado
em horas, minutos
e segundos.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
    void Conversão(int segundos, int *horas, int *minutos, int *segundos_restantes)
{
    *horas = segundos / 3600;
    segundos %= 3600;
    *minutos = segundos / 60;
    *segundos_restantes = segundos % 60;
}
int main()
{
    int n1;
    int horas, minutos, segundos_restantes;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &n1);
    Conversão(n1, &horas, &minutos, &segundos_restantes);
    printf("Valor corresponde a: %d horas, %d minutos, %d segundos\n", horas, minutos,
           segundos_restantes);
    return 0;
}






// Questão 2 -
/******************************************
Desenvolver um programa em C que contenha uma função que recebe por parâmetro dois
valores inteiros, A e B, e realiza a troca entre eles, ou seja, A passará a possuir o valor que
estava em B, e B passará a possuir o valor que estava em A. O programa principal exibirá
os valores trocados.
******************************/
#include <stdio.h>
#include <stdlib.h>
    void Permuta(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
int main()
{
    int A, B;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    Permuta(&A, &B);
    printf("\nValores após a troca:\nA = %d\nB = %d\n", A, B);
    return 0;
}





// Questão 3 -
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
    void calcularRaizes(float a, float b, float c, float *x1, float *x2)
{
    float delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else if (delta == 0)
    {
        *x1 = -b / (2 * a);
        *x2 = *x1;
    }
    else
    {
        *x1 = *x2 = 0.0;
    }
}
int main()
{
    float a, b, c;
    float x1, x2;
    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);
    calcularRaizes(a, b, c, &x1, &x2);
    if (x1 == x2 && x1 != 0)
    {
        printf("Uma única raiz X: %.2lf\n", x1);
    }
    else if (x1 != 0.0 && x2 != 0.0)
    {
        printf("Raízes X1: %.2lf e X2: %.2lf\n", x1, x2);
    }
    else
    {
        printf("Esta equação não possui raízes no conjunto dos números reais.\n");
    }
    return 0;
}







// Questão 4 -
/******************************************************************************
Desenvolver um programa em C que contenha uma função que recebe por parâmetro a
hora de inicio e a
hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A
função deve
retornar a duração do jogo em horas e minutos, considerando que o tempo máximo de
duração de um jogo
é de 24 horas e que o jogo pode começar em um dia e terminar no outro. O programa
principal exibirá uma
mensagem informando a duração calculada.
*******************************************************************************/
#include <stdio.h>
    void duracao(int inicioHoras, int inicioMinutos, int terminoHoras, int terminoMinutos, int *duracaoHoras, int *duracaoMinutos)
{
    int minutosInicio = inicioHoras * 60 + inicioMinutos;
    int minutosTermino = terminoHoras * 60 + terminoMinutos;
    int minutosDuracao = (minutosTermino - minutosInicio + 24 * 60) % (24 * 60);
    *duracaoHoras = minutosDuracao / 60;
    *duracaoMinutos = minutosDuracao % 60;
}
int main()
{
    int inicioHoras, inicioMinutos, terminoHoras, terminoMinutos;
    int duracaoHoras, duracaoMinutos;
    printf("Digite a hora de início do jogo e os minutos: ");
    scanf("%d %d", &inicioHoras, &inicioMinutos);
    printf("Digite a hora de término do jogo e os minutos: ");
    scanf("%d %d", &terminoHoras, &terminoMinutos);
    duracao(inicioHoras, inicioMinutos, terminoHoras, terminoMinutos, &duracaoHoras,
            &duracaoMinutos);
    printf("A duração do jogo é de %d horas e %d minutos.\n", duracaoHoras,
           duracaoMinutos);
    return 0;
}