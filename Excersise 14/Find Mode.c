#include<stdio.h>

int main()

{

 int m=0,mc=0,cm=0,cmc=0,n,i ;
 
 
 printf("\n Enter the numbers sorted : ") ;
 
 for(i=1 ; i<=8 ; i++)
 {
 
 
 	scanf("%d",&n) ;
	
	if(cmc==0)
	{
		cm=n ; 
		cmc=1 ;
		
	}
	
	else if(cm==n)
	{
		cmc++ ;
	}
	
	else
	{
	
		if(cmc>mc)
		{
		
			m=cm ; 
			mc=cmc ;
		}
		
		cm=n ; 
		cmc=1 ;
	}
	
}


if(cmc>mc)
{

	m=cm ;
	mc=cmc ;
}	 


printf("\n Mode : %d   No.of Occurence : %d ", m , mc ) ;	 	 	 	 


}
	
		
	 

