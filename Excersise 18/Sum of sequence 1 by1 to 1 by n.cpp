#include<stdio.h>

int main()

{

	float sum ; int term  ;
	
	sum=term= 0 ;
	
	term=1 ;
	
	while(sum<=3.5)
	{
		
		sum+=1.0/term ;
		printf("\n S%-3d   = %-5.2f",term,sum);
		if(sum>=3.5) break ;
		term++ ;
		 
		
	}
	
	
	printf("\n\n\n Sum value reached above 3.5 at the term %d\n\n" , term) ;
	
	printf("\n Sum Value : %.2f\n\n\n",sum);
	
}	 	 

