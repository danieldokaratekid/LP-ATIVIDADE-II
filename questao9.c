//Exercício 9: 
//Em um projeto sobre números primos, implemente um programa que solicite ao usuário um número inteiro e verifique se ele é um número primo utilizando o switch case. 
//Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int numero,i,cont=0;
setlocale(LC_ALL,"portuguese");
printf("Digite um numero");
scanf("%d",&numero);
for(i=1;i<=numero;i++)
if(numero%i==0)
cont++;
if(cont==2)
printf("O número %d é primo",numero);
else
printf("O numero %d nao é primo",numero);
getch();
return 0;
}