#include <stdio.h>

int main(){
	int year, reg_no;
	char faculty;
	
	printf("Enter the Faculty, Year & RegNo. : ");
	scanf(" %c %d %d", &faculty, &year, &reg_no);
	printf("%c/%d/%d", faculty, year, reg_no);
	
return 0;
}
