#include<stdio.h>
void main(){
	int a=10;
	int b=77;
	int c=20;
	if(a>b && a>c)
	{
		printf("greater no is %d",a );
    }
	else if(b>a && b>c)
	{
		printf("greater no is %d",b );
	}
	else
	{
		printf("greater no is %d",c);
	}
}
