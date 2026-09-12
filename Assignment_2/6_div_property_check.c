#include<stdio.h>
void main()
{
	int a=99;
	if(a%3==0 && a%5==0)
	  printf("%d number div by 3 and 5",a);
	if(a%3 ==0 && a%5 !=0)
	 printf("%d number div by only 3 not 5",a);
	if(a%3 !=0 && a%5 ==0)
	 printf("%d number div by only 5 not 3",a);
	if(a%3!=0 && a%5 != 0)
	  printf("%d number not divisible by both 3 or 5",a);
}
