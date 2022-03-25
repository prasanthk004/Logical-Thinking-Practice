#include<stdio.h>

int main()
{

	long i ;
	
	system("color A");
	
	for(i=100 ; i>=5 ;i-=5)
	{
	
		printf(" %d ",i) ;
		
	}
	
	printf("\n\n\n\n");
	for(i=5 ; i<=100 ;i+=5)
	{
	
		printf(" %d ",i) ;
		
	}
		printf("\n\n\n\n");
	for(i=1; i<=1000000 ; i*=10)
	{
	
		printf(" %d", i) ;
		
	}	
	
	
		printf("\n\n\n\n");
	for(i=1000000; i>=1 ; i/=10)
	{
	
		printf(" %d", i) ;
		
	}
	
	
		printf("\n\n\n\n");
	
	
		 
}	 	 	 

