#include<stdio.h>
#include<string.h>

int main()
{

	char s[1000] ;
	
	int wc=0  , i , cc=0  ; 
	float price ; 
	
	int t=20 ;
	
	printf("\n Enter the Words Seperated by  / : ");
	gets(s) ;
	
	for(i=0 ; s[i]!='\0'; i++ ) 
	{
	
		if(s[i]=='/')
		{
		
			wc++ ;
			cc++ ;
		}
		
		else
		{
			cc++ ;
		}
		
	}
    /* Adding Last word */
	wc++;
	
	printf("\n S[i-1] : %C",s[i-1]);
 	 if(s[i-1]=='/')
	{
	 /* Checking if Last char is '/'*/
	 wc-- ;
	
	} 
	
	
	if(wc<=t)
	{
		price=wc*0.15 ;
	}
	
	else
	{
		price=t*0.15 ;
		
		 ;
		
		price+=(wc-t)*0.12 ; 
		
	}
	


	printf("\n Total Words      : %d " , wc) ;
	printf("\n Total Characters : %d ", cc );
	printf("\n Amount Payable   : %-5.2f $ ", price);
	
	
		
}
	
	
	

