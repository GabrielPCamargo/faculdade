/*
	Escreva um programa que pede para o usuário entrar um número correspondente a um dia
	da semana e que então apresente na tela o nome do dia, utilizando o comando switch.
*/

#include<stdio.h>

main() {
	int diadaSemana;
	printf("Digite o numero do dia da semana: ");
	scanf("%d", &diadaSemana);
	
	switch(diadaSemana) {
		case 1:
			printf("Domingo");
			break;
		
		case 2:
			printf("Segunda-feira");
			break;
		
		case 3:
			printf("Terca-feira");
			break;
		
		case 4:
			printf("Quarta-feira");
			break;
			
		case 5:
			printf("Quinta-feira");
			break;
		
		case 6:
			printf("Sexta-feira");
			break;
			
		case 7:
			printf("Sabado");
			break;
		
		default:
			printf("Dia da semana invalido");
		
	}
}
