#include<stdio.h>

int main()

{

	int i ,j ; 
	printf("\n\n\n\n");
	for(i=1 ; i<=21 ; i++ )
	{
		printf("                                  ");       
		
		
		if(i%5==1)
		{
			printf("\n*");
			for(j=1 ; j<=6 ; j++)
			printf("*****") ; 	  	  
			
		    	  
		  
		} 
		
		
		else
		{
		
			printf("\n*") ;
			
			for(j=1 ; j<=6 ; j++)
			printf("    *");
			
			
		}
		
		
		
	}
	
	
	
}	 	 	 

