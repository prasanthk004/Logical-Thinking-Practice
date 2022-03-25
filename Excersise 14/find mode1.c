#include<stdio.h>

int main()

{

	int a[10],i,j,n,cc,mc,mode ;
	
	cc=mc=0 ;
	
	printf("\n How many numbers ? : ");
	scanf("%d",&n) ;
	
	printf("\n Enter %d numbers seprated by space\n ",n);
	
	
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]) ;
	}
	
	for(i=0;i<n;i++)
	{
		cc=0 ;
		for(j=0;j<n;j++)
		{
			
			if(a[i]==a[j])
			{
				cc++ ;
			}	 	 	 
				
			
		}
		
		
		if(cc>mc)
		{
		
			mc=cc ;
			mode=a[i] ;
		}	 
		
 
	}
	
	
	
	printf("\n Mode is         :  %d    ",mode);
	printf("\n No.Of Occurance :  %d    ",mc) ;
	
			   	   	   	   



}

