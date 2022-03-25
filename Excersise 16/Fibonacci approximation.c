#include<stdio.h>

#include<math.h>


int main ()

{

	int f1,f2,f3,n,i,at;
	float ap,ad,re ;
	
	f1=0;
	f2=1 ;
	f3=0 ;
	
	printf("\n Enter the No.of Term : ");
	scanf("%d",&n) ; 
	printf("\n Term           A.No         Aprxm       diff         R.Error" );	   
	for(i=1;i<=n; i++)
	{
	
	
		
		at=f3 ;
		
		ap=(0.447264)*pow(1.61803,i-1) ;
		
		ad=ap-at ;
		
		ad=ad>0?ad:-ad ;
		
		re=ad/at ;
		
		
		printf("\n  %4d   %12d    %12f   %8f   %12f",i,at,ap,ad,re);
		
		f3=f1+f2 ;  
		
		 
	   	if(i>1)
		{ 	  	  
		f1=f2 ;
		f2=f3 ;	    
		
	    }
	}
	
	
}	 	 
	
	

