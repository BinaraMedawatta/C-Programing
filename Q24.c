#include <stdio.h>

int gpa(int no_cred, int gp_val);

int main(){
	int no_sub, no_cred;
	int T_no_cred;
	char yn, grade, class1;
	
	printf("Enter the Grade and the number of credits : ");
	scanf(" %c %d", &grade, &no_cred);
	
	
	
	printf("Do you need to enter another subject? (Y/N) : ");
	scanf(" %c", &yn);
	
	
	
	if(yn == 'Y'){
		printf("Enter the Grade and the number of credits : ");
		scanf(" %c %d", &grade, &no_cred);
	}
	else if(yn == 'N'){
		printf("Number of subjects that you have entered : %d\n", no_sub);
		printf("Total number of credits : %d\n", T_no_cred);
		printf("Final value of GPA : %d", );
		printf("Final class : %s", &class1)
	}
	
	
	
}
