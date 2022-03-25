#include<stdio.h>

int main()

{

	int n , i , j ; float  sum=0,p;
	
	float x,y,z  ;
	
	printf("\n\n\n\n");
	
	for(i=1;i<=225;i+=2)
	{
		sum+=i ;
	

		
	}

	printf("\n Sum of 1 , 3, 7 to 225 is  %.f", sum ) ;
	printf("\n\n\n\n");
	
	n=10;
	sum=0 ;
	for(i=1;i<=n;i++)
	{
	
		p=pow(i,i);
		
		sum+= p ; 	  
 
		
	
	}	 
	
	printf("\n Sum  of power series 1 to n is  %.f" , sum) ;
	
	printf("\n\n\n\n");
	
	sum=1;
	for(i=2;i<=n;i+=2)
	{ 	  
		sum*=i ; 
 	 	 
	
    }
		
	printf("\n 2*4*6*8 series %.f",sum); 
	printf("\n\n\n\n"); 
	
	
	for(i=2;i<=n ; i+=2)
	{
		
		for(j=1;j<=3
		;j++)
		{
		z=pow(i,2)+pow(j,2) ;
		
		printf("\n X=%d , Y=%d , Z=%.f ", i,j,z);
	
		}
		printf("\n---------------------");
	}
	
	
}	 	 	 

