#include<stdio.h>
#include<string.h>

int main()

{
   char s[80]="104/Mettu/street//Thirupporur/Taluk//Chengalpattu//603108"  , tmp[80] ; 
   char *p ;
   
   int tp=0,sflag=0 ;
   
   
   
 /*  printf("\n Enter the address : ");
   gets(s);*/
   
   	printf("\n Address   :  %s \n\n", s);
	
	printf("\n Converted :   \n\n", s);
	
    p=s ;
 
	while(*p)
	{
		
		switch(*p)
		{
		
			case '/' :
			       
					 sflag+=1 ;
					 if(sflag==2)
					 {
					 	if(strlen(tmp)>0)
						{
						
					 	tmp[tp]='\0' ;
						
						}
						printf("\n %s " , tmp);
						
						tp=0 ;
						sflag=0 ;
						
					 }
					 else
					 {
					   
					   tmp[tp]=' ' ;
					   tp++ ;
					 }
					 break ;
			default : 
					sflag=0;
				    tmp[tp]=*p ;
					tp++ ;
					break ;
		}
		p++;
		
		
	
	}
	
	
	if(strlen(tmp)>0)
	{
	tmp[tp]='\0' ;
	}
	
	
	printf("\n %s \n\n\n" , tmp);
 
	
	
		
}
			         
				

