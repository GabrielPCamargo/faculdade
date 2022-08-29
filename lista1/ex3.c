/* 
 3) Fazer um programa em  C que solicite 2 números e informe: 
	a) A soma dos números;
	b) O produto do primeiro número pelo quadrado do segundo;
	c) O quadrado do primeiro número;
*/

#include<stdio.h>
#include<math.h>

main() {
	int number1, number2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &number1);
	printf("Digite o segundo numero: ");
	scanf("%d", &number2);
	
	printf("A soma dos numeros = %d\n", number1 + number2);
	printf("O produto do primeiro numero pelo quadrado do segundo = %g\n", number1 * pow(number2, 2));
	printf("O quadrado do primeiro numero = %g\n", pow(number1, 2));
	
}

