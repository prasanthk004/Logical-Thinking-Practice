#include<stdio.h>

int main()


{

 int d,k,dk,dr,found,n ;
 
 /*printf("\n Enter n : ");
 scanf("%d",&n);*/
 for(d=1;d<=100000;d++)
 {
 
 	for(k=2;k<=9;k++)
	{
		dk=d*k ; 
		
		
		
		dr=reversenum(d) ;
		
		printf("\n d=%5d   k=%d   dk=%8d   dr=%d mf=%d",d,k,dk,dr,digit(d));
		 
		if(dk==dr){found=1 ;break;}
	}
	
	if(found==1) break ;
}  


 

 printf("\n d=%5d   k=%d   dk=%8d   dr=%0d  ",d,k,dk,dr);	
  
 
	
}





int reversenum(int n)

{

	int mf=digit(n),sum=0 ;
	
	
	
	
	while(n>0)
	{
	
		sum+=(n%10)*mf ;
 /*	   printf("\n n=%d sum=%d mf=%d",n,sum,mf); */
		n/=10 ;
		
		mf/=10 ;
		
	}
	
	return sum  ;
}



int digit(int n)
{


	int dg=0,i,mf=1  ;
	
	while(n>0)
	
	{
	
		dg++ ;
		n/=10 ;
		
	} 
	
	
	
 
 
 for(i=1;i<=dg-1;i++)
 {
 	mf*=10;
 }
 
 

	return mf ;
}	 	 
	

