#include<stdio.h>

int main()
{

	float x,y,temp1,temp2,e ;
	
	/* Equations 
	
		2x+y=3 ;
		x-3y=2  ;
		
		x=(3-y)/2
		y=(2-x)/3 ;
	*/
	x=y=0 ;
	e=0.001 ;
	temp1=temp2=0;
	while(1)
	{
	
	
	 
	 temp1=2*x+y-3 ;
	 temp2=2-x+3*y ;	  
	 
	 temp1=temp1>0?temp1:-temp1 ;
	 /*temp1=temp2>0?temp2:-temp2 ; */
	 
	 if(temp1<e) {printf("\n\n %f  ",temp1  ) ;break ;}
	 printf("\n %f     %f    %f      ",x,y,temp1);

	 	x=(3-y)/2;
		y=(2-x)/3 ;
	 	
	 
	   }
	 
	 
	 printf("\n\n\n X=%f  Y=%f %.2f\n\n",x, y,temp1) ;
	 
}	  

