#include<stdio.h>

int main()

{

	int t1,t2,t3 ;
	
	int tot , avg ;
	
	printf("\n Enter mark 1 : ");
	scanf("%d",&t1);
	printf("\n Enter mark 2 : ");
	scanf("%d",&t2);
	printf("\n Enter mark 3 : ");
	scanf("%d",&t3);
	
	tot=t1+t2+t3 ;
	
	avg=(t1+t2+t3)/3 ;
	
	system("cls");
	if(tot>=185)
	{
	
	
		printf("\n MARK SHEET  \n");
		
		printf("\n Mark 1  : %d ",t1);
		printf("\n Mark 2  : %d ",t2);
		printf("\n Mark 3  : %d ",t3);
		printf("\n Total   : %d ", tot);
		printf("\n Averege : %d ", avg);
		printf("\n Result  : PASS ");
		
	}
	
	else
		
		{
		printf("\n MARK SHEET  \n");
		
		printf("\n Mark 1  : %d ",t1);
		printf("\n Mark 2  : %d ",t2);
		printf("\n Mark 3  : %d ",t3);
		printf("\n Total   : %d ", tot);
		printf("\n Averege : %d ", avg);
		printf("\n Result  : FAIL ");
		 
		 }
		
	printf("\n\n\n\n");
}	 	 

