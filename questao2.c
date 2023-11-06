//Exercício 2: 
\\Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. 
\\O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana.
\\Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(void)
{
   int valorproduto;
   char diadasemana[200];
   float desconto;
   setlocale(LC_ALL, "portuguese");
   printf("Digite o valor do produto:");
   scanf("%d", &valorproduto);
   printf("Digite o dia da semana(1 á 7)");
   switch (valorproduto)
   {
   case 1:
      printf("Segunda-Feira\n");
      if (valorproduto > 100)
      {
      }
      else
      {
         desconto=(valorproduto * 0.10);
         break;
      case 2:
         printf("Terça-Feira\n");
         if (valorproduto > 100)
         {
         }
         else
         {
            desconto=(valorproduto * 0.10);
            break;
         case 3:
            printf("Quarta-feira\n");
            if (valorproduto > 100)
            {
            }
            else
            {
               desconto=(valorproduto * 0.10);
               break;
            case 4:
               printf("Quinta-feira\n");
               if (valorproduto > 100)
               {
               }
               else
               {
                  desconto=(valorproduto * 0.10);
                  break;
               case 5:
                  printf("Sexta-feira\n");
                  if (valorproduto > 100)
                  {
                  }
                  else
                  {
                     desconto=(valorproduto * 0.10);
                     break;
                  case 6:
                     printf("Sábado\n");
                     if (valorproduto > 100)
                     {
                     }
                     else
                     {
                        desconto=(valorproduto * 0.15);
                        break;
                     case 7:
                        printf("Domingo\n");
                        if (valorproduto > 100)
                        {
                        }
                        else
                        {
                           desconto=(valorproduto * 0.15);
                           break;
                           default:
                           printf("Opção Inválida\n");
                           printf("valorproduto:%d",valorproduto);

                           return 0;
                        }
