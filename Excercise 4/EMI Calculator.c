#include<stdio.h>
#include<math.h>

int main()

{

	float a,p,r,n ;
	
	printf("\n Principal Amt : ");
	scanf("%f",&p);
	
	printf("\n Rate of interest : ");
	scanf("%f",&r);
	
	printf("\n No.of Tenure     : ");
	scanf("%f",&n);
	
	r=r/100 ;
	
	a=p*((r*pow((1+r),n)) / (pow((1+r),n) - 1)) ;
	
	printf("\n Emi Amount : %.2f",a);
	
}	 
	

