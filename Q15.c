#include<stdio.h>


main(){
	
	int pAmount,interest,time;
	printf("Input Principal Amount	:");
	scanf("%d",&pAmount);
	printf("Input Interest	:");
	scanf("%d",&interest);
	printf("Input Time	:");
	scanf("%d",&time);
	
	printf("Simple Interest is	:%f",(pAmount*time*interest)/100.0);
}
