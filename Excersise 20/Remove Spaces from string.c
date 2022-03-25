#include<stdio.h>

#include<string.h>

int main()

{

	char s[50],t[20] ;
	
	char *p ;
	
	int c=0 ;
	
	p=s ;
	
	
	printf("\n Enter the String : ");
	gets(s) ;
	
	while(*p)
	{
		
		if(*p!=' '&& *p!='\t')
		{
			t[c]=*p ;
			c++;
			
		}
		
	
		p++;
		
	}
	
 	t[c]='\0' ;
	
	printf("\n String After removing the spaces \n\n %s",t);
	
	
}

		
			
		

