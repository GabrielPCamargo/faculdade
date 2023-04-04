/*
	Especificação: Elabore um programa que implemente operações básicas
	de uma calculadora. Porém a operação é escolhida pelo usuário, após
	a apresentação de um menu. As operações matemáticas são realizadas
	sobre 2 números inteiros.
	Apresente o menu desta forma:
		Menu calculadora
		1 - Soma
		2 - Subtração
		3 - Multiplicação
		4 - Divisão
		5 - Potência
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main() {
	int opcao, num1, num2;
	
	while (opcao != 6) {	
	
		printf("Menu Calculadora: \n");
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Multiplicacao\n");
		printf("4 - Divisao\n");
		printf("5 - Potencia\n");
		printf("6 - Fim\n");
		
		printf("Selecione a operacao: ");
		scanf("%d", &opcao);
		
		if(opcao <= 0 || opcao > 6) {
			printf("Opcao Invalida");
		} else {
			
			if(opcao == 6) {
				printf("Programa finalizado");
			} else {
				printf("Digite o primeiro numero: ");
				scanf("%d", &num1);
				
				printf("Digite o segundo numero: ");
				scanf("%d", &num2);
				
				system("cls");
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
						if(num2 == 0) {
							printf("Divisao invalida");
						} else {
							printf("A divisao de %d e %d e %f", num1, num2, (float)num1 / (float)num2);
						}	
						break;
					case 5:
						printf("A potencia da base %d no exponte %d e %g", num1, num2, pow(num1, num2));
						break;
					default:
						printf("Opcao invalida");
				}
					printf("\n========================================\n");
				}
			}
			
	}	
}
