#include <stdlib.h>
#include <stdio.h>
int main(){
int n;
int maior;
int segundo;
printf("digite o tamanho da lista");
scanf("%d",&n);

int* numeros = (int*)malloc(n *sizeof(int));

for (int i = 0 ; i<n; i++){
printf("digite o numero %d",i+1);
scanf("%d" , &numeros[i]);
}

maior = numeros[0];
segundo = numeros[0];

for (int i = 1; i < n; i++) {
     if (numeros[i] > maior){
	
           segundo = maior;
            maior = numeros[i];
        } else if (numeros[i] > segundo && numeros[i] != maior) {
            segundo = numeros[i];
        }
    }


printf("o segundo  maior e %d\n", segundo) ;




free(numeros);
    return 0;
}















