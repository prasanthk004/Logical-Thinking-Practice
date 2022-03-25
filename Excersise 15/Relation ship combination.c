#include<stdio.h>
#include<math.h>
int main()

{

	float d,dg,c,t,n  ;
	printf("\n S.No    Direct             Dir.Grp       Cross        Total");
	for(n=1 ; n<=50 ; n++)
	{
	
		d=n ;
		dg=pow(2,n)-1 ;
		c=n*(n-1) ;
		t=pow(2,n)+n*n-1 ;
		
		printf("\n %4.f    %-15.f    %-10.f    %-10.f    %-10.f" , n , d,dg,c,t) ;
	}
	printf("\n\n\n\n\n\n");	   
}	 	 	 

