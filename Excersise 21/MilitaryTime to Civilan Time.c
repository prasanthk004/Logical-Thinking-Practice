#include<stdio.h>
#include<string.h>

int main()
{

	char mt[5]; 
	char h[3],m[3] ;
	
	int ihr,imin ;
	
	int  ampm , pflag ;
	int ohr,omin;
	
	
	
	printf("\n Enter Military Time HHMM : ");
	gets(mt);
	
	h[0]=mt[0]; m[0]=mt[2] ; 
	h[1]=mt[1]; m[1]=mt[3] ;	
	h[2]='\0' ; m[2]='\0';
	
	
/*	  printf("\n Hour %s Minute %s ",h,m);*/

    ihr=atoi(h);
    imin=atoi(m);
 
 
 
    if(ihr<12)
    {
   	  ohr=ihr ;
  	  ampm=1 ;
	  if(ihr==0 )
	  {
	  ohr=12;
	  }
    }
    else
    {
   	  ohr=ihr-12 ;
	  if(ihr==12)
	  {
	  	ohr=12;
	  }              
  	  ampm=2 ;
    }
 
 
    if(imin<44)
    {
 
     omin=imin ;
     pflag=1  ;
	}
	else
	{
		omin= 60-imin ;
		ohr++ ;
		pflag=2; 
		
	}
	
	
	printf("\n Civilan Time  : \n");
	
	
	
	if(omin==0)
 	 {

     printf("\n The Time is %d %s ",ohr,ampm>1?"PM":"AM");
	 }
	else
	{
	   printf("\n The Time is %d %s %d %s  \n\n\n",omin,pflag>1?"Before":"PAST",ohr,ampm>1?"PM":"AM");
    }
	
		
	
	
}

