#include<stdio.h>

int main()

{

	int n  ,  median , i , cn , pos,pos1 ;
	
	float m1,m2 ;
	
	m1=0 ;
	
	printf("\n Enter how many numbers : ");
	scanf("%d",&n) ;
	
	
	for(i=1 ; i<=n ; i++)
	{
	  scanf("%d",&cn) ;
	  
	  
	  if(n%2==1)
	  {
	    pos=(n+1)/2 ;
	  
	  	if(pos==i)
		{
			median=cn ;
			break ;
		}
		}
		
		else 
		{
		  pos=n/2 ;
		  
		  pos1=pos+1 ; 
		  
		  if(pos==i||pos1==i)
		  {
		  	m1+=cn ;
		  }
		} 
	}	   	   
		  	
		  
		  
		 
	
	if(n%2==1) 
	{
	
	printf("\n Median is : %d",median );
	}
	
	else
	{
	
		printf("\n Meadian is : %.2f " , m1/2.0) ;
	}	 
	
}	 
							

