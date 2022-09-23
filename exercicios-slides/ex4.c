#include<stdio.h>

main() {
	
	int contador = 1;
	char continuar;
	float nota1, nota2, nota3, menorMedia, maiorMedia;
	float maiorNota1, menorNota1, maiorNota2, menorNota2, maiorNota3, menorNota3;
	
	do {
		printf("Digite as notas do %d° aluno: ", contador);
		scanf("%f %f %f", &nota1, &nota2, &nota3);
		printf("Deseja inserir as notas de outro aluno? (s/n):");
		scanf(" %c", &continuar);
		
		if(nota1 > maiorNota1 || contador == 1) maiorNota1 = nota1;
		if(nota1 < menorNota1 || contador == 1) menorNota1 = nota1;
		
		if(nota2 > maiorNota2 || contador == 1) maiorNota2 = nota2;
		if(nota2 < menorNota2 || contador == 1) menorNota2 = nota2;
		
		if(nota3 > maiorNota3 || contador == 1) maiorNota3 = nota3;
		if(nota3 < menorNota3 || contador == 1) menorNota3 = nota3;
		contador++;
		
	} while (continuar != 'n' && continuar != 'N');
	
	maiorMedia = (maiorNota1 + maiorNota2 + maiorNota3) / 3;
	menorMedia = (menorNota1 + menorNota2 + menorNota3) / 3; 
	
	printf("| 1°Exercicio | 2°Exercicio | 3°Exercicio |    Media    |\n");
	printf("| Maior|Menor | Maior|Menor | Maior|Menor | Maior|Menor |\n");
	printf("|  %.2f %.2f  |  %.2f %.2f  |  %.2f %.2f  |  %.2f %.2f  |", 
	maiorNota1, menorNota1, maiorNota2, menorNota2, maiorNota3, menorNota3, maiorMedia, menorMedia);
}
