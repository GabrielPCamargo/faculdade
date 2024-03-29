/*
	Especifica��o: Elabore um programa que implemente opera��es b�sicas
	de uma calculadora. Por�m a opera��o � escolhida pelo usu�rio, ap�s
	a apresenta��o de um menu. As opera��es matem�ticas s�o realizadas
	sobre 2 n�meros inteiros.
	Apresente o menu desta forma:
		Menu calculadora
		1 - Soma
		2 - Subtra��o
		3 - Multiplica��o
		4 - Divis�o
		5 - Pot�ncia
*/

#include<stdio.h>
#include<math.h>

main() {
	int opcao, num1, num2;
	printf(" Menu Calculadora: \n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Potencia\n");
	
	printf("Selecione a operacao: ");
	scanf("%d", &opcao);
	
	if(opcao > 0 && opcao <= 5) {
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
		
		printf("Digite o segundo numero: ");
		scanf("%d", &num2);
		
		switch(opcao) {
			case 1:
				printf("A soma de %d e %d e %d", num1, num2, num1 + num2);
				break;
			case 2:
				printf("A subtracao de %d e %d e %d", num1, num2, num1 - num2);
				break;
			case 3:
				printf("A multiplicao de %d e %d e %d", num1, num2, num1 * num2);
				break;
			case 4:
				if (num2 == 0) {
					printf("Operacao invalida, 0 n�o pode ser divisor");
				} else {
					printf("A divisao de %d e %d e %g", num1, num2, (float)num1 / (float)num2);
				}
				break;
			case 5:
				printf("A potencia da base %d no exponte %d e %g", num1, num2, pow(num1, num2));
				break;
		}	
	} else {
		printf("Operacao invalida");
	}

}
