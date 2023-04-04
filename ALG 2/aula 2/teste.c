#include <stdio.h>
#include <stdlib.h>
void fat()
{
	int i,n,fatorial;
	fatorial = 1;
	for(i=2;i<=n;i++)
		{ fatorial = fatorial * i; }
}
int main()
{
	int i,n,fatorial;
	printf(“Digite o numero N:”);
	scanf(“%d”, &n);
	fat();
	if(n>=0){printf(“O fatorial de N = %d vale %d.\n”, n, fatorial);}
	else    {printf(“Não existe fatorial de numero negativo\n”);}
  system("PAUSE");	
  return 0;
}
