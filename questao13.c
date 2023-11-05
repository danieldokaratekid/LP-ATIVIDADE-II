//Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
int num;
int maior=0;
int menor;
int i;
    setlocale(LC_ALL,"portuguese");
    for(i=0;i<5;i++){
    printf("\nDigite um número");
    scanf("%d",&num);
    
    if(num>maior && num<menor){
    maior=num;
    menor=num;
    }
    
    if(num<menor&num!=0){
        menor=num;
    }
    if(num>maior && num!=0){
        maior=num;
    }
    
}
printf("Maior numero:%d",maior);
printf("Menor numero:%d",menor);
}
