#include<stdio.h>
#include<string.h>

int main()
{

	char mail[100]  , uname[80],*p ;
	
	int tp=0 ; 
	
	
	printf("\n Enter User Mail ID : ");
	gets(mail);
	
	p=mail ;
	
	

	
	while(*p)
	{
	
		
		if(*p=='@')
		{
		
			uname[tp]='\0' ;
			break;
		}
		else
		{
			uname[tp]=*p ;
			tp++;
		}
		
		p++ ;
		
		
	}
	
	
	printf("\n Mail ID   : %s " , mail);
	
	printf("\n User Name : %s \n\n\n", uname );
	
}
	
	

