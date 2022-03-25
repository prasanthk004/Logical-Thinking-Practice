#include<stdio.h>

int main()

{

	float x,s,r;
	
	
	for(x=1.3 ; x<=1.4;x+=0.01)
	{
	
		s=x*x-1.596*x+0.266 ;
		
		s=s>0?s:-s ;
		
		printf(" \n x= %f    s=%f",x,s);   
		
		if(s<0.05) 
		{
			r=x ;
		}
		
		
	}
	
	
	printf("\n\n Root of the polynominal is : %f",r);
}	 

