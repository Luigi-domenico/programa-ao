#include <stdio.h>

int main()
{
    float notas[10];
    char nomes[10][50];

    float soma = 0;
    float media;

    float maior_nota;
    float menor_nota;

    int aprovados = 0;
    int reprovados = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", nomes[i]);

        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);

        soma += notas[i];

        if(i == 0)
        {
            maior_nota = notas[i];
            menor_nota = notas[i];
        }

        if(notas[i] > maior_nota)
        {
            maior_nota = notas[i];
        }

        if(notas[i] < menor_nota)
        {
            menor_nota = notas[i];
        }

        if(notas[i] >= 6)
        {
            aprovados++;
        }
        else
        {
            reprovados++;
        }
    }

    media = soma / 10;

    printf("\nMedia: %.2f", media);
    printf("\nMaior nota: %.2f", maior_nota);
    printf("\nMenor nota: %.2f", menor_nota);
    printf("\nAprovados: %d", aprovados);
    printf("\nReprovados: %d", reprovados);

    return 0;
}









