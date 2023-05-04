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
<p>Acima, usamos o <i>if</i>, <i>else</i> if</i> e <i>else<, que são comandos de validação, ou seja, confirmam se uma condição, que fica entre (), é verdadeira antes de seguir com o código</p>
