#include <stdio.h>

struct athlete{
	int id;
	char s_time[10];
	char e_time[10];
	int time;
};

void timecal(char s_time, char e_time);

int main(){
	int time;
	
	struct athlete a1;
	struct athlete a2;
	struct athlete a3;
	
//	Details about 1st athlete
	
	printf("Enter the ID of first athlete : ");
	scanf(" %d", &a1.id);
	
	printf("Start time : ");
	scanf(" %s", &a1.s_time);
	
	printf("End time : ");
	scanf(" %s", &a1.e_time);
	
	time = timecal(a1.s_time, a1.e_time);
	
	printf("time : %d", time);
	
	
//	Details about 2nd athlete
	
	printf("Enter the ID of second athlete : ");
	scanf(" %d", &a2.id);
	
	puts("Start time : ");
	gets(a2.s_time);
	
	puts("End time : ");
	gets(a2.e_time);
	
//	Details about 3rd athlete
	
	printf("Enter the ID of third athlete : ");
	scanf(" %d", &a3.id);
			
	puts("Start time : ");
	gets(a3.s_time);
	
	puts("End time : ");
	gets(a3.e_time);
	
}

void time(char s_time, char e_time){
	int time = 10;
	
	return time;
}


