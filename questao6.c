#include <stdio.h>
#include <conio.h>
#include<locale.h>
int main()
{
  int produto;
  setlocale(LC_ALL,"portuguese");

  printf("Selecione um produto(1 á 3):");
  scanf("%d",&produto);

  switch (produto)
  {
  case 1:
    printf("Camiseta - R$ 30,00\n");
    break;
  case 2:
    printf("Calça -R$ 70,00\n");
    break;
  case 3:
    printf("Sapato-R$ 130,00\n");
    break;
  default:
    printf("Opção Inválida\n");
  }
  printf("produto:%d", produto);
  return 0;
}