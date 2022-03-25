#include<stdio.h>

int main()

{
	int i , j , n , sum=0, tot=0 ;
	
	
	printf("\n Enter Range : ");
	scanf("%d",&n) ;
	
	for(i=1;i<=n;i++)
	{
	
		for(j=1;j<=i;j++)
		{
			sum+=j;
			if(i==1)
			{
			printf(" %d ",j) ;
			}	
			else if(j==1)
			{
			 	printf("( %d ",j);
			}
			else 
			{
		    printf("+ %d ",j) ;
		    }
		 }
		 if(i==1)
		 {
		 printf(" = %d ",sum) ;
		 }
		 else
		 {
		  printf(" ) = %d ",sum) ;
		 }
		 
		 tot+=sum ;
		 
		 sum=0 ;
		 printf("\n");
	}
	
	
	
	printf("\n\n\n Total : %d " , tot);
	printf("\n\n\n");
	
	
}	 	 	   
		  
		  

