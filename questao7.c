
\\Exercício 7: 
\\Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções (1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). 
\\Solicite ao usuário que escolha uma opção e, utilizando o switch case, execute a funcionalidade correspondente à opção escolhida.

#include <stdio.h>
#include <conio.h>
int main()
{
  int configuracao;

  printf("Digite uma configuração(1 á 3):");
  scanf("%d", &configuracao);

  switch (configuracao)
  {
  case 1:
    printf("Novo Jogo\n");
    break;
  case 2:
    printf("Carregar Jogo\n");
    break;
  case 3:
    printf("Configurações\n");
    break;
    default:
    printf("Opção Inválida\n");
  }
    printf("configuracao:%d",configuracao);
    return 0;
  }
