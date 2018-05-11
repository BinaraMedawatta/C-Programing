#include <stdio.h>

int main(){
	float i, n, sum=0;
	
	printf("Enter n : ");
	scanf(" %f", &n);
	
	for(i=1; i<=n; i++){
		sum += 1/i;
	}
	
	printf("Sum : %f", sum);
}
