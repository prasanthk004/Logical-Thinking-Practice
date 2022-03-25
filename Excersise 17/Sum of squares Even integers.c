#include<stdio.h>
#include<math.h>

int main()

{

	int n , i , j,sum=0 ;
	
	printf("\n Enter the number : ");
	scanf("%d",&n) ;
	
	for(i=2,j=1;j<=n;j++,i+=2)
	{
		sum+=pow(i,2) ;
		
		printf("\n %3d %3d %4d",j,i,sum);
	}
	
	
	printf("\n\n\n\n Sum of  Even Integers squares : %d\n\n\n",sum) ;
	
	
}	 	 	 
		

