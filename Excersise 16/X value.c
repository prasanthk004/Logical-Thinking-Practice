#include<stdio.h>

int main()

{

	int x,i,n,flag=0,term;
	
	printf("\n Enter No.of Term : ");
	scanf("%d",&n) ;
	
	for(i=1;i<=n;i++)
	{
		x=(i*i)-i-6 ;
		
		printf("\n X=%d",x);
		if(x==0)
		{
			flag=1;
			term=i ;
			break ; 
			
		}
	}
	
	printf("\n\n\n\n\n");
	
	if(flag==1)
	{
	
		printf("\n X value is %d",term) ;
	}
	
	else
	{
	
		printf("\n No Such a Value ");
		
	}
	printf("\n\n\n\n\n");
	
}	 	 	 
	
	
	

