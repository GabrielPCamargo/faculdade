#include <stdio.h>
int A[10];  int i,j,n = 8;

void troca(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
    for(i=0;i<n;i++) scanf("%d",&A[i]);
    for(j=0;j<n;j++)
        for(i=0;i<n-1;i++)
            if(A[i]>A[i+1])
                troca(&A[i], &A[i+1]);
    printf("\n================================\n");
    for(i=0;i<n;i++) printf ("%d\n",A[i]);
}
