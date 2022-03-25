#include<stdio.h>
#include<string.h>
int main()
{

	char s[80]="IamtoomuchtiredeatingsausageAmericanJalaponos" ;
	char word[20],sen[80] , *p ;
	int sp=0,wp=0 ;
	int i,j;
 
	p=s;
	
	
		printf("\n\n Words Seperated by line by line   \n\n");
	for(i=1 ;i<=9;i++)
	{
 
 		wp=0 ;
 		for(j=1;j<=i;j++)
		{
		
			word[wp]=*p ;/*seperating by word */
				wp++ ;
			sen[sp]=*p ;/*Adding words by seperating space*/


		
			sp++; 
			p++;		
		}
		
		word[wp]='\0' ;
		printf("\n %s",word);
		
		sen[sp]=' ';
	 	sp++;
 
	}
	
	sen[sp]='\0';
	
	printf("\n\n Words Seperated by space \n\n %s \n\n",sen);
	
	
}
	
	

