#include<stdio.h>

int main()

{

float t,p,i,n;
int j;

printf("\n  Principal       : ");
scanf("%f",&p);

printf("\n Interest Rate    : ");
scanf("%f",&i);

printf("\n No.of Years      : ");
scanf("%f",&n);

printf("\n Time To Compound : ");
scanf("%d",&j);


t=p*pow(1+(i/100)/j,n*j);

printf("\n Principal Amount                               : %.2f",p);
printf("\n Total amount (compounded %d times per year)    : %.2f",j,t);
printf("\n Interest Amount (compounded %d times per year) : %.2f\n",j,t-p);

}

