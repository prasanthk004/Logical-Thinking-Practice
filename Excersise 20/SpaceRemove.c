#include<stdio.h>

int main()

{

	char s[80],*p,ms[80] ;
	
	int i ;
	
	
	printf("\n Enter the string  : " );
	gets(s) ;
	printf("\n\n\n  ");
	
	for(i=0 ; s[i]!='\0' ; i++)
	{
		
		if(s[i]!=' ')
		{
			printf("%c",s[i]);
		}
		
		
	}
		printf("\n\n\n  ");
	
}
	

