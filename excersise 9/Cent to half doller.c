#include<stdio.h>
#include<math.h>

int main()

{

	int c ,rc,t,hd,q,d,n,p ;
	
	printf("\n Enter cents : ");
	scanf("%d",&c) ;
	
	t=c ;
	
	hd=t/50 ;
	
	t=t-hd*50 ;
	
	q=t/25 ;
	
	t=t-q*25 ;
	
	d=t/10 ; 
	t=t-d*10 ;
	
	n=t/5 ;
	t=t-n*5 ;
	
	p=t ;
	
	
	if(hd>0)
	{
	
		printf("\n %d Half Dollers",hd);
		
	}
	
	
	if(q>0)
	{
	
		printf("\n %d Quater Dollers",q);
		
	}
	
	
	if(d>0)
	{
	
		printf("\n %d Dimes",d);
		
	}
	
	
	if( n>0)
	{
	
		printf("\n %d nipples ",n);
		
	}
	
	
	if(p>0)
	{
	
		printf("\n %d Pennies ",p);
		
	}
	
	
	
	
printf("\n\n");
	
 
	
 
}
	
	

