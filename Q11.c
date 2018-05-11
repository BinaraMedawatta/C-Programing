#include<stdio.h>

main(){
	
	int number,i,j;
	printf("Enter a three digit integer: ");
    scanf("%d", &number);
    
    int dup,rem,result=0;
    dup=number;
    
    while(dup!=0){
    	rem=dup%10;
    	result+=rem*rem*rem;
    	dup/=10;
	}
	if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
	
	
	
}
