#include <stdio.h>

int main(){
	int i, n, ans;
	
	printf("Enter the number : ");
	scanf(" %d", &n);
	
	for(i=1; i<=12; i++){
		ans = n * i;
		printf("%d * %d = %d\n", n, i, ans);
	}
}
