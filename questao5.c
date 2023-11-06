\\Exercício 5: 
\\Enquanto você faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usuário que escolha um idioma de preferência (1 - Inglês, 2 - Espanhol, 3 - Francês). 
\\Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.
#include <stdio.h>
#include <conio.h>
#include<locale.h>
int main (void )
{
  int idioma;
  setlocale(LC_ALL,"portuguese");
  
  printf ("Digite um idioma(1 á 3):");
  scanf("%d", &idioma);
  
  switch ( idioma )
  {
    case 1:
    printf("Inglês\n");
    break;
    case 2:
    printf("Espanhol\n");
    break;
    case 3:
    printf("Francês\n");
    break;
    printf("Bem-vindo\n");
    break;

}
}
