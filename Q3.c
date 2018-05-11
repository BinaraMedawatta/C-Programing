#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
	float r;
	
	printf("Enter the radius : ");
	scanf(" %f", &r);
	
	float a = PI*r*r;
	
	printf("Area : %f", a);
	
return 0;
}
