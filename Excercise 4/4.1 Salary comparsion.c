#include<stdio.h>


struct emp 
{
	float npay;
	float gpay;
	float deduction ;
}emp;	 


int main()


{

	 struct emp x,y;
	 
	 printf("\n Enter Gpay of X : ");
	 scanf("%f",&x.gpay); 
	 
	 printf("\n Enter Gpay of Y : ");
	 scanf("%f",&y.gpay); 
	 
	 x.deduction=x.gpay*6.85/100 + x.gpay * 23.5/100 ;
	 y.deduction= 850.45 + y.gpay * 16.03/100 ; 
	 
	 x.npay=x.gpay-x.deduction ;
 	 y.npay=y.gpay-y.deduction ;	
	 
	 printf("\n X NetPay : %.2f " ,x.npay);
	 printf("\n y NetPay : %.2f " ,y.npay);  
	 
	 if (x.npay>y.npay)
	 {
	 	printf("\n\n X netpay greater than Y netpay\n");
		
	}
	
	else
	{
		printf("\n\n Y netpay greater than X netpay\n");
	}	  
}

