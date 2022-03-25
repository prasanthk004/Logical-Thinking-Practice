#include<stdio.h>
#include<string.h>

int main()
{

	char s[80]="Rahul/is/my/collegue";
	char *p , rs[80] ;
	
	int tp=0 ;
	
	
	
	p=s ;
	
	while(*p)
	{
	  
	  switch (*p)
	  {
	  
	  	case '/' : 
				
				rs[tp]=' ';
				tp++ ;
			 
		default:  	  
			
			if(*p!='/'){
			
		
			rs[tp]=*p ;
			
				tp++ ;
			}
		}
		p++ ;
		
	}
	
	rs[tp]='\0' ;
	
	printf("\n Actual String %s : ",s);
	
	printf("\n Reversed String : %s ", rs);


}

