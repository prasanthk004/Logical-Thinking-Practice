#include<stdio.h>

int main()
{
  

	float x,y,z,res,e ;
	int opt ;
	x=y=z=0 ;
	
	e=0.1 ;
	
	/* Equations 
	
	   3.1*x-y+2*z=0.4
	   x-10*y-1.3*z=10
	   -2.1*x-3*y+10*z=103.2
	
	
	
	
	*/
	printf("\n Enter Option(1-3) : ");
	scanf("%d",&opt);
	
	
	
	if(opt==1)
 	{
	
 	 printf("\n FOR EQUATION   3.1*x-y+2*z=0.4 ");
	 while(1)	 
 
	{
	 res=3.1*x-y+2*z-0.4 ;
	 
	 res=res>0?res:-res ;
	 printf("\n X=%-11f Y=%-11f Z=%-11f Res=%-11f",x,y,z,res) ;
	 if(res<e) break ;
	 
	 x=(0.4+y-2*z)/3.1 ;
	 y=(10-x+1.3*z)/10 ;
	 z=(103.2-2.1*x-3*y)/2 ;
    }
	 
	 
	printf("\n\n\n X=%-11f Y=%-11f Z=%-11f Res=%-11f",x,y,z,res) ;
 
 	}
	
		
   else if(opt==2)
 	{
	
	x=y=z=0 ;	
		
	printf("\n FOR EQUATION    x-10*y-1.3*z=10 ");
	while(1)
	{
	 
	
	 res=x-10*y-1.3*z-10;
	 
	 res=res>0?res:-res ;
	 printf("\n X=%-11f Y=%-11f Z=%-11f Res=%-11f",x,y,z,res) ;
	 if(res<e) break ;
	 
	 x=(0.4+y-2*z)/3.1 ;
	 y=(10-x+1.3*z)/10 ;
	 z=(103.2-2.1*x-3*y)/2 ;
	 }  
	 
	 
	 
	printf("\n\n\n X=%-11f Y=%-11f Z=%-11f Res=%-11f",x,y,z,res) ;
	}

	
 
	else{ 
	
	
	printf("\n FOR EQUATION    -2.1*x-3*y+10*z=103.2 ");
    x=y=z=0 ;	 
	while(1)	
	{
	
	 res=-2.1*x-3*y+10*z-103.2 ;
	 
	 res=res>0?res:-res ;
	 printf("\n X=%-11f Y=%-11f Z=%-11f Res=%-11f",x,y,z,res) ;
	 if(res<e) break ;
	 
	 x=(0.4+y-2*z)/3.1 ;
	 y=(10-x+1.3*z)/10 ;
	 z=(103.2-2.1*x-3*y)/2 ;	 
	 } 	    
	 
	printf("\n\n\n X=%-11f Y=%-11f Z=%-11f Res=%-11f",x,y,z,res) ;
	}   
	 
		
}

