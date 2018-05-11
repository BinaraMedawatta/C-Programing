#include<stdio.h>

main(){
	char arr[200];
	gets(arr);
	
	int i,flag=0;
	for(i=0;i<strlen(arr);i++){
		if(arr[i]=='c'){
			if(arr[i+1]=='o'){
				if(arr[i+2]=='r'){
					if(arr[i+3]=='d'){
						flag=1;
						break;
					}		
				}		
			}	
		}
	}
	
	if(flag==1){
		printf("Word is available");
		
	}else{
		printf("Word is not available");
	}
	
	
}
