/*
	Especifica��o: 1) Escreva um programa que verifique a validade de uma senha fornecida pelo usu�rio. 
	A senha v�lida � o n�mero 1234. Devem ser impressas as seguintes mensagens: ACESSO PERMITIDO caso
	a senha seja v�lida. ACESSO NEGADO caso a senha seja inv�lida.
*/

#include<stdio.h>

main() {
	int senha;
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	if(senha == 1234) {
		printf("Acesso permitido");
	} else {
		printf("Acesso negado");
	}
}
