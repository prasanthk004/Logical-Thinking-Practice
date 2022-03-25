#include<stdio.h>
#include<math.h>

int main()

{

	int i,j,n,mw,jw,vw,mrw ;
	
	printf("\n        WEIGHT OF THE PLANETS\n\n\n");	
	
	printf("\n Earth      Moon      Jupiter   Venus     Mars");         
	
	for(i=50;i<=250;i+=50)
	
	{
	
		mw=i*16.0/100 ;
		jw=i*2.64 ;
		vw=i*85.0/100 ;
		mrw=i*38.0/100 ;
	
	printf("\n %-8d   %-7d   %-7d   %-7d   %-7d",i,mw,jw,vw,mrw); 
	
	
	}
	printf("\n\n\n\n\n");
	
	printf("\n    WEIGHT TABLE BASED ON PLANET\n\n\n");
	
  	printf("\n ---------------------------");	 
	printf("\n Planet     Earth     Weight");
	printf("\n ---------------------------");
	
	for(i=50;i<=250;i+=50)
	{
	
	 mw=i*16.0/100 ;
	
      if(i==150)
	  {
	   printf("\n MOON       %-7d   %-7d",i,mw); 
	  }
	  else
	  {
 	 
	  printf("\n            %-7d   %-7d",i,mw); 
	  }
		
	}
	printf("\n ---------------------------");
	for(i=50;i<=250;i+=50)
	{
		 jw=i*2.64 ;
      if(i==150)
	  {
	   printf("\n Jupiter    %-7d   %-7d",i,jw); 
	  }
	  else
	  {
 
	  printf("\n            %-7d   %-7d",i,jw); 
	  }
		
	}
	printf("\n ---------------------------");
	for(i=50;i<=250;i+=50)
	{
	
      if(i==150)
	  {
	   printf("\n Venus      %-7d   %-7d",i,mw); 
	  }
	  else
	  {
 	  mw=i*85.0/100 ;
	  printf("\n            %-7d   %-7d",i,mw); 
	  }
		
	}
	printf("\n ---------------------------");
 
	for(i=50;i<=250;i+=50)
	{
	
      if(i==150)
	  {
	   printf("\n Mars       %-7d   %-7d",i,mw); 
	  }
	  else
	  {
 	  mw=i*38.0/100 ;
	  printf("\n            %-7d   %-7d",i,mw); 
	  }
		
	}
	
  printf("\n ---------------------------");	  
  	printf("\n\n\n\n\n");           
	
	
}	 

