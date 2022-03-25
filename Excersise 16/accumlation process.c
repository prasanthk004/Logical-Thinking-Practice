#include<stdio.h>

int main()

{

	int i,j,n,sum,tot=0;
	float res,res1; ;
	
	sum=0 ; 
	
	printf("\n\n\n\n");
	for(i=5;i<=675;i+=5)
	{
	
		printf(" %4d",i);
		sum+=i ;
		
	}	 	 
	
	printf("\n Sum of 5 to 675 is %d ", sum);
	printf("\n\n\n\n");
		sum=0 ;
	for(i=-1;i>=-17;i--)
	{
	
		printf(" %d",i);
		sum-=i ;
	}
	printf("\n Sum of -1 to -17 is %d", sum);
	printf("\n\n\n\n");
		
	sum=0 ; 
	for(i=1;i<=100;i++)
	{
	
		res=1.0/i ;
		
		printf("%5f  ",res); 
		
		res1+=res;
		
	}	
	
	printf("\n Sum of 1 , 1/2 to 1/100 is %f ", res1) ; 
		
	printf("\n\n\n\n");
		
	sum=0 ; 
	
	for(i=1;i<=100;i++)
	{
	  sum=0;
	  for(j=1;j<=i;j++)
	  {
	  	sum+=j ;
		printf("\n %-4d",j);
				
	  }
	  
	  tot+=sum ;
	  printf("\n %-4d  ",sum);
	  
	  printf("\n\n");
		
	}	 
	
	printf("\n Total : %d" , tot) ;	   
}

