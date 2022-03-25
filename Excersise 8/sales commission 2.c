#include<stdio.h>

int main()

{

	float c,s ;
	
	printf("\n Enter sales amount : ");
	scanf("%f",&s);
	
	if(s<=500)
	{
	
		c=s*1/100 ;
		printf("\n Commission 1 percentage  ");
		printf("\n Commission amount is %.2f RS",c);
	}
	
	else if (s>500&&s<5000)
	{
	
		c=s*5.0/100 ;
		
		printf("\n Commission 5 percentage  "); 	
		printf("\n Commission amount is %.2f RS",c);	
		
	}
	
	else
	
	{
	
		c=s*8.0/100 ;
		printf("\n Commission 8 percentage  ");
		printf("\n Commission amount is %.2f RS",c);	
		
	}
	
printf("\n\n\n");	 
}	 	 

