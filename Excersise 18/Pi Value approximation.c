#include<stdio.h>

int main()

{

	float pi , bpi , diff , term  ;
	
	int mf=1; ;
	pi=bpi=0;
	diff=0;
	term=1 ;
	do
	{
		pi=pi+((1.0/term)*mf) ;
		printf("\n Pi = %-6f   mf=%- 5d   diff=%6f   Term = %-6.f bpi=%6f", pi,mf,diff,term,bpi );
		mf*=-1 ;
		term++;
		

		
	
		
		diff=pi-bpi ;
		
		diff=diff>0?diff:-diff ;
		
		/*if(diff<0.1) break ;*/
		bpi=pi ;
		
	}while(diff>0.1);
		
		
	printf("\n\n\n\n Reached approxmiation (0.01) of last 2pi at the term of %.f\n\n\n" , term ) ;
	
	}	  	  

