<!DOCTYPE html>
<head>
</head>
<body>
<h1>Jogo de advinhação em C!</h1>

<p>
Bem-vindos! Nesse repositório eu vou detalhar o processo de criação do <b>"advinhacao.c"</b>, que é um mini-jogo, onde o objetivo do jogador é acertar o número secreto, gerado aleatóriamente pelo computador, em um limite de tentativas que vária de acordo com a dificuldade escolhida, sendo elas: fácil, médio e difícil. O intuito da criação desse jogo é, por meio de um projeto prático, consolidar o meu conhecimento no básico da progamação em C enquanto me divirto. O meu código completo está nos arquivos do repositório. :)
</p>


<h2>Criando a estrutura do código</h2>
<p>Primeiramente precisamos criar a estrutura do nosso jogo, ou seja, inicializar as variáveis, criar os diálogos com o usuário e válidar as suas respostas.</p>

```C
#include <stdio.h>

int main(void){
  int resp;
 
   printf("Olá, seja bem-vindo ao advinhacao.c!\n");
   printf("\nDeseja começar o jogo?\n")
   printf("1. Sim");
   printf("2. Não");
   scanf("%d",&resp); 
   
  return 0;
}
```
<p>Nessa primeira parte do código, criamos o <i>menu</i> do jogo. Utilizamos o <i>printf</i>, que é responsável por <b>printar na tela</b> do console uma mensagem, e o <i>scanf</i>, que <b>recebe</b> um retorno do usuário e <b>armazena</b> em uma variável, nesse caso, recebemos o 1 ou 2 (referentes as opções Sim ou Não do nosso jogo) e armazenamos na variável 'resp'.</p>
<p>A seguir, vamos criar o fluxo do código, dando funcionalidade escolha do usuário.</p>

```C
int resp, nivel;

  if(resp==1){
    printf("\nVamos começar!");
    printf("\nEm qual nível você deseja jogar?\n\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n");
    printf("Escolha: ");
    scanf("%d",&nivel);
  }  
    
  else if(resp==2){
    printf("\nTudo bem, até a próxima!");
  }
  
  else{
    printf("Comando Inválido!");
  }
  
 return 0;
```
<p>Acima usamos os <i>if</i>, <i>else if</i> e <i>else</i>, que são comandos de validação, ou seja, confirmam se uma condição, que fica entre (), é verdadeira antes de seguir com o código. Com eles, fazemos a validação da resposta do usuário e podemos prosseguir, ou não, com o jogo. Criamos também a variável nível, que vai ser usada a seguir, caso o jogador decidade jogar o jogo.</p>

```C

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
  
return 0;
```
<p>Nessa parte, usamos mais um novo comando, o <i>switch</i>, que também é uma estrutura de condição. Nesse caso, ele está alterando o número de tentativas do jogador (armazenado na nova variável tipo <b>int</b> numTentativas) com base na dificuldade escolhida. Assim que fazemos essa validação, o nosso programa começa o game loop, ou seja, o código do jogo começa, de fato, agora.</p>

<p>Como o prórpio nome já diz, um <i>game loop</i>, nada mais é que um loop responsável por rodar o nosso jogo, já que ele precisa continuar funcionando enquanto o jogador está jogando, e não apenas uma vez (cade game loop pode variar de jogo para jogo, no nosso caso ele só se encerra com a vitória ou derrota do jogador). Para isso, usamos o comando <b>for</b>.</p> 

<p>Parecido com o if, o for funciona validando uma condição que fica entre (), e executa o código sempre verificando primeiro se a condição é verdadeira ou falsa. No nosso jogo, a variável tipo int 'i' serve como contador do nosso loop, toda vez que o nosso bloco de código termina o for soma 1 a nossa várivel e, antes de repetir o bloco, ele verifica se o contador é menor, ou igual, ao nosso número de tentativas e, enquanto essa condição continuar verdadeira, ele repete o bloco.</p>

</p>O bloco em questão pede ao jogador para chutar um número e armazena esse chute na variável 'chute', mas ainda precisamos confirmar se o jogador acertou, ou não, o número, e caso acerte encerrar o game loop.</p>


</body>
