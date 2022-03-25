#include<stdio.h>

int main()

{


	int n,i ;
	
	printf("\n Enter a Mark : ") ; /* Getting mark from user */
	scanf("%d",&n) ;
	
	n=n/10 ;
	
	printf("\n Grade : ");
	switch(n)
	{
		case 0 : 
		case 1 : case 2 : case 3 :
		case 4 : printf(" E" ); break ;
		case 5 : printf(" D" ); break ;
		case 6 :
		case 7 : printf(" C" ); break ;
		case 8 : printf(" B" ); break ;
		case 9 : printf(" A" ); break ;
	 	default : printf("No grade " ); break ;
	}
 
 for (  i=0 ; i<=5 ; i++)
 {
 
 	printf("\n\n");
 }	  	  
}	 	 
			

