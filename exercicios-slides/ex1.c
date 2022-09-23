#include<stdio.h>

main() {
	
	int vitorias, derrotas, empates, golsFavor, golsSofridos, cartoesVermelhos, times;
	int maiorVitorias = 0, maiorDerrotas = 0, saldoTotal = 0, totalTimes = 5, maisTresCartoes = 0;
	
	for(times = 0; times < totalTimes; times++) {
		printf("Digite o numero de vitorias: ");
		scanf("%d", &vitorias);
		
		printf("Digite o numero de derrotas: ");
		scanf("%d", &derrotas);
		
		printf("Digite o numero de empates: ");
		scanf("%d", &empates);
		
		printf("Digite o numero de gols a favor: ");
		scanf("%d", &golsFavor);
		
		printf("Digite o numero de gols sofridos: ");
		scanf("%d", &golsSofridos);
		
		printf("Digite o numero de cartões vermelhos recebidos: ");
		scanf("%d", &cartoesVermelhos);
		
		if(vitorias > maiorVitorias) {
			maiorVitorias = vitorias;	
		} else if(derrotas > maiorDerrotas) maiorDerrotas = derrotas;
		
		saldoTotal += (golsFavor - golsSofridos);
		
		if(cartoesVermelhos > 3) {
			maisTresCartoes++;
		}
		
	}
	
	printf("O maior numero de vitorias: %d\n", maiorVitorias);
	printf("O maior numero de derrotas: %d\n", maiorDerrotas);
	printf("O saldo medio de gols: %.2f\n", (float)saldoTotal/totalTimes);
	printf("Porcentagem de times com mais de tres cartoes vermelhos: %.2f\n", ((float)maisTresCartoes/totalTimes) * 100);
}
