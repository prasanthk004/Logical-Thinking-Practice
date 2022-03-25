#include<stdio.h>
#include<string.h>

int main()

{

	char t[80]="01:23 PM - 01:08 AM" ;
	char h1[3],h2[3],m1[3] , m2[3],apm1,apm2 ;
	int hr1 , min1,hr2,min2 ;
	int thr , tmin ,omin;
	
	
	
	
	h1[0]=t[0]; m1[0]=t[3];
	h1[1]=t[1]; m1[1]=t[4];
	h1[2]='\0'; m1[2]='\0';
	
 	apm1=t[6] ;
	
	
		
	h2[0]=t[11] ; m2[0]=t[14] ;
	h2[1]=t[12] ; m2[1]=t[15] ;
	h2[2]='\0' ;  m2[2]='\0' ;

	
	apm2=t[17];
	
 	hr1=atoi(h1);
	hr2=atoi(h2);
	min1=atoi(m1);
	min2=atoi(m2);
 	 
     printf("\n h1=%s m1=%s h2=%s m2=%s\n", h1,m1,h2,m2);
    
	   
 	 printf("\n h1=%d m1=%d h2=%d m2=%d am/pm1=%c am/pm2=%c \n",hr1,min1,hr2,min2,apm1,apm2);
	 
	 
	 
	 if(apm1=='p'||apm1=='P')
	 {
	 
	 	hr1+=12 ;
	 }
	 
	 if(apm2=='p'||apm2=='P')
	 {
	 
	 	hr2+=12 ;
	 }
	 
	 if((apm1=='p'||apm1=='P')&&(apm2=='a'||apm2=='A'))
	 {
	  
	  hr1-=12 ;
	  hr2+=12;
	 
	 
	 }
	 
	 else if((apm1=='a'||apm1=='A')&&(apm2=='a'||apm2=='A')||(apm1=='p'||apm1=='P')&&(apm2=='p'||apm2=='P'))
	 {
	 
	 	if(min1>min2)
		{
		  hr2+=24;
		 
		}
	 
	 
	 }
	 
	
	  thr=hr1-hr2 ;
	  
	 thr=thr>0?thr:-thr ;
	 
	 
	 /* Find total Minutes */
	 
	 omin=thr*60 ;
	 tmin=min1-min2 ;
	 tmin=tmin>0?tmin:-tmin ;
	 omin-=tmin ;
	 
	 
 	  
	 printf("\n Total Hrs : %d hrs Total Minutes : %d mins  overall min = %d \n\n\n",thr,tmin,omin);
	 
	 
	 printf("\n Total time left  %02d hrs %02d mins ",omin/60 , omin%60 );
	 
	
	 
	 

	

	
	
	
	
}
	

