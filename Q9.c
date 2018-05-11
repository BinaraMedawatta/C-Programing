#include<stdio.h>

main(){
	
	int a,b,c,min,max,i;
	

		printf("Input a		:");
		scanf("%d",&a);
		printf("Input b		:");
		scanf("%d",&b);
		printf("Input c		:");
		scanf("%d",&c);
	
	
		min=a;
		if(b<min){
			min=b;
		}if(c<min){
			min=c;
		}
	
		max=a;
		if(b>max){
			max=b;
		}if(c>max){
			max=c;
		}
		printf("MIN is	:%d\n",min);
		printf("MAX is	:%d\n",max);
	
	
}
