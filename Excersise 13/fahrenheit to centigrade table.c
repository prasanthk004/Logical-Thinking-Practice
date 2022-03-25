#include<stdio.h>

int main()

{


	float c,f ; 
	
	int i,n,m,j ;
	
	printf("\n Enter Starting Range : ");
	scanf("%d",&m);
	
	printf("\n Enter Ending  Range : ");
	scanf("%d",&n) ;
	
	printf("\n S.NO   Fahrenheit      Celcius ");
	
	for(i=m, j=1  ; i<=n ; i++,j++)
	{
	
	
	  f=i ;
	  
	  c=(f-32)*5/9 ;
	
	 printf("\n %4d   %9.2fF    %9.2fC " , j,f,c );   
	
	}
}

