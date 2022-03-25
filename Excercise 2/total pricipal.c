#include<stdio.h>
#include<math.h>

int main()

{

	float P,T,I; int n;
	
	printf("\n Principal Amt : " );
	scanf("%f",&P);
	
	printf("\n Interest Rate : ");
	scanf("%f",&I);
	
	printf("\n No.Of Years   : ");
	scanf("%d",&n);
	
	T=P * pow((1+I/100),n);
	
	printf("\n Your Total Amount : %.2f RS",T);
	
}	 

