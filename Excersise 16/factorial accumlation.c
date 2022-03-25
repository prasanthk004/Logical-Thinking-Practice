#include<stdio.h>

int main()


{

	int i , mf =1 ; 
	
	double fact , sumf  ;
	
	fact=1 ;
	sumf=0 ;
	
	for(i=1;i<=20;i++)
	{
	
		fact=fact*i ;
		
		sumf+=mf*fact ;
		
		mf*=-1 ;
		
		if(mf==-1)
		{	 	 
	    printf("\n Fact : %-20.f  Sum :  %-20.f ",fact,sumf);	
		}
		else
		{	 
		printf("\n Fact : %-20.f  Sum : %-20.f ",fact,sumf);
		}
	}
	
	printf("\n\n\n\n\n");
	
	printf("\n Sum of !1,!-2,!3 to !20 is %.f",sumf);
 
	printf("\n\n\n\n\n");
	
}	 	 	 	 	 

