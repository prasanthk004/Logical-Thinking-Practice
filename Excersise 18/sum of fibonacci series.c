#include<stdio.h>

int main()

{

	int f3,f2,f1,sum,term ;
	
	sum=term=0 ;
	f1=f2=1 ;
	
	printf("\n\n %d %d ",f1,f2) ;
	
	term=2 ;
	
	while(sum<=1000)
	
	{
	
		f3=f1+f2 ;
		
		sum+=f3 ;
		
		f1=f2 ;
		f2=f3 ;
		
		printf(" %d",f3) ;
		
		term++;
		
	}
	
	printf("\n\n\n\n Sum Value %d",sum);
	printf("\n Sum of Fibonacci exceeds above 1000 at the term of %d",term) ; 
	
	printf("\n\n\n\n\n");
	
	
}	 	 
		
		

