#include<stdio.h>
#include<math.h>

int main()

{

	float am , ci  , ia=0 , p, r, n , t,cyi ;
	int y=0,m=0 ; ;
	
	p=9000 ;
	r=13.5/100;
	n=12 ;
	t=1 ;
	
	ci=0 ;
	cyi=0;
	while(ia<=12000)
	{
	 
		am=p*pow((1+r/n),t) ;
		printf("\n Final Amt %-8.2f       CI %8.2f     IA  %-8.2f", am , ci,ia  ) ;	    
	/*	 ci=p*pow((1+r/100),n)-p ;*/
		ci+=am-p ;	  	  
		cyi+=ci ;
		m++ ;
		p=am ;
	
		
	 	 
	  	if(m%12==0)
		{ 
		printf("\n -----------------------------------------------");
		y+=1 ;
		ia+=ci;
		ci=0 ;
		cyi=0;
		}
	
	 
		
		
	}	 	 
	
	printf("\n\n\n\n\n");
	
	printf("\n Total Years Required to get interest 11000 is %d " , y) ;
	printf("\n No of years %d & Months %d " , m/12 , m%12 );
	printf("\n IA %.f ",ia );
	
    printf("\n\n\n\n\n");
	
}	 

