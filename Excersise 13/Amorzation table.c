#include<stdio.h>

int main()

{


		float loan , yi , mi  , rb , mp , pl, ia , ti  ; 
		
		
		printf("\n Loan Amount : ") ;
		scanf("%f",&loan) ;
		
		
		printf("\n Interest Rate : ") ;
		scanf("%f",&yi ) ;
		
		printf("\n Monthly Payment : " );
		scanf("%f" ,&mp ) ;
		
		
		mi=yi/12 ; 	   
		
		
		
		rb=loan ;
		
	/*	loan  = 1000 ;
		yi = 12 ;
		
	
		mp=200 ; 
		
		*/
		
		
		
		printf("\n         AMORZATION TABLE  " ) ;
		
		printf("\n Loan :  %.2f        Monthly Payment : %.2f\n\n",loan,mp );
		
		
		printf("\n Interest    Amortized     Balance ");
		printf("\n %8.2f    %8.2f    %9.2f ",ia,pl,rb);
		
		
			
		while(rb>0) 	
		
		{ 	  
		
 			ia=rb*mi/100 ;
			
			if(rb<200)
			{
			 
			 
			 pl=rb+ia ; 
				
			}
			
			else
			{	 
			
			pl=mp-ia ;
			}
			
			
			rb-=pl ;
			
			if(rb<0)
			{
			
				rb=0.00 ;
			}	 
			
			ti+=ia ;
		 	
			printf("\n %8.2f    %8.2f    %9.2f ",ia,pl,rb);
			
	
			
		}
		
		printf("\n Total Interest Amount :  %f " , ti) ;
		printf("\n Total  amount Paid    :  %f " , ti+loan) ;
		
}	 
			
			
			

