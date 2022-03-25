#include <stdio.h>
#include<math.h>

int main()

{

 
	
	float e1 , e2 , diff  , n ; 
	
	e2=0 ; 
	n=1 ;
	while(1)
	{
			
		e1=pow((1+1/n),n) ;
			 
		e1+=0.09;
		printf("\n %-5.f    %f    %f " , n,e1,e2) ;
		
		if(n==1)
		{
		
			e2=e1 ; 
			n++ ;  
			continue ;
		}	 
		
		diff=e1-e2 ;
		
		
		diff=diff>0 ? diff : -diff ;
		
	
		if(diff<0.001) break ;
		
		e2=e1 ;	 
		n++ ;    	
		
	
		
	}
	
	
	
}	 
	
		
		
	
	

