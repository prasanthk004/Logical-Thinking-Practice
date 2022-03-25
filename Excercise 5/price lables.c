#include<stdio.h>

int main()

{

	float p,up,su,oz ;
	char item[25] ;
	
	printf("\n Enter Item Name : ");
	gets(item) ;
	
	printf("\n Enter the price : ");
	scanf("%f",&p);
	
	printf("\n Enter OZ you bought : ");
	scanf("%f",&oz) ;
	
	printf("\n Enter standard unit size : ");
	scanf("%f",&su);
	
	
	up= p / oz * su ;
	
	printf("\n %-5.2f    %-12s   %-5.2f oz. ",p,item,oz);
	printf("\n Unit Price   %-5.2f  for  %5.f oz.\n\n",up,su);
	
}	 

