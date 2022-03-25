#include<stdio.h>

 

int main()
{

	float a,x,r,diff,e ;
	
 	do
	{
		printf("\n Enter the Value to Find Root>0 : ");
		scanf("%f",&a) ;
	}while(a<=0);
		 
	printf("\n Enter the Difference : ");
	scanf("%f",&e); 		 

	x=1 ;
	
	
 
 	 while(1)
	 
	 {   	
	
		
	  printf("\n x= %f                   x*x= %9f       %f",x,x*x,diff) ;
		
  
			
       diff=x*x-a ;
		
		diff=diff>0?diff:-diff ;
		
		if(diff<e) break  ; 
	 	
	 
		x=0.5*(x+a/x) ;   
	} 
	
	printf("\n\n\n Square Root : %f  ",x) ;
	
	
}	 	 	 	 	 	 	 
		


		

