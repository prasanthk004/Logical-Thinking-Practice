#include<stdio.h>

int main()

{

	float T_mile,hour,T_cost,A_mile ;
	
	float  speed , gallon  , cost ;
	
	printf("\n Total Miles travelled : ");
	scanf("%f",&T_mile);
	
	printf("\n Taken  Time           : ");
	scanf("%f",&hour);
	
	printf("\n Avg mile per gallon   : ");
	scanf("%f",&A_mile);
	
	printf("\n Total cost spent      : " );
	scanf("%f",&T_cost);
	
	
	speed=T_mile/hour ;
	
	gallon = T_mile/A_mile; 
	
	cost= T_cost/gallon ;
	
	printf("\n Driven KM's = %7.0f",T_mile);
	printf("\n Taken Time  = %8.2f",hour);
	printf("\n Avg Mile    = %8.2f",A_mile);
	printf("\n Spent Cost  = %8.2f",T_cost);
	printf("\n Avg Speed   = %8.2f KM per hr",speed);
	printf("\n Avg Gallon  = %8.2f Gallons",gallon);
	printf("\n Avg Cost    = %8.2f Rs Per Gallon\n\n",cost);
	
}	 

