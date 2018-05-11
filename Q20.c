#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	int a=0, e=0, i=0, o=0, u=0;
	int j;
	char c;	
	
	printf("Enter the word : ");
	scanf(" %s", &word);
	
	for(j=0; j<strlen(word); j++){
		c = word[j];
		
		switch(c){
			case 'a' :
				a++;
				break;
			case 'e' :
				e++;
				break;
			case 'i' :
				i++;
				break;
			case 'o' :
				o++;
				break;
			case 'u' :
				u++;
				break;
			default :
				break;
		}
	}
	
	printf("a = %d \t e = %d \t i = %d \t o = %d \t u = %d", a, e, i, o, u);
	
return 0;
}
