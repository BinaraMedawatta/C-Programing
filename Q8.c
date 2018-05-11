#include <stdio.h>

int main(){
	int n, i, sum=0;
	
	printf("Enter the n value : ");
	scanf(" %d", &n);
	
	for(i=1; i<=n; i++){
		printf("%d ", i);
		sum += i;
	}
	
	printf("\nSum : %d", sum);
return 0;
}
