#include<stdio.h>


int main()

{

	int a,b,c ;
	
	int x,y ;
	
	printf("\n Enter the Values of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c) ;
	
	if(a>b&&a>c)
	{
		x=a*a ;
		y=b*b+c*c ;
	}
	
	else if(b>a&&b>c)
	{
	
		x=b*b ;
		y=a*a+c*c ;
		
	}
	
	else
	{
	
		x=c*c ;
		y=a*a+b*b ;
	}
	
	printf("\n\n %d %d %d\n\n\n",a,b,c);
	
	if(x==y)
	{
	
	
		printf("\n Given Value  is represents Right Triangle ");
	}
	
	else
	{
	
		printf("\n Given Value isn't   represent Right Triangle "); 	
		 
	}
	printf("\n\n\n ");
	
}	 

