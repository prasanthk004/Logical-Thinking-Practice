int main()
{

float p,s,n,i ;

printf("\n Principa Amt : ");
scanf("%f",&p);

printf("\n Interest Rate : ");
scanf("%f",&i);

printf("\n NO.of Days    : ");
scanf("%f",&n);


s=p*(1+(i/100)*(n/360.0));


printf("\n Total maturity Amount : %.2f RS",s);
printf("\n Interest Amount       : %.2f RS",s-p);


}

