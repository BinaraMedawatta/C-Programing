#include <stdio.h>

int main(){
	int i=0, count=0;
	
	do{
		i++;
		if(i%8==0 && i%12==0){
			printf(" %d", i);
			count++;
		}
		else{
			continue;
		}
	}while(count != 3);
	
return 0;
}
