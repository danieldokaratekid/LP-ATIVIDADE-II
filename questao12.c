//Exercício 12: 
//Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. O programa deve calcular e exibir a média das notas digitadas. 
//Utilize o for para repetir o processo de solicitação das notas.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
float media;
float valor;
float somamedia;
int i=1;
media=0;
somamedia=0;

do{
printf("digite uma nota");
scanf("%f",&valor);
somamedia=somamedia+valor;
i++;
}while(i<= 5);
media=somamedia/5;
printf("\n");
printf("Media dos 5 numeros informados é:%f",media);

return 0;
}
