/*
	2)	Usando as consistências do programa 1. Informe o dia seguinte, a partir de uma data (dia, mês e ano)
	 informada pelo teclado. A saída deve ter dia, mês e ano.
*/

#include<stdio.h>
#include<stdbool.h>

main() {
	int dia, mes, ano, diaSeguinte, mesSeguinte, anoSeguinte;
	bool bissexto, diaValido = true;
	
	printf("Digite a data (dd/mm/aaaa): ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	
	if(dia < 0 || dia > 31) {
		printf("Dia invalido!");
	} else {
		if(mes <= 0 || mes > 12) {
		printf("Mes invalido");
		} else {
			
			if(ano <= 0) {
				printf("Ano invalido");
			} else {
				diaSeguinte = dia + 1;
				mesSeguinte = mes;
				anoSeguinte = ano;
				
				//Verificação do dia
				switch (mes) {
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10: {
						if (dia == 31) {
							diaSeguinte = 1;
							mesSeguinte = mes + 1;
						}
						break;
					}
							
					case 12:{
						if (dia == 31) {
							diaSeguinte = 1;
							mesSeguinte = 1;
							anoSeguinte = ano + 1;
						}
						break;
					}	
					case 2: {
						if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
							bissexto = true;
						} else {
							bissexto = false;
						}	
						
						if(dia >= 28) {
							if(dia == 29) {
								//Ano bissexto;
								if (!bissexto) {
									diaValido = false;
								} else {
									diaSeguinte = 1;
									mesSeguinte = mes + 1;
								}
							} else {
								if (dia == 28) {
									if(!bissexto) {
										diaSeguinte = 1;
										mesSeguinte = mes + 1;
									} else {
										diaSeguinte = dia + 1;
									}
								}
							}
						}
						break;
					}
					default: {
						if (dia == 31) {
							diaValido = false;
						} else {
							if(dia == 30) {
								diaSeguinte = 1;
								mesSeguinte = mes + 1;
								anoSeguinte = ano;
							}
						}
						break;
					}
				}
				
				//Devolutiva se dia é valido
				if(!diaValido) {
					printf("Dia invalido");	
				} else {
				
					if(mesSeguinte < 10) {
						printf("%d/0%d/%d", diaSeguinte, mesSeguinte, anoSeguinte);
					} else {
						printf("%d/%d/%d", diaSeguinte, mesSeguinte, anoSeguinte);
					}
				}	
			}		
		}
	}
}
