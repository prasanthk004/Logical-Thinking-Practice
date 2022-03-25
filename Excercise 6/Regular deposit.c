#include<stdio.h>
#include<math.h>


int main()

{

	float p,r,i,n,y ;
	
	printf("\n Enter estimated Amount : ");
	scanf("%f",&p);
	
	printf("\n Enter Credit interest rate : ");
	scanf("%f",&i);
	
	printf("\n Enter no.of Deposits per year : ");
	scanf("%f",&n);
	
	printf("\n Enter no.of Years : ");
	scanf("%f",&y);
	
	i=i/100 ;
	
	
	r = p * ((i/n)/(pow(1+i/n,n*y)-1)) ;
	
	printf("\n Regular deposit amount per instalment %.2f RS\n\n\n",r);
	
}

