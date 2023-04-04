/*
	3)	A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental 
	importância por ajudar a compreender aquilo que os especialistas chamam de dinâmica populacional 
	e a entender sua relação com variáveis que influenciam o desenvolvimento, como qualidade de vida, 
	migrações, , fatores socioeconômicos e localização. Sabendo disso, crie um programa que calcule 
	os dois indicadores utilizando o comando switch.

Observação : A taxa de natalidade é calculada pela seguinte fórmula: 
taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes;

Enquanto que, a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.

*/

#include<stdio.h>

main() {
	int numeroHabitantes, numeroCriancasNascidas, numeroObitos;
	
	printf("Digite o numero de habitantes: ");
	scanf("%d", &numeroHabitantes);
	
	if (numeroHabitantes > 0) {
		printf("Digite o numero de criancas nascidas: ");
		scanf("%d", &numeroCriancasNascidas);
		
		printf("Digite o numero de obitos: ");
		scanf("%d", &numeroObitos);
		
		if(numeroCriancasNascidas > 0 && numeroObitos > 0) {
			printf("A taxa de natalidade e de %g a cada 1000 habitantes \n", ((float)numeroCriancasNascidas * 1000) / numeroHabitantes);
			printf("A taxa de mortalidade e de %g a cada 1000 habitantes", ((float)numeroObitos * 1000) / numeroHabitantes);
		} else {
			printf("Criancas nascidas e obitos nao podem ser negativos");
		}
	} else {
		printf("Numero de habitantes nao pode ser zero");
	}
}
