#include <stdio.h>

int main(){
char senha[100];

printf("digite a senha");
scanf("%s",senha);


int temnumero = 0;
int temminusculo = 0;
int temmaiusculo = 0;
int temsimbolo = 0;



for (int i = 0; senha[i] != '\0'; i++){
if (senha[i] >= '0' && senha[i] <= '9'){
 temnumero = 1;
}

else if (senha[i] >= 'a' && senha[i] <= 'z'){
temminusculo = 1;
}




else if (senha[i] >= 'A' && senha[i] <= 'Z'){
temmaiusculo = 1;

}

else{
  temsimbolo = 1;

   } 



 }
 
int total = temnumero + temminusculo + temmaiusculo + temsimbolo;
  
  if(total == 4){
  printf("senha forte\n");
  
  }
  
  else if(total >= 2){
 printf("senha media\n");
  }
  
  else{
  	printf("senha fraca\n");
  }
  
  return 0;
  
}