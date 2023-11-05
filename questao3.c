// Exercício 3:
// Em um projeto de classificação de alunos, desenvolva um programa que receba a nota de um aluno e determine sua classificação com base na seguinte tabela:
//- Nota maior ou igual a 9: "Excelente"
//- Nota entre 7 e 8.9: "Bom"
//- Nota entre 5 e 6.9: "Razoável"
//- Nota menor que 5: "Insuficiente"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   float nota;
   setlocale(LC_ALL, "portuguese");
   printf("Digite a nota do aluno");
   scanf("%d", &nota);
   if (nota >= 9)
   {
      printf("Excelente\n");
   }

   else if (nota = 7 && 8.9)
   {
      printf("Bom");
   }

   else if (nota = 5 && 6.9)
   {
      printf("Razoável\n");
   }
   

   else if (nota <= 5)
   {
      printf("Insuficiente\n");
   }

   return 0;
}
