#include<stdio.h>
void main()
{
	int m1=87;
	int m2=91;
	int m3=96;
	int m4=81;
	int m5=79;
	int total=m1+m2+m3+m4+m5;
	int total_marks=500;
	int percentage=((total*100)/total_marks);
	printf("Out of %d total marks are %d and their percentage is %d",total_marks,total,percentage);
}
