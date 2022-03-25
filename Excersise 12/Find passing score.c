#include<stdio.h>

int main()

{


	int i,ps=0 , score ; float per,tp=0 ;
	
	per=0 ;
	
	printf("\n Enter 6 No's : ");
	
	
	for(i=1;i<=6;i++)
	
	{
	
	 
		scanf("%d",&score) ;
		
		if(score>=70)
		{
		
			printf(" %d ",score) ;
			ps++ ;
			
			per+=score ;
			tp+=100 ;
			
		}
		
	}
	
	
	printf("\n No.Of Subject Passed : %d",ps);
	
	printf("\n %f %f ",per,tp);
	
	printf("\n Total percentage : %.2f",(per/600)*100);
	
	printf("\n\n\n\n\n");
	
}	 	 	 	 

