#include<stdio.h>

int main()

{

	int i,res;  
	
	
	/* 2,4,6,8 Series */
	
	for(i=1;i<=20;i++)
	
	{ 
		if(i!=1)
		printf(",");
		
		printf(" %d ",i*2);
	}
	
	
	printf("\n\n\n\n\n\n");	   
	/* 0,-1,-2,-3, Series */
	
	for(i=1;i<=20;i++)
	{
	
		if(i!=1)
		printf(",");
		
		printf(" %d ",-(i-1)) ;
	}	 
	
	printf("\n\n\n\n\n\n");	   
	/* 1 , 3 , 5 , 7 */
	for(i=1;i<=20;i++)
	{
		if(i!=1)
		
		printf(",");
		printf(" %d",(i*2)-1) ;
		
	}
	printf("\n\n\n\n\n\n");	 
 /* 2,4,8,16,32*/
 	res=1 ;
	for(i=1;i<=20;i++)
	{
	
		res=res*2 ;
		if(i!=1)
		
		printf(",");
		printf(" %d",res) ;
		
	}	 
	
	printf("\n\n\n\n\n\n");	 
  /* 1,1/2,1/3,1/4*/
 	res=1 ;
	for(i=1;i<=20;i++)
	{
	   
			  
		if(i!=1) 
		
		printf(",");
		printf(" %f",1.0/i) ;
		
	}	   
  	printf("\n\n\n\n\n\n");	  
	res=1 ;
	for(i=1;i<=20;i++)
	{
	   
		printf(" %d",res) ;		  
		if(i!=1) 
		
		printf(",");
		
		res*=-1;
		
		
		
	}	   
  

	 
	printf("\n\n\n\n\n\n");	   
}	 	 	 	 

