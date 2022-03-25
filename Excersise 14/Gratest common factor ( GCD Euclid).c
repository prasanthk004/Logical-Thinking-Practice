#include<stdio.h>

int main()

{

	int A,B,ta,tb,r ;
	
	printf("\n Enter A Value : ");
	scanf("%d",&A) ;
	
	printf("\n Enter B Value : ");
	scanf("%d",&B) ;
	
	
	ta=A ; 
	tb=B  ;
	
	
	while(1)
	{
			printf("\n A=%d  B=%d " ,ta,tb) ;
		r=ta%tb ;
		
		if(r==0)
		break ;
		
		
	
		
		ta=tb  ;
		
		tb=r ;
		
		
	}
	
	
	
	
	printf("\n\n Greatest common factor of %d and %d is %d " , A,B, tb) ;
	
	
}	 
	
	
	
	

