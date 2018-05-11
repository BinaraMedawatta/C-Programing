#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int  main(){
	float r;
	
	printf("Enter the radius : ");
	scanf(" %f", &r);
	
	float area = 4 *  PI * r*r;
	float volume = ((area)*r)/3;
	
	printf("Area : %f", area);
	printf("\nVolume : %f", volume);
	
return 0;
}
