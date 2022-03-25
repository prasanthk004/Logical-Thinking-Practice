#include<stdio.h>

int main()

{

	int term  ;
	float e=1,be=0,diff, fact ;
		
	term=0 ;
	
	fact=1 ;
	printf("\n Term      Fact    E-Value    be-Value      diff"); 
	while(1)
	{
		
		term++ ;
		
		fact*=term ;
		
		e+=1/fact ;
		
		diff=e-be ;
		
		diff=diff>0?diff:-diff ;
		
		printf("\n %4d    %6.f    %6f    %6.2f     %6f",term,fact,e,be,diff);
		
		if(diff<0.001) break ;
		
		be=e ;
	}
	
	printf("\n\n\n\n");
	
	
}	 	 

