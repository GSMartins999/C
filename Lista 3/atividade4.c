#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
/*A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender aquilo que os especialistas
chamam de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento, como qualidade de vida, migrações, ,
fatores socioeconômicos e localização. 

Escreva um programa em C que solicite ao usuário informar o número de habitantes de uma determinada cidade, o
número de crianças nascidas em um determinado período e o número de óbitos em um período. A seguir, solicite que o usuário escolha entre as seguintes
opções: 1) Calcular taxa de natalidade ou 2) Calcular taxa de mortalidade.
Obs.: A taxa de natalidade é calculada pela seguinte fórmula: taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes e a taxa de
mortalidade = (números de óbitos x 1000) /número de habitantes.
*/
 
int main(){


 int habitantes, criancas, obitos, opcoes;

    printf("Diga o número de habitantes da cidade: ");
    scanf("%d", &habitantes);
    printf("Diga o número de criancas: ");
    scanf("%d", &criancas);
    printf("Diga o número de obitos: ");
    scanf("%d", &obitos);
    printf("Selecione a opção que deseja: \n1- Calcular taxa de natalidade\n2- Calcular mortalidade\n");
    scanf("%d", &opcoes);
    printf("A opção escolhida foi %d\n", opcoes );
    
    switch(opcoes){
        
        case 1: 
            printf("A taxa de natalidade da sua cidade é: %d", (criancas * 1000)/habitantes);
        break;
        
        case 2:
            printf("A taxa de mortalidade é: %d", (obitos * 1000)/ habitantes);
        break;
        default:
            printf("opção inválida");
    }
    
}
