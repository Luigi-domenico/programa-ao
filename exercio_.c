 #include <stdio.h>
 int main(){
 	float num1, num2, resultado;
 	char operadores;
 	
 	
 	printf("digite o num1:");
 	scanf("%f" , & num1);
 	
 	
 	printf("digite o num2:");
 	scanf("%f" , & num2);
 	
 	printf("digite o operadores:");
 	scanf(" %c", & operadores);
 	
 	if(operadores == '+'){
	resultado = num1 + num2;
	
	}
	
	else if (operadores == '-'){
	resultado = num1 - num2;
	
	}
 	
 	else if (operadores == '*'){
	resultado =num1 * num2;
	 }
 
    else if (operadores == '/'){
	resultado = num1 / num2;

	}
	
 else{
 printf("operacao invalida\n");
}

 
 printf("Resultado: %f\n", resultado);
 
 return 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 }
 