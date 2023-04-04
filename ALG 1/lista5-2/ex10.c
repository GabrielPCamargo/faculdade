/*
10) Escreva um algoritmo que leia um valor inicial A e imprima a sequência de valores do cálculo de A! e o seu resultado. 
Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120
*/

main() {
	int valorInicial, valorTotal = 1, multiplicador;
	
	printf("Digite um numero para saber seu fatorial: ");
	scanf("%d", &valorInicial);
	
	multiplicador = valorInicial;
	printf("%d! = ", multiplicador);
	
	while(multiplicador > 0) {
		if (multiplicador == 1) {
			printf("%d", multiplicador);
		} else {
			printf("%d x ", multiplicador);
		}
		valorTotal *= multiplicador;
		multiplicador--;
	}
	
	printf(" = %d ", valorTotal);
	
}
