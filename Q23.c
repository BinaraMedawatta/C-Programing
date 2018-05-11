#include <stdio.h>

int sum_of_n(int n);
float sum_of_1n(float n);
int factorial(int n);
int nCr(int n, int r);

int main(){
	int cho, n, r;
	float m;
	
	do{
		printf("\n*******Main Menu*******");
		printf("\n 1. {1+2+3+...+n}");
		printf("\n 2. {1+1/2+1/3+...+1/n}");
		printf("\n 3. n!");
		printf("\n 4. nCr");
		printf("\n**********End**********");
		
		printf("\nEnter the choice : ");
		scanf(" %d", &cho);
		
		switch(cho){
			case 1 :
				printf("\nEnter n : ");
				scanf(" %d", &n);
				if(n<0){
					printf("\nInvalid input");
				}
				else{
					printf("Answer : %d", sum_of_n(n));
				}
				break;
				
			case 2 :
				printf("\nEnter n : ");
				scanf(" %f", &m);
				if(m<0){
					printf("\nInvalid input");
				}
				else{
					printf("Answer : %f", sum_of_1n(m));
				}
				break;
				
			case 3 :
				printf("\nEnter n : ");
				scanf(" %d", &n);
				if(n<0){
					printf("\nInvalid input");
				}
				else{
					printf("%d! : %d", n, factorial(n));
				}
				break;
				
			case 4 :
				printf("\nEnter n & r : ");
				scanf(" %d %d", &n, &r);
				if(n<0 || r<0){
					printf("\nInvalid input");
				}
				else{
					printf("Answer : %d", nCr(n, r));
				}
				break;
		}
	}while(cho!=5);
}

int sum_of_n(int n){
	int i, total=0;
	for(i=1; i<=n; i++){
		total += i;
	}
	return total;
}

float sum_of_1n(float n){
	float i, total;
	for(i=1; i<=n; i++){
		total += 1/i;
	}
	return total;
}

int factorial(int n){
	int i, fac;
	
	if(n==1){
		return 1;
	}
	else{
		fac = n * factorial(n-1);
		return fac;
	}
}

int nCr(int n, int r){
	int nCr;	
	nCr = factorial(n)/(factorial(n-r)*factorial(r));
	return nCr;
}
