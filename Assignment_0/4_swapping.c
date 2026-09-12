#include<stdio.h>
void main(){
	int a=10;
	int b=20;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("swap using temp a is %d and b is %d",a,b);
}
