#include <stdio.h>

main() {
	int num; 
	scanf("%d", &num);
	
	while(num != 0) {
		printf("num diferente de zero: %d", num);
		scanf("%d", &num);
	}
}
