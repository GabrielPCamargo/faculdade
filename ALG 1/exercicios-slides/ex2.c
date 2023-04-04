#include<stdio.h>

main() {
	int i, num, soma = 0, maior, menor;
	for(i = 0; i < 5; i++) {
		do {
			printf("Digite um numero: ");
			scanf("%d", &num);	
		} while (num < 0);
		
		if(num % 2 == 1 && num >= 100 && num <= 200) soma += num;
		if(num > maior || i == 0) maior = num;
		if(num < menor || i == 0) menor = num;
	}
	
	printf("Total soma: %d\n", soma);
	printf("O maior numero: %d\n", maior);
	printf("O menor numero: %d\n", menor);
}
