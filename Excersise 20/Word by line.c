#include<stdio.h>

int main()

{
	char s[80] ;
	
	char tmp[80] ; 
	
	
	int i , j=0,wc=0;
	
	printf("\n Enter the String : ");
	gets(s) ;
	
	
	for(i=0,j=0;s[i]!='\0';i++)
	 {	 
	 	 
	 
		
 	 	if(s[i]==' ')
		{
			tmp[j]='\0';		 
			j=0;
			if(strlen(tmp)>1)	printf("\n %s",tmp);
			
		
			wc+=1;
		}
		
		else
		{
		tmp[j]=s[i] ;
	
		j++ ;
	
		
		}	
	 
		
	
		
	} 
	 tmp[j]='\0' ;
    if(strlen(tmp)>1)	printf("\n %s",tmp);
	printf("\n wc %d",wc);
}	 

