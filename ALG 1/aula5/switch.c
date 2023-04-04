#include<stdio.h>

main() {
	int num;
	printf("Digite um numero de 1 a 5: ");
	scanf("%d", &num);
	
	switch(num) {
		case 1: 
			printf("um");
			break;
		
		case 2: 
			printf("dois");
			break;
				
		case 3: 
			printf("tres");
			break;
		
		case 4: 
			printf("quatro");
			break;
				
		case 5: 
			printf("cinco");
			break;
				
		default: 
			printf("o num digitado nao foi de 1 a 5");
	}
}
