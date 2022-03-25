#include<stdio.h>

int main()

{

	float oz , cent, bal,mul ; 
	
	printf("\n Enter OZ : ");
	scanf("%f",&oz) ;
	
	if(oz>1)
	{
	 
	 cent=20 ;
	 
	 oz-=1 ;
     bal=oz-(int)oz ; 
	 oz-=bal ;  
	  
	 
	 cent+=oz*17 ;
	 
	 if(bal>0)
	 {
	 	cent+=17 ;
	 }	  	  
	 	 	 
	
	}
	
	else
	{
	
		cent=20 ;
	}
	
	printf("\n Amount Payable : %.f Cents " ,cent) ;
		
}	 	 

