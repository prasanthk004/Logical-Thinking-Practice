#include<stdio.h>

int main()

{

	float samt , camt ;
	
	printf("\n Enter salse amount : ");
	scanf("%f",&samt);
	
	if(samt>10000)
	{
		printf("\n Commission percentage : 10% ");
		camt=samt*10.0/100 ;
		
	}
	
	else
	{
		printf("\n Commission percentage : 8.5% ");
		camt=samt*8.5/100 ; 
		
	}
	
	
	printf("\n\n Commission amount : %.2f RS  \n\n",camt );
	
}	 	 	 
			

