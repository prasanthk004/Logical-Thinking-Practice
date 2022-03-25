#include<stdio.h>

int main()

{

	char name[20] ;
	int desg , edu,merit,exp,sp  ;
	
	float b_pay , salary ;
	
	b_pay=10000 ;
	
	printf("\n Enter the name of employee : ");
	gets(name) ;
	
	printf("\n Enter Designation(1-5)     : ");
	scanf("%d",&desg);
	
	printf("\n Enter Qualification(1-5)   : ");
	scanf("%d",&edu);
	
	printf("\n Enter Rating (1-3)         : ");
	scanf("%d",&merit) ;
	
	printf("\n  Enter Experience   : ");
	scanf("%d",&exp) ;
	
	sp=0 ;
	salary=b_pay ;
	
	switch(desg)
	{
	
		case 1 : salary+=0;sp+=0 ; break ;
		case 2 : salary+=b_pay*5.0/100;sp+=5 ; break ;
		case 3 : salary+=b_pay*10.0/100;sp+=10 ; break ;
		case 4 : salary+=b_pay*15.0/100;sp+=15 ; break ;
		case 5 : salary+=b_pay*20.0/100;sp+=20 ; break ;	   
	    default : salary+=b_pay*4.0/100;sp+=4; break ;
	}
	
	   
	switch(edu)
	{
	
		case 1 : salary+=0;sp+=0 ; break ;
		case 2 : salary+=b_pay*10.0/100;sp+=10 ; break ;
		case 3 : salary+=b_pay*25.0/100;sp+=25 ; break ;
		case 4 : salary+=b_pay*50.0/100;sp+=50 ; break ;
		case 5 : salary+=b_pay*15.0/100;sp+=15 ; break ;	   
	    default : salary+=b_pay*4.0/100;sp+=4; break ;
	}
	
	   

	switch(merit)
	{
	
		case 1 : salary+=0;sp+=0 ; break ;
		case 2 : salary+=b_pay*10.0/100;sp+=10 ; break ;
		case 3 : salary+=b_pay*25.0/100;sp+=25 ; break ;		
	    default : salary+=b_pay*4.0/100;sp+=4 ; break ;
	}
	
	 
	 
	if(exp>=0&&exp<=10)
	{
	
		salary+=b_pay*5.0/100 ;
		sp+=5;
	}
	
	else 
	{
		sp+=(exp-10)*4;
		salary+=b_pay*4.0/100*(exp-10) ;
		salary+=b_pay*5.0/100 ;
		sp+=5;
		
	}
	
	
	printf("\n Employee name : %s",name);
	printf("\n Salary        : %.2f",salary );	
	printf("\n Salary Percentage : %d",sp);  
}	 	 	

