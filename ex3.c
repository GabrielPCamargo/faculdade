#include <stdio.h>
#include <locale.h>

float salary1, salary2, salary3, salarySum;

main (){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite seu 1° salário: ");
	scanf("%f", &salary1);
	printf("Digite seu 2° salário: ");
	scanf("%f", &salary2);
	printf("Digite seu 3° salário: ");
	scanf("%f", &salary3);
	salarySum = (salary1 + salary2) + salary3;
	printf("O total dos três salários é %.2f", salarySum);
}

