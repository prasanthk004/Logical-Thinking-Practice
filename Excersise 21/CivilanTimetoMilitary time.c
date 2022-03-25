#include<stdio.h>
#include<string.h>

int main()

{

	char t[80];/*="02:15 AM"*/ 
	char h[3] , m[3],a ;
	int hr , min ;
	
	
 	 printf("\n Enter the time (HH:MM (AM/PM) : ");
	gets(t); 
	
 	
	
	h[0]=t[0] ; m[0]=t[3] ;
	h[1]=t[1] ; m[1]=t[4] ;
	h[2]='\0' ;	m[2]='\0' ;
	
	
	a=t[6] ;
	
	
	hr=atoi(h) ;
	min=atoi(m);
	   
	    	printf("\nh=%s m=%s hr=%d min=%d am/pm=%c ",h,m,hr,min,a); 
 	 
	
	printf("\n Civilan Time  : %s " , t);
    if(a=='P'||a=='p')
	{
	  hr+=12 ;
		
		
	 printf("\n Military Time : %02d%02d\n\n\n",hr,min);
	}
	else
	{
	 printf("\n Military Time : %02d%02d\n\n\n",hr,min);
	}
		   
	
}
	

