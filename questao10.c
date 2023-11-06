//Exercício 10: 
//Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
//Utilize o switch case para realizar a operação desejada e exibir o resultado.

#include <stdio.h>
#include <conio.h>
int main()
{
    int opcao;
    int primeironumero;
    int segundonumero;
    printf("1-Soma\n2-Subtração\n:n0-Sair\n\n");
    scanf("%d", &opcao);
    printf("Digite o dois valores\n:");
    scanf("%d%d", &primeironumero, &segundonumero);

    switch (opcao)
    {
    case 0:
        printf("Saindo....\n");
            break;
        

    case 1:
        printf("Soma:%d\n", primeironumero + segundonumero);
        break;
        
    case 2:
        printf("Subtração:%d\n", primeironumero - segundonumero);
            break;
        
    default:
        printf("Opção Inválida\nDigite outra opcao:");
    }
    return 0;
}
