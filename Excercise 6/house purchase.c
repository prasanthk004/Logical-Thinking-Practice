#include<stdio.h>
#include<math.h>

int main()

{

	float p,dp,R,y,m,i ;
	
	int n  ;
	
	
	printf("\n Enter the rate of house : ");
	scanf("%f",&p);
	
	printf("\n Enter down payment     : ");
	scanf("%f",&dp);
	
	printf("\n Enter rate of interest : ");
	scanf("%f",&i);
	
	printf("\n Enter no.of years & Months : ");
	scanf("%f""%f",&y,&m);
	
	printf("\n No.of Payments per year : ");
	scanf("%d",&n);
	
	/*p=76000 ; dp=7000; i=13.5 ;
	y=30 ; m=0 ; n=12 ;*/
	
	p=p-dp ;
	y=(y*12+m)/12 ;
	i=i/100;
	
	R = (i*p/n) / 1-(pow((1/n+1),-n*y)) ;
	
	printf("\n Regular payment amount per installment : %.2f RS \n\n",R);
	
}

