
#include <stdio.h>

int main()
{
    int idade;
    char sexo;

    int soma_idades = 0;
    int total_alunos = 0;
    int masculino = 0;
    int feminino = 0;
    int acima_40 = 0;

    float media;
    float percentual_masculino;
    float percentual_feminino;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Qual seu sexo biologico: ");
    scanf(" %c", &sexo);

    while(idade !=0)
    {
        soma_idades += idade;
        total_alunos++;

        if(idade > 40)
        {
            acima_40++;
        }

        if(sexo == 'm')
        {
            masculino++;
        }

        if(sexo == 'f')
        {
            feminino++;
        }

        printf("Digite a proxima idades: ");
        scanf("%d", &idade);

        if(idade != 0)
        {
            printf("Digite o proximo sexo biologico: ");
            scanf(" %c", &sexo);
        }
    }

    media = (float)soma_idades / total_alunos;

   percentual_masculino = (masculino * 100.0) / total_alunos;
    percentual_feminino = (feminino * 100.0) / total_alunos;

    printf("\nMedia: %.2f", media);
    printf("\nQuantidade acima de 40 anos: %d", acima_40);
    printf("\nPercentual masculino: %.2f%%", percentual_masculino);
    printf("\nPercentual feminino: %.2f%%", percentual_feminino);

    return 0;
}