#include<stdio.h>

int  main()
{

	int a[10], count , mcount=0 , n  , i , j,mode;
	
	
	printf("\n Enter the numbers  : "); 
	
	for(i=0 ; i<10 ; i++)
	{
	
		scanf("%d" , &a[i]) ;
	}
	
	
	for(i=0;i<10;i++)
	{
	
		count=0 ; 
		
	for(j=0;j<10;j++)
	{
	
		if(a[i]==a[j])
		{
			count++ ;
		}
		
		
		if(count>mcount)
		{
		
			mcount=count  ;
			mode=a[i] ;
		}
	}
	
	}
	
	printf("\n Mode : %d  No. Of Occurence : %d ",mode,mcount) ;		
		
}	 	 	 
		
					
		
				

