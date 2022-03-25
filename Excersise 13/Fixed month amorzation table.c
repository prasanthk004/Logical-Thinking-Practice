#include<stdio.h>


int main()


{


	float  loan , yi , mi ,mp ,  pl ,rb , ti,ia  ;  
	
	
	int nt, pt  ; 
	 /* loan - Loan amount 
	  yi - yearly interest 
	  mi-monthly interest  
	  mp-monthly payment 
	  pl-paid on loan 
	  rb- ramain bal
	  nt-no of term 
	  pt- paid term    
	  ti - total interest amount paid 
	  ia- interest amount 
	  
	  
	  loan=1000 ;
	  
	  yi=12 ;
	  
	  nt=3 ;
	  
	  mp=300 ;
	  
 
	  
	   */
	  
	  printf("\n Principle : ");
	  scanf("%f",&loan) ;
	  
	  printf("\n Interest  : ");
	  scanf("%f",&yi) ;
	  
	  printf("\n No of Term : ");
	  scanf("%d", &nt) ;
	  
	  printf("\n Monthly Payment : ") ;
	  scanf("%f",&mp); 
	  
	  
	  mi=yi/12 ;
	  pt=0 ; 
	  ti=0 ;
	  rb=loan  ;
	  
	  
	  printf("\n                   Amorzation Table Fixed Month \n" ) ;
	  printf("\n  Loan  : %.2f    Fixed Dues : %d    Interest Rate : %.2f ",loan , nt , yi ) ;
	  printf("\n                  Monthly PayMent : %.2f",mp) ;
	  printf("\n ------------------------------------------------------------------------------") ;
	  printf("\n Term       DueAmt     Interest     Amorzation      Balance    Int.Amtodate   " );
	  printf("\n ------------------------------------------------------------------------------") ;
	  
	  while(rb>0)
	  {
	   
	  
	  	ia=rb*mi/100 ;
		
		pt++ ;
		
		if (nt==pt || rb<mp)
		{
		 
			pl=rb ;
			mp=pl+ia ; 	   
			
		}
		
		else
		{
		  pl=mp-ia ; 
		 
		}
		
		
		rb-=pl ;
	
		ti+=ia ;
		
		printf("\n %4d    %9.2f    %9.2f    %11.2f   %9.2f    %7.2f ",pt,mp,ia,pl,rb,ti);
		
		}
		printf("\n --------------------------------------------------------------------") ;
		printf("\n\n\n Last Payment            : %.2f ",mp);
		printf("\n Total Interst Amount    : %.2f ",ti) ;
		printf("\n Total paid Loan amount  : %.2f \n\n\n" ,ti+loan) ;
		
		
		
		
}	 	 	 	 
				

