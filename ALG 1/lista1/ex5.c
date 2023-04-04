/*
	5) Um criador de galinhas deseja saber qual o rendimento diário em ovos. O valor da dúzia de ovos
	 	varia diariamente, mas ele sabe que todas as suas galinhas estão produzindo 1 ovo por dia.
		Faça o programa para informar quanto em R$ o criador está lucrando com os ovos produzidos.
 */
 
 #include<stdio.h>
 
 main() {
 	float valorDuzia;
 	int galinhas, ovoPorGalinha = 1;
 	
 	printf("Digite a quantidade de galinhas que possui: ");
 	scanf("%d", &galinhas);
 	printf("Digite o valor atual da duzia de ovos: ");
 	scanf("%f", &valorDuzia);
 	
 	printf("Produzindo %d ovos por dia voce tem um rendimento de %.2f", galinhas * ovoPorGalinha, (galinhas * ovoPorGalinha / 12) * valorDuzia);
 }
 
