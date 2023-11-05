// Exercício 11:
// Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, dado um código de acesso,
// permita ao usuário entrar em um edifício. O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char loginsalvo[200] = "Daniel123";
    char senhasalva[200] = "Homem Aranha";
    char login[100];
    char senha[100];
    printf("Digite seu login:\n");
    gets(login);
    printf("Digite sua senha\n");
    gets(senha);
    if (strcmp(loginsalvo, login) == 0 && strcmp(senhasalva, senha) == 0)
    {
        printf("Bem-vindo!\n");
    }
    else
    {
        printf("Login ou senha inválidos!\n");
    }
    {
        printf("Digite a senha novamente\n");
    }
    getchar();
    return 0;
    }