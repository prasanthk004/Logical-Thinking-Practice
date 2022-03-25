#include<stdio.h>
#include<math.h>
int main()

{

	float r , a , c, d  ;
	
	
	int i ,j  , n , m  ;
	
	
	printf("\n  S.No     Radius         Area    Circumfrence    Diameter ");
	
	for(i=2,j=1 ; i<=47 ; i+=5,j++)
	{
	
		r= i ;
		a=(22.0/7)*r*r;
		
		c=2*(22.0/7)*r ; 

		d=2*r  ;
		
		printf("\n  %4d     %5.2f      %8.2f       %9.2f    %7.2f " ,j,r,a,c,d);
		
	}
	
	
	printf("\n\n\n\n") ;
	
}	 	    

