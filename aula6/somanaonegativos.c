#include<stdio.h>

main() {
	int num1, num2;
	printf("Digite o num1: ");
	scanf("%d", &num1);
	
	while(num1 < 0) {
		printf("Digite num1:\n");
		scanf("%d", &num1);
	}
	
	printf("Digite o num2: ");
	scanf("%d", &num2);
	
	while(num2 < 0) {
		printf("Digite num2:\n");
		scanf("%d", &num2);
	}

	printf("A soma de %d e %d e %d", num1, num2, num1 + num2);
}
