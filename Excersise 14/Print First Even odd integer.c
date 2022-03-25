#include<stdio.h>

int main()

{

	int i , j , n ;
	
	printf("\n Enter the value :  ");
	scanf("%d",&n) ;
	
	printf("\n EVEN INTEGERS \n ");
	
	for(i=2; i<=n;i+=2)
	{
	
		printf(" %d",i) ;
		
	}
	printf("\n\n\n\n");
	printf(" \n ODD INTEGERS \n ") ;
	
	for(i=1,j=1 ; i<=n ; i++ , j+=2) 
	{
	
		printf(" %d" , j) ; 
		
	}
	
	printf("\n ODD INTEGERS USING FORMULA (i*2-1) \n ");
	
	for(i=1 ; i<=n ; i++)
	{
	
		printf(" %d",(i*2-1)) ;
	}	 
	
	
	printf("\n\n\n\n");
}	 	 	 	 	 

