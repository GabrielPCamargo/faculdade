/*
	1)	Elabore um programa para a partir de uma data informada de maneira separada dia,
	 m�s e ano. Fa�a as consist�ncias para verificar se � uma data v�lida.
*/

#include<stdio.h>
#include<stdbool.h>

main() {
	int dia, mes, ano;
	bool bissexto, diaValido = true;
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	
	//Lembrar da consist�ncia do dia primeiro, encadeado com o m�s
	if(dia <= 0 || dia > 31) {
		printf("Dia invalido");
	} else {
		printf("Digite o mes: ");
		scanf("%d", &mes);
		
		if(mes < 0 || mes >  12) {
			printf("mes invalido");
		} else {
			printf("Digite o ano: ");
			scanf("%d", &ano);
			
			if(ano <= 0) {
				printf("Ano invalido");
			} else {
				
				//Verifica��o dia por m�s
				switch (mes) {
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:{
						if (dia > 31) diaValido = false;
						break;
					}	
					case 2: {
						if(dia >= 29) {
							if(dia == 29) {
								//Ano bissexto;
								if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
									bissexto = true;
								} else {
									diaValido = false;
								}	
							}
							
						}
						break;
					}
					case 4:
					case 6:
					case 9:
					case 11: {
						if (dia > 30) diaValido = false;
						break;
					}
				
				}
				
				//Devolutiva se dia � valido
				if(diaValido) {
					printf("Data valida!");	
				} else {
					printf("Dia invalido");
				}	
			}
		}
	}
	
}
