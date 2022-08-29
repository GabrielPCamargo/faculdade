/* 
	4) Um fazendeiro deseja saber quantos litros de água ele está gastando por dia, sabendo-se
		que cada limoeiro necessita de 2 litros de água por dia e cada goiabeira de 3 litros. 
		Solicite as informações sobre as quantidades de árvores de cada tipo que o fazendeiro
		possui e informe a quantidade de litros gastos por dia naquela fazenda.
*/

#include<stdio.h>

main() {
	int limoeiros, goiabeiras;
	
	printf("Digite quantos limeiros voce possui: ");
	scanf("%d", &limoeiros);
	
	printf("Digite quantos goaiabeiras voce possui: ");
	scanf("%d", &goiabeiras);
	
	printf("Sao gastos %d litros de agua por dia na fazenda", (limoeiros * 2) + (goiabeiras * 3));
}
