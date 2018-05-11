#include<stdio.h>

int fib(int no){
	
	if(no==0){
		return 0;
	}else if(no==1){
		return 1;
	}else{
		return fib(no-1)+fib(no-2);	
	}
	
}


main(){
	
	int no,i=0;
	
	printf("Input number	:");
	scanf("%d",&no);
	int arr[no];
	int a=no;
	
	for(i=0;i<=no;i++){
		arr[i]=fib(a--);
	}
	
	for(i=no;i>0;i--){
		printf("%d ",arr[i]);
	}
	
}
