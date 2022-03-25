#include<stdio.h>

int main()

{

	int i , j , n,sum=0;
	
	char s[10];
	printf("\n Enter the number : ");
	scanf("%d",&n);
	
	
	printf("\n Number      Sum    Status ");
	
	for(i=1;i<=n;i++)
	{
		
	
		for(j=1;j<=i/2;j++)
		{
			
			if (i%j==0)
			{
		  	  sum+=j;
		 
			 }
		}
				  
			
 
		
   	   if(sum<i)
   	   {
   	   
	 	printf("\n %6d    %5d    Abdunt ",i,sum);
		
	   }
	
   	   else if(sum==i)
	   {
	
    	printf("\n %6d    %5d    Perfect ",i,sum);
		
   	   }
 	 
   	    else
  	    {
	 
      	 printf("\n %6d    %5d    Deficent ",i,sum);
		
    	}
		
	 	sum=0;
	
	
		
	}
 
	printf("\n\n\n\n\n\n");
	
}	 	 
	
				

