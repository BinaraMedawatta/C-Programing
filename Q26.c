#include <stdio.h>

int main(){
	int num,i,totaldiv=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Divisors are\n");
	for(i=1;i<num;i++){
		if(num%i==0){
			totaldiv= totaldiv+i;
			printf("%d\t",i);
		}
	}
	printf("\n");
	
	if(totaldiv==num){
		printf("%d is a perfect number",num);
	}
	else
		printf("%d is a not perfect number",num);
}
