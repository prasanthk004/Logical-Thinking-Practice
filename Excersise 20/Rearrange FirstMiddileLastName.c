#include<stdio.h>
#include<string.h>

int main()

{


	char s[80],tmp[80],*p ,fname[40],mname[40],lname[40];
	
	int tp=0,wc=0 ;
	
	printf("\n Enter the Nmae (FirstName MiddleName LastName) : ");
	gets(s);
	
	
	p=s ;
	
	
	while(*p)
	{
	
	   switch(*p)
	   {
	   
	   	 case ' ' : 
		 case '\t' : 
		 		tmp[tp]='\0' ;
				if(strlen(tmp)>0)
				{
					wc++;
				}
				
				if(wc==1)
				{
					strcpy(fname,tmp) ;
				}
				else if(wc==2)
				{
					strcpy(lname,tmp);
				}
				else
				{
					strcpy(mname,tmp) ;
				}	 
				tp=0;
				break;
		default :
				tmp[tp]=*p;
				tp++;
		}
		
		
		p++ ;
	}
	
	tmp[tp]='\0';
	if(strlen(tmp)>0)
	{
	strcpy(mname,tmp);
	}

			
	printf("\n %s, %s %s.",fname,mname,lname);	  



}


