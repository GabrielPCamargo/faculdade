/*
	Especificação: 5)	O programa deve calcular o peso ideal de uma pessoa, porém este cálculo é diferente para homens e mulheres,
	assim utilize a fórmula adequada:
	homens: (72.7 * Altura) -58 
	mulheres: (62.1 * Altura) -44.7

*/

#include<stdio.h>

main() {
	char sexo;
	float altura, pesoIdeal;
	
	printf("Digite o sexo (F/M): ");
	scanf("%c", &sexo);
	
	printf("Digite sua altura:");
	scanf("%f", &altura);
	
	if(sexo == 'F' || sexo == 'f') {
		pesoIdeal = (62.1 * altura) -44.7;
	} else {
		if(sexo == 'M' || sexo == 'm') {
			pesoIdeal = (72.7 * altura) -58;
		}	
	}
	
	printf("O seu peso ideal e igual a %.2f", pesoIdeal);
	
}

