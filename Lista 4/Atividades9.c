/*Fazer um programa em C que receba a idade de 10 pessoas e mostre quantas são
maiores que 18 anos.*/
int main()
{
    int i, idade, pessoa;
    idade = 0;
    pessoa = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Escreva a idade de uma pessoa: ");
        scanf("%d", &idade);
        if (idade >= 18)
        {
            pessoa++;
        }
    }
    printf("%d pessoas são maiores de idade", pessoa);
}
