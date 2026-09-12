#include<stdio.h>
void main()
{
	int l1=10;
	int l2=12;
	int l3=10;
	if(l1==l2 && l2==l3){
		printf("triangle is equilateral");
	}
	else if(l1==l2 || l2==l3 || l3==l1)
	{
		printf("triangle is isoscaleous");
	}
	else{
		printf("triangle is scaler");
	}
	
}
