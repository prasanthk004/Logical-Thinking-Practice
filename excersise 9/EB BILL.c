#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

	int ac ,d,m,y ;
	int pr,cr,kw ;
	char mn[15] ;
	float amount ;
	
	printf("\n Enter account Number : ");
	scanf("%d",&ac);
	fflush(stdin);
	printf("\n Enter Meter number   : ");
	gets(mn);
	fflush(stdin);
	printf(" \n Enter DD MM YYYY : ");
	scanf("%d""%d""%d",&d,&m,&y);
	
	printf("\n Enter Previous meter rate : ");
	scanf("%d",&pr);
	
	printf("\n Enter Current meter rate : ");
	scanf("%d",&cr);
	
	
	kw=cr-pr ;
	
	
	if(kw<=300)
	{
		amount=5 ;
	}
	
	else if(kw>301&&kw<=1000)	 
	{
	
		if(m>=6&&m<=10)
		{
		
			amount=5+(kw-300)*6.113/100 ;
		}
		else
		{
		
			amount=5+(kw-300)*5.545/100 ;
		}
	}
	
	else
	{
		if(m>=6&&m<=10)
		{
		
			amount=(kw-1000)*6.113/100*0.98 ;
			amount=amount+5+700*6.113/100 ;
		}
		else
		{
		

			amount=(kw-1000)*5.545/100*0.98 ;
			amount=amount+5+700*5.545/100 ;
		}
	
	}	 	 	 	 



printf("\n To Print a BILL \n\n");
system("pause");
system("cls");

printf("\n\n\n\n\n\n");


printf("\n --------------------------------------------------- ");
printf("\n Account Number       Meter Number       Date        ");
printf("\n     %-7d          %-12s       %d/%d/%d       \n\n",ac,mn,d,m,y);
printf("\n Meter Reading        KW Hours           Amount      ");
if(m>=6&&m<=10)
{
printf("\n Present   Previous   Used            Summer Rate     ");
}
else
{
printf("\n Present   Previous   Used            Winter Rate     ");
}
printf("\n %-7d   %-8d   %-5d           $%-7.2f       ",cr,pr,kw,amount);
printf("\n ---------------------------------------------------\n\n ");           
 
	
}	 

