#include<stdio.h>
#include<string.h>


int main()

{


	char s[80] , tmp[80] , *p , tp=0 ;
	int wc=0 ;
	
	printf("\n Enter a String : " );
	gets(s) ;
	
	p=s;

	while(*p)
	{
		
		switch(*p)
		{
		
			case ' ':
			case '\t':
				tmp[tp]='\0';
				if (strlen(tmp)>0) 
				{
				
					printf("\n %s",tmp);
					wc++;
				}
				tp=0 ;
				break;
			
			default : 
				if (*p!=' ')
				{
				tmp[tp]=*p ;
				tp++ ;
				}
				break;
		}
		
		p++ ;
		
	}
	
	tmp[tp]='\0';
	if (strlen(tmp)>0)
	{
	printf("\n %s",tmp);
	wc++;	 
	}
	
	
	printf("\n\n Words Count : %d",wc);
}
				

