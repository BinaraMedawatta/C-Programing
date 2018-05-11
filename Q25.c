#include <stdio.h>

int grade(int  mark);

int main(){
	int mark;
	printf("Enter the mark : ");
	scanf(" %d", &mark);
	
	grade(mark);
	
return 0;
}

int grade(int mark){
	
	if(mark>100){
		printf("Invalid Mark");
	}
	else if(mark>75){
		printf("Grade : A");
	}
	else if(mark>60){
		printf("Grade : B");
	}
	else if(mark>45){
		printf("Grade : C");
	}
	else if(mark>35){
		printf("Grade : D");
	}
	else if(mark>0){
		printf("Grade : F");
	}
	else{
		printf("Invalid Mark");
	}
return 0;
}
