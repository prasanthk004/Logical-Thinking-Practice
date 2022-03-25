#include<stdio.h>

int main()

{


	int a,b,c,s,areax,area ;
	
	printf("\n Enter the Value of  A B C : ");
	scanf("%d%d%d",&a,&b,&c) ;
	
	s=a+b+c/2 ;
	
	
	areax=s*(s-a)*(s-b)*(s-c) ;
	
	area=sqrt(areax) ;
	
	
 	printf("\n S = %d Areax = %d Area = %d ",s,areax,area);
	
	if((a+b>c)&&(a+c>b)&& (b+c>a))
	{
	
		printf("\n Given Value represents a Triangle ");
	}
	
	else
	{
	
	 printf("\n Given Value is not represents a Triangle ");
	 
	}
	
}	 

