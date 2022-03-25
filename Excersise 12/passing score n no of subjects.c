#include<stdio.h>

int main()
{


	int score,n ,ps ;
	
	n=ps=score=0 ;
	printf("\n Enter the Scores same line : ");
	
	while(1)
	
	{
		n++ ;
		scanf("%d",&score);
		
		if(score>100) break ;
		
	
		
		if(score>=70)
		{
		
			printf("\n %d ",score) ;
			
			ps++ ;
			
		}
		
		
				
	 }
	 
	 printf("\n\n\n\n\n\n\n");
	 printf("\n Total no  of Subjects : %d \n",n) ;
	 printf("\n Total no  of Passing score : %d",ps);
	 printf("\n Passing percenage : %.2f",((float)ps/n)*100);
	 
	 
}	  

