#include <stdio.h>

struct student{
	int sid;
	char first_name[25];
	char last_name[25];
	int math_marks;
	int chem_marks;
	int phy_marks;
	
};

int total(int m, int c, int p);
int t_total(int t1, int t2, int t3, int t4);
float average(float total);
float average_s(float total);

int main(){
	float tot, tot_m, tot_c, tot_p, avg_m, avg_c, avg_p;
	int tot_i;
	
	struct student s1;
	struct student s2;
	struct student s3;
	struct student s4;
	
	s1.sid = 1;
	s2.sid = 2;
	s3.sid = 3;
	s4.sid = 4;
	
//	Student 1

	printf("Student 1");

	printf("\n\tFirst name : ");
	scanf(" %s", &s1.first_name);
	
	printf("\tLast name : ");
	scanf(" %s", &s1.last_name);
	
	printf("\tEnter Mathematics marks : ");
	scanf(" %d", &s1.math_marks);
	
	printf("\tEnter Chemistry marks : ");
	scanf(" %d", &s1.chem_marks);

	printf("\tEnter Physics marks : ");
	scanf(" %d", &s1.phy_marks);
	
	printf("\tTotal : %d", total(s1.math_marks, s1.chem_marks, s1.phy_marks));
	tot_i = total(s1.math_marks, s1.chem_marks, s1.phy_marks);
	
	tot = (float)tot_i;
	printf("\n\tAverage : %f", average(tot));


//	Student 2

	printf("\nStudent 2");

	printf("\n\tFirst name : ");
	scanf(" %s", &s2.first_name);
	
	printf("\tLast name : ");
	scanf(" %s", &s2.last_name);
	
	printf("\tEnter Mathematics marks : ");
	scanf(" %d", &s2.math_marks);
	
	printf("\tEnter Chemistry marks : ");
	scanf(" %d", &s2.chem_marks);

	printf("\tEnter Physics marks : ");
	scanf(" %d", &s2.phy_marks);
	
	printf("\tTotal : %d", total(s2.math_marks, s2.chem_marks, s2.phy_marks));
	tot_i = total(s2.math_marks, s2.chem_marks, s2.phy_marks);
	
	tot = (float)tot_i;
	printf("\n\tAverage : %f", average(tot));

//	Student 3

	printf("\nStudent 3");

	printf("\n\tFirst name : ");
	scanf(" %s", &s3.first_name);
	
	printf("\tLast name : ");
	scanf(" %s", &s3.last_name);
	
	printf("\tEnter Mathematics marks : ");
	scanf(" %d", &s3.math_marks);
	
	printf("\tEnter Chemistry marks : ");
	scanf(" %d", &s3.chem_marks);

	printf("\tEnter Physics marks : ");
	scanf(" %d", &s3.phy_marks);
	
	printf("\tTotal : %d", total(s3.math_marks, s3.chem_marks, s3.phy_marks));
	tot_i = total(s3.math_marks, s3.chem_marks, s3.phy_marks);
	
	tot = (float)tot_i;
	printf("\n\tAverage : %f", average(tot));

//	Student 4

	printf("\nStudent 4");

	printf("\n\tFirst name : ");
	scanf(" %s", &s4.first_name);
	
	printf("\tLast name : ");
	scanf(" %s", &s4.last_name);
	
	printf("\tEnter Mathematics marks : ");
	scanf(" %d", &s4.math_marks);
	
	printf("\tEnter Chemistry marks : ");
	scanf(" %d", &s4.chem_marks);

	printf("\tEnter Physics marks : ");
	scanf(" %d", &s4.phy_marks);
	
	printf("\tTotal : %d", total(s4.math_marks, s4.chem_marks, s4.phy_marks));
	tot_i = total(s4.math_marks, s4.chem_marks, s4.phy_marks);
	
	tot = (float)tot_i;
	printf("\n\tAverage : %f", average(tot));

//	Class Details

	printf("\n\nClass Details");
	
	tot_m = t_total(s1.math_marks, s2.math_marks, s3.math_marks, s4.math_marks);
	tot = (float)tot_m;
	printf("\n\tClass Average Math's marks : %f", average_s(tot));
	avg_m = average_s(tot);

	tot_c = t_total(s1.chem_marks, s2.chem_marks, s3.chem_marks, s4.chem_marks);
	tot = (float)tot_c;
	printf("\n\tClass Average Chemistry marks : %f", average_s(tot));
	avg_c = average_s(tot);
	
	tot_p = t_total(s1.phy_marks, s2.phy_marks, s3.phy_marks, s4.phy_marks);
	tot = (float)tot_p;
	printf("\n\tClass Average Physics marks : %f", average_s(tot));
	avg_p = average_s(tot);
	
	tot_i = total(avg_m, avg_c, avg_p);
	tot = (float)tot_i;
	printf("\n\tAverage : %f", average(tot));
return 0;
}

int total(int m, int c, int p){
	int total;
	
	total = m + c + p;
	
	return total;
}

float average(float total){
	float avg;
	avg = total/3;
	return avg;
}

float average_s(float total){
	float avg;
	avg = total/4;
	return avg;
}

int t_total(int t1, int t2, int t3, int t4){
	int total;
	
	total = t1 + t2 + t3 + t4;
	
	return total;
}
