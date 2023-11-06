#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int numero;
    int opcao;

    printf("Informe o número\n");
    scanf("%d", &numero);

    if (numero == 0 || numero == 10)
    {
        switch (opcao)
        {
        case 1:
            printf("Tá frio\n");
            break;
        case 2:
            printf("Tá menos frio\n");
            break;
        case 3:
            printf("Tá morno\n");
            break;
        case 4:
            printf("Esquentou\n");
            break;
        case 5:
            printf("Já dá para pegar uma praia\n");
            break;
        case 6:
            printf("Agora pode notar que seus pés estão queimando\n");
            break;
        case 7:
            printf("Já dá para fritar um ovo na calçada\n");
        case 8:
            printf("Agora pode notar que é fácil pegar um bronze\n");
            break;
        case 9:
            printf("Seus olhos estão queimando\n");
            break;
        case 10:
            printf("Agora pode notar que o sol derretou tudo e estamos mortos");
            break;
        default:
            printf("Opção Inválida\n");
        }
        printf("%d", numero);
        printf("numero:%\n", numero);
    }
    return 0;
}
