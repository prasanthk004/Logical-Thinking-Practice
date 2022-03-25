#include<stdio.h>

int main()

{

	float f1,f2,f3=0 ;
	
	int n=1 ;
	
	float diff=0,cur=0,pre=0 ;
	
	f1=f2=1 ;
	
	printf("\n f1         f2         f3         cur        pre        diff      ");
	printf("\n %-8.f   %-8.f   %-8.f   %-8f   %-8f   %-8f",f1,f2,f3,cur,pre,diff) ;
	
	while(n<100)
	{
		
		f3=f1+f2 ;
		
	
		if(n>1)
		{
			cur=f3/f2 ;

	   
		}	 
		
		if(n>2)
		{
			diff=cur-pre ;
			
			diff=diff>0?diff:-diff ;
			
    	printf("\n %-8.f   %-8.f   %-8.f   %-8f   %-8f   %-8f ",f1,f2,f3,cur,pre,diff) ;
			
			if(diff==0) break ; 		
			
		}
		
		pre=cur ;
		
		n++ ;	 
		f1=f2 ;
		f2=f3 ;
	}
	
	
	printf("\n\n\n No of Terms :  %d" , n );
	printf("\n Value       :  %f",cur) ;            
}	 


	

