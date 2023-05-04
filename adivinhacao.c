#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {

  int sec = time(0);
  srand(sec);
  int randm = rand();
  int value,resp;
  int num = randm % 100;
  int chute;
  int tentativas = 1;
  double pts = 1000;
  int numTentativas;
  int nivel;
  
  
    printf("\n*****************************");
    printf("\n* Bem vindo ao advinhacao.c *");
    printf("\n*****************************\n");
    printf("\nDeseja iniciar o jogo? \n");
    printf("1. Sim\n");
    printf("2. Não\n");
    scanf("%d",&resp);
  
    if(resp==1){
      printf("\nVamos começar!");
      printf("\nEm qual nível você deseja jogar?\n\n");
      printf("(1) Fácil (2) Médio (3) Difícil\n");
      printf("Escolha: ");
      scanf("%d",&nivel);
  
      switch(nivel){
  
        case 1:
          numTentativas = 20;
          break;
  
        case 2:
          numTentativas = 15;
          break;
  
        default:
          numTentativas = 6;
          break;
      }
      
      for(int i = 1; i<=numTentativas; i++){
        printf("\nTentativa atual: %d/%d",i,numTentativas);
        
        printf("\nChute um número: ");
        scanf("%d",&chute);
  
       
        
        if(chute<0){
        printf("\nVocê não pode digitar números negativos!\n");
        continue;
        
      }
    
        int acertou = chute==num; 
        int maior = chute>num;
        int menor = chute<num;
        
     
        if(acertou){
          printf("\n**********************************");
          printf("\n*Parabéns! Você acertou o número!*");
          printf("\n*               :)               *");
          printf("\n**********************************");
          printf("\n--Você acertou em %d tentativa(s)!--",tentativas);
          printf("\n-O seu total de pontos foi: %g-",pts);
          
          
        break;
        }  
  
        else if (numTentativas==i){
          printf("\n**********************************");
          printf("\n*Infelizmente você não conseguiu!*");
          printf("\n*               :(               *");
          printf("\n**********************************");  
          printf("\n  ---O número secreto era: %d---  ",num);
          printf("\n---      Tente novamente!      ---");
  
          break;
        } 
    
        else {
          if(maior) {
            printf("\nO seu chute foi MAIOR que o número!\n");
          }
  
          if (menor){
            printf("\nO seu chute foi MENOR que o número!\n");
          } 
          
  
          tentativas++;
          double ptsPerdidos = abs(chute - num)/(double)2;
          pts = pts - ptsPerdidos;
         
        }
      }
    } 
    
    else if(resp==2){
        printf("Tudo bem! Até a próxima");
      }
  
    else{
        printf("Opção Inválida");
      }
    
  return 0;
 }

