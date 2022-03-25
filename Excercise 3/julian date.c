#include<stdio.h>

int main()

{

	int d,m,y,jd ;
	
	printf("\n Enter the Day : " );
	scanf("%d",&d);
	
	printf("\n Enter the month : ");
	scanf("%d",&m);
	
	printf("\n Enter the Year  : ");
	scanf("%d",&y);
	
	jd=(m-1)*30+d;
	
	printf("\n Julian date : %d",jd);
	
	printf("\n\n If Actual date is %d-%d-%d Julian date %d-%d",d,m,y,jd,y);
	
}	 

