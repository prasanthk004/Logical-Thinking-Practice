#include<stdio.h>

int main()

{


	float dp , la, p1,p2,p3 ;
	
	
	printf("\n Enter Loan Amount <70000 : ");
	scanf("%f",&la);
	
	if(la<=70000)
	{
	
		if(la>30000)
		{
		
			p1=30000;
			la=la-p1 ;
			
		}
		
		else
		{	 	 
			p1=la ;
			la=0 ;
		}
		
		if(la>22000)
		{
		
			p2=22000;
			la=la-p2 ;
			
		}
		
		else
		{	 	 
			p2=la ;
			la=0 ;
		}
		 
		p3=la ;
		
		printf("\n P1=%.2f P2=%.2f P3=%.2f \n\n\n",p1,p2,p3);
	
		dp=p1*3/100 + p2*10/100+p3*20/100 ;
		
		printf("\n\n You have to pay RS %.2f downpayment\n\n ",dp); 
	}
	
	else
	{
	  printf("\n\n Application Rejected\n\n");
	 }
	 
}	          	   	   	   

