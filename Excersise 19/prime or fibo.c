#include<stdio.h>
#include<math.h>

int Isprime(int n);
int Isfibo(int n);

int main()

{

	int n ;
	
	do
	{
	
		printf("\n\nEnter the Number >0 : ");
		scanf("%d",&n);
	
 		Isprime(n);
    	Isfibo(n);
	
	}while(n>0);
	printf("\n\n\n\n\n");
	
	
}



int Isprime(int n)

{

	int i , pflag=0,upto ;
	
	
	upto=sqrt(n) ;
	
	for(i=2;i<=upto;i++)
	{
	
		if(n%i==0)
		{
			pflag=1;
			
			break ;
		}
		
	}
	
	
	if(pflag==1)
	{
	
		printf("\n  Not a Prime Number");
	}
	
	else
	{
	
		printf("\n   Prime Number " );
		
	}
	
	
}	 	 	 


int Isfibo(int n)
{

	int f1,f2,f3,fflag=0 ;
	
	
	f1=f2=1 ;
	f3=0;
	
	
	while(f2<n)
	{
	    f3=f1+f2 ;
		f1=f2 ;
		f2=f3 ;
		if(f2==n)
		{
			fflag=1;
			break ;
		}	 
	

	}
	
	
	
	if(fflag==1)
	{
	
		printf("\n Fibonacci Number ");
	}
	
	else
	{
	
		printf("\n Not a Fibonacci Number ");
	}
	
	
}	 	 	 	 	 
		
		
	

