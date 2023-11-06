// Exercício 1:
// Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura.
// O jogo tem um sistema de clima que depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius,
// o clima será ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso. Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.
#include <stdio.h>
#include <conio.h>
int main
{
    int temperatura;

    printf("Digite um valor de temperatura:");
    scanf("%d", &temperatura);

    switch (temperatura)
    {
    case 1:
        if (temperatura >= 25)
            ;
        {
            printf("O dia será ensolarado\n");
            break;
        }

    case 2:

    {
        else(temperatura <= 15);
    }
        printf("O dia será chuvoso\n");
    }

case 3:

{
    else(temperatura <= 15 && 25);
}
    printf("O Dia será nublado\n");
}

default:
printf("Opção Inválida\n");
{
    printf("temperatura:%d", temperatura);
    return 0;
}
