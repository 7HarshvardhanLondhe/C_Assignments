#include<stdio.h>
void main()
{
	int marks=36;
	if(marks>75)
		printf("Destination");	
	if(marks>65 && marks<75)
	  printf("First Class");
	
	if(marks>55 && marks<65)
	  printf("Second Class");
	  
	if(marks>=40 && marks<55)
	  printf("Pass");
	  
	if(marks<40)
	  printf("Failed");
	  
}
