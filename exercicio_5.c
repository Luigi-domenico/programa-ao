#include <stdio.h>
#include <string.h> 

int main () {
    char email[100];
    char senha[100];

    char email_correto[100];
    char senha_correta[100];

    printf("Digite seu email: ");
    scanf("%s", email);

    printf("Digite a senha: ");
    scanf("%s", senha);

    FILE *arquivo = fopen("usuario.txt" , "w");
    fprintf(arquivo, "%s %s", email, senha);
    fclose(arquivo);

    arquivo = fopen("usuario.txt", "r"); // ← corrigido aqui
    fscanf(arquivo, "%s %s", email_correto, senha_correta);
    fclose(arquivo);

    if(strcmp(email,"luigiantedomenico@gmail.com") == 0 && 
       strcmp(senha,"Htmlcss2720#") == 0){

        printf("Login correto!\n");

    } else {
        printf("Login incorreto!\n");
    }

    return 0;
}