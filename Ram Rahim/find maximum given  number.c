#include<stdio.h>

int main()

{


	int i , max , n , x,s  ;
	
  /*Getting Inputs */
 
	printf("\n Enter the divisior : ");
	scanf("%d",&x) ;
	
	printf("\n Enter bound : ");
	scanf("%d",&n) ;

		/* 
	max= 0 ;
	s=3 ;
	x=3 ;
	n=10 ;
		
	*/ 
 	
	max=n-(n%x) ;
	 
	
	printf("\n\n Maximum Number is : %d \n\n" , max) ;
	
	
}

