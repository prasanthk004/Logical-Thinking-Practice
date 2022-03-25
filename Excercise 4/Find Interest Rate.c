#include<stdio.h>

int main()

{

	float p,N,n,F,at,R;
	
	printf("\n Princple Amt                : ");
	scanf("%f",&p);
	
	printf("\n Total Payments              : ");
	scanf("%f",&n);
	
	printf("\n No.of Payments Amt per year : ");
	scanf("%f",&N);
	
	printf("\n Amount to be retuned per month : ");
	scanf("%f",&at);	
	
	F=at*n-p;
	
	
	
	R=((2+N)*F)/(p*(n+1)) ;
	
	
	printf("\n\n Interest Rate : %.2f ",R*100);
	
}	 
	
	
	
	
	
	
	
	

