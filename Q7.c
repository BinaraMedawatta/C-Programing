#include <stdio.h>

int main(){
	float a, b, c, total = 0.0, average;
	
	printf("Enter three numbers : ");
	scanf(" %f %f %f", &a, &b, &c);
	
	total = a + b + c;
	average = total / 3;
	
	printf("Total : %f", total);
	printf("\nAverage : %f", average);

return 0;
}
