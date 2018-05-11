#include <stdio.h>

int main(){
	int n1, n2, i, min, gcd;
	
	printf("Enter the two numbers : ");
	scanf(" %d %d", &n1, &n2);
	
	if(n1>n2){
		min = n2;
	}
	else{
		min = n1;
	}
	
	for(i=1; i<=min; i++){
		if(n1%i==0 && n2%i==0){
			gcd = i;
		}
		else{
			continue;
		}
	}
	
	printf("GCD : %d", gcd);

return 0;
}
