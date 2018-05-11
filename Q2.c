#include<stdio.h>
main(){
	
	int a,b,c;
	printf("Input a,b,c  in the format ax2+bx+c=0\n");
	
	printf("Input a	:");
	scanf("%d",&a);
	printf("Input b	:");
	scanf("%d",&b);
	printf("Input c	:");
	scanf("%d",&c);
	
	printf("Value of %d^2 +%dx+%d is :%d \n",a,b,c,(b*b)-4*a*c);
	
	
		
}
