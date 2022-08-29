#include<stdio.h>

main() {
	int x,y;
	y= 4+3*2;         
	x= 3*4/2-2;         
	y= y++;  
	printf("x = %d, y = %d\n", x, y);           
	x += 3;              
	y-=2;   
	printf("x = %d, y = %d\n", x, y);            
	x /= 3;              
	y %=3;              
	x *= y++ + 3;        

	printf("x = %d, y = %d\n", x, y);
}
