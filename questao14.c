//Exercício 14: 
//Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares. 
//Além disto, deve ser exibido a média aritmética de números pares e impares.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int par=0;
    int impar=0;
    int numero;
    int i;
    int media=0;

    printf("Digite um número");
    scanf("%d", &numero);

    for (i = 1; i <= par; i++)
    {
        for (i = 1; i <= impar; i++)
        {
        }
        
        printf("\nMedia %d", media);
        media = media / i;
    }
    printf("\nValor Media=%d", media);
    if ("numero%2 ==0")
    {
        par++;
    }
    else
    {
       impar++;
        printf("O numeros par são %d,e impar:%d", par, impar);
        printf("A media dos valores:%d");
        getchar(); // pausa no windows e linux
        return 0;
    }
}

    