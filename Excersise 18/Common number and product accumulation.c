#include<stdio.h>

int main()

{

	int i,n,sum=0,r ; 
	
	
	printf("\n Enter the Value of n and range : ");
	scanf("%d ",&n) ;
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
		sum+=i*n ;
		
		
	}
	
	
	printf("\n  Sum of 1*%d + 2*%d to %d+%d series : %d ",n,n,r,n,sum) ;
	
}	 
		

