/*Uma loja utiliza o código V para compras à vista e o código P para compras a prazo. Faça
um programa em C que receba o código e o valor de 15 transações. Calcule e mostre:
• O valor total das compras à vista
• O valor total das compras a prazo
• O valor total das compras efetuadas */
#include <stdio.h>
#include <stdlib.h>
    int main()
{
    float total, i, divi, soma;
    int compras;
    char opcao;
    total = 0;
    printf("selecione uma opcão:\n V - valor a vista.\n P - valor a prazo.\n T - valor total. \n");
    scanf("%c", &opcao);
    for (i = 1; i <= 2; i++)
    {
        printf("Digite o valor de cada produto: ");
        scanf("%d", &compras);
        total += compras;
    };
    switch (opcao)
    {
    case 'a':
        soma = total * 0.05;
        printf("O valor a vista é : %0.2f reias\n", total - soma);
        break;
    case 'b':
        printf("Você deseja dividir em quantas vezes? ");
        scanf("%f", &divi);
        soma = divi * 0.05;
        printf("O valor com o prazo de 12 meses é: %0.2f reias\n", soma + total);
        break;
    case 'c':
        printf("O total das compras é: %0.2f reias\n", total);
        break;
    default:
        printf("Caso inválido");
    }
}