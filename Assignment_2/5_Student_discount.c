#include<stdio.h>
void main()
{
	char choice='n';
	double price=550;
	double t_price,discount=0;
	
	if(choice=='y')
	{
		if(price>500)
			discount=price*0.20;
		
		else
			discount=price*0.10;
	}
	else
	{
		if(price>=600)
			discount=price * 0.15;
	}
	t_price=price-discount;
	if(discount==0)
	  printf("final price=%.2lf",t_price);
	else
	  printf("final price on actual price %.2lf is %.2lf with %.2lf discount",price,t_price,discount);
	
	
}
