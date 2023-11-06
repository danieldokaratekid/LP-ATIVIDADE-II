// Exercício 1:
// Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura.
// O jogo tem um sistema de clima que depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius,
// o clima será ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso. Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int temperatura;
    printf("Bem-vindo ao jogo\n");
    printf("Digite um valor de temperatura:\n");
    scanf("%d", &temperatura);

    if (temperatura >= 25)
    {
        printf("O dia será ensolarado\n");
    }
    else if (temperatura < 15)
    {
        printf("O dia será chuvoso\n");
    }
    else if (temperatura >= 15 || temperatura<= 25)
    {
    printf("O Dia será nublado\n");
}
else
{
    printf("Opção Inválida\n");
}
return 0;
}
