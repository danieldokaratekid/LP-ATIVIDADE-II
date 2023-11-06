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
