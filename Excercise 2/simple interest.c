#include<stdio.h>

int main()

{

float p,r,SI;

int n ;

printf("\n Principle Amount : ");
scanf("%f",&p) ;
printf("\n Rate of Interest : ");
scanf("%f",&r);
printf("\n No.of Years : ");
scanf("%d",&n);

SI=p*n*r/100;


printf("\n\n SIMPLE INTEREST IS : %.2f",SI);
/*printf("\n Total Amt : %.2f",SI+p);*/


}


