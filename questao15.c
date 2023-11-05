//Exercício 15: 
//Implemente um programa que converta valores entre diferentes unidades de medida, como por exemplo, quilômetros para milhas e Celsius para Fahrenheit. 
//O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores. 
//Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float temperatura(float c) {
return c *(9.0/5.0)+32.0;
}
int main(){
setlocale(LC_ALL,"portuguese");
float f,c;
printf("Digite a temperarura em celsius:");
scanf("%f",&c);
printf("Resultado da conversao:%f\n",f);
printf("Resultado da conversao:%f\n",temperatura(c));
return 0;
}