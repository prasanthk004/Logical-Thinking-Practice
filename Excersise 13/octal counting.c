#include<stdio.h>

int main()

{

	int i , n ;
	
	printf("\n Enter the range  :  " );
	scanf("%d",&n) ;
	
	printf("\n  Decimal    Octal ") ;
	for(i=1 ; i<=n ; i++ )
	
	{
	
		printf("\n  %-7d    %-5o ", i,i) ; 
	}



}

