#include <stdio.h>

int age, yearWanted, actualYear;

main (){
	printf("Digite a idade atual: ");
	scanf("%d", &age);
	printf("Digite o ano atual: ");
	scanf("%d", &actualYear);
	printf("Digite o ano que deseja saber sua idade: ");
	scanf("%d", &yearWanted);
	printf("Sua idade atual e %d e no ano %d voce tera %d anos de idade", age, yearWanted, yearWanted - actualYear + age);
}
