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