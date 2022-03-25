#include<stdio.h>
#include<math.h>


float squart(int n) ;
int main()

{

	int n,upto,isPrime=1,i ;
	
	printf("\n Enter a Number : ");
    scanf("%d",&n) ;
	
	upto=sqrt(n) ;
	
	for(i=2 ; i<=upto ; i++)
	{
	
		if(n%i==0)
		{
		
			isPrime=0 ;
			break ; 
		}
		
	}
	
	if(isPrime==1)
	{
	
		printf("\n %d is Prime number " ,n) ;
	}
	
	else 
	{
	
  	  printf("\n %d is not a Prime number " ,n) ;
	}
	printf("\n\n\n\n");

	printf("\n Sqrt of n dfun : %d",sqrt(n)) ;
	printf("\n Sqrt of n mfun : %d",squart(n)) ;
	
	printf("\n\n\n\n");

	
}	 


float squart(int n)
{

	float diff , e,x ; 
	
	e=0.01 ;
	x=0 ;
	while(1)
	{
	
		diff=x*x-n ;
		
		diff=diff>0?diff:-diff ;
		
		if (diff<e) break ; 
		
		x=0.5*(x+n/x) ; 
		
	}
	
	printf("\n Squar root of X : %d",x) ;
	
	
  return n ; 

}	 	   

