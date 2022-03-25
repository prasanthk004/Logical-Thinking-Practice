#include<stdio.h>

int main()

{

	int n,f1,f2,f3,fflag;
	
	f1=f2=1 ;
	
		
	printf("\n Enter a number : ") ;
	scanf("%d",&n) ;
	
	
	fflag=0 ; 
	
	while(1)
	{
		f3=f1+f2 ;
		
		if(f3==n)
		{
			fflag=1;
			break ;
		}
		
 	 if(f3>n) break  ;
	 
		printf("\n %d",f3) ;
		
		f1=f2 ;
		f2=f3 ;
	}
	
	
	if(fflag==1)
	{
	
		printf("\n   Number %d is FiboNacci Number 	" ,n) ;
	}
	
	else 
	
	{
		printf("\n   Number %d is not a FiboNacci Number",n) ;	  	  
	
		
	}
	
}	 

