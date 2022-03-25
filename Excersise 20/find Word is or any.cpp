#include<stdio.h>

#include<string.h>

int main()

{

	char s[80] , tmp[80] , *p,f[80] ; 
	
	int tp=0,count=0;
	printf("\n Enter the String : ");
	gets(s);
	
	printf("\n Enter the word to   find : " );
	gets(f);
	
	p=s;
	
	while(*p)
	{
	
	 	switch(*p)
		{
		
			case ' ':
			case '\t':
			
			tmp[tp]='\0' ;
			if(strcmp(tmp,f)==0)
			{
			count++;
			}	 	 	 
			tp=0;
			break;
			
			default : 
				tmp[tp]=*p ;
				tp++ ;
        }
		
		
		p++ ;
		
	}
	
  		tmp[tp]='\0' ;
			if(strcmp(tmp,f)==0)
			{
			count++;
			}	 	 	 	   	   	   
	
	printf("\n Total %s counts in given sentence is no %d",f,count);
	
}
	
	
		

