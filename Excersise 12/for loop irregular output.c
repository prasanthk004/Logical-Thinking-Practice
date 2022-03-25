#include<stdio.h>

int main()

{


	int i , n,x=0 ; 
	
	
	for(i=0 ; i<=100 ; i+=5)
	{
	
		printf(" %d ", i) ;
		
		x++ ;
		
	}
	printf("\n\n\n\n\n\n\n");
	
	for(i=1;i<=100 ; i++)
	{
	
		if(i%2==0)
		{
			printf(" %d",-i) ;
		}
		else
		{
		printf(" %d",i) ;	
		}	 
		
	}
	
		printf("\n\n\n\n\n\n\n\n\n");	
	
	
	for(i=1,x=-1 ; i<=100 ; i++ , x*=-1)
	{
	
		printf(" %d",i*x) ;
		
	}	 
	
	
	
	printf("\n\n\n\n\n\n\n\n\n");	
		
	printf("\n Enter N : ");
	scanf("%d",&n) ;
	

	
	while(n>=1)
	{
	
		printf(" %d ",n) ;
		n-=1 ;
	}	 	 
	 
	printf("\n\n\n\n\n\n\n\n\n");
}	 	 	 

