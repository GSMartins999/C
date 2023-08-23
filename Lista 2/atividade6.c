#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  

/*  Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar do jogo e 

um palpite. Ganham 10 pontos se acertarem o vencedor ou se acertarem que foi empate, e ganham mais 5 

pontos para o placar de cada time que acertarem. A tabela a seguir dá um exemplo, considerando que o placar 

real foi 3x2: 

Placar apostado Pontos Razão 

  

0 x 1 0 Não acertou o vencedor e nem o número de gols dos times. 

0 x 2 5 Não acertou o vencedor, mas acertou o número de gols do segundo time. 

3 x 5 5 Não acertou o vencedor, mas acertou o número de gols do primeiro time. 

1 x 0 10 Acertou o vencedor, mas não acertou o número de gols dos times. 

3 x 1 15 Acertou o vencedor e o número de gols do primeiro time. 

3 x 2 20 Acertou o vencedor e o número de gols de ambos os times. 

  

Escreva um programa em C que requisita do usuário o placar apostado e depois o placar do jogo e informa 

quantos pontos o apostador fez. */ 
  

  
int main() 

{ 

  int placar, palpite1, palpite2, time1, time2, pontos;
  
 
  printf("Insira o valor do placar do time 1: ");
  scanf("%d", &time1);
  
  printf("Insira o valor do placar do time 2: ");
  scanf("%d", &time2);
  
  printf("Insira quantos gols você acha que o primeiro time irá fazer: ");
  scanf("%d", &palpite1);
  
  printf("Insira quantos gols você acha que o segundo time irá fazer: ");
  scanf("%d", &palpite2);
  
  
  if(time1 > time2 && palpite1 > palpite2){
    printf("Você errou os placares, mas acertou o vencedor. Sua pontuação é: %d", pontos + 10);
  } 
  
  else if(time1 < time2 && palpite1 < palpite2){
    printf("Você errou os placares, mas acertou o vencedor. Sua pontuação é: %d", pontos + 10);
  } 
  
  else if( time1 != palpite1 && time2 == palpite2){
      printf("Você acertou o placar do time 2. Sua pontuação foi de: %d", pontos + 5);
      
      
  } else if( time1 == palpite1 && time2 != palpite2){
        printf("Você acertou o placar do time 1. Sua pontuação foi de: %d", pontos + 5);
        
        
  } else if(time1 == palpite1 && time2 == palpite2 && time1 > time2 && palpite1 > palpite2){
      printf("Você acertou o placar e o vencedor. Parabéns!! Sua pontuação é de: %d", pontos + 20);
      
      
  } else if(time1 == palpite1 && time2 == palpite2 && time1 < time2 && palpite1 < palpite2){
      printf("Você acertou o placar e o vencedor. Parabéns!! Sua pontuação é de: %d", pontos + 20);
      
      
  }else if(time1 == palpite1 && time2 == palpite2 && time1 == time2 && palpite1 == palpite2){
      printf("Você acertou o placar. Deu empate. Sua pontuação é de: %d", pontos + 8);
      
      
  } else if( time1 == time2 && palpite1 && palpite2){
    printf("Você não acertou o placar. Mas jogou pro empate. Sua pontuação é de: %d", pontos + 4);
    

  }else{
      printf("Você não acertou o vencedor e nem o número de gols dos times. Sua pontuação foi de: %d", pontos);
  }
}