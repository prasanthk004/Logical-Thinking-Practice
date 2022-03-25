#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()

{

	float price , dp , p , i , m , amt,cal;
	
	printf("\n Enter the price : ");
	scanf("%f",&price);
	
	printf("\n Enter downPayment : ");
	scanf("%f",&dp);
	
	printf("\n Enter Rate OF interest : ");
	scanf("%f",&i);
	
	printf("\n Enter no Of  years : ");
	scanf("%f",&m);
	
	p=price-dp ;
	m=m*12 ;
	i=i/100 ;
	cal= pow((i+1),m);
	amt = i * p * (cal/(cal-1)) ;
	
	printf("\n\n P=%f i=%f m=%.f cal=%f amt=%f",p,i,m,cal,amt);
	
	printf("\n Mothly Payment Amount : %.3f",amt);
	
	printf("\n Total to be paid in %f months : %.3f",m,amt*m);
	
	printf("\n Interest Amount : %.3f\n\n",p-(amt*m));
	
	
}	 

