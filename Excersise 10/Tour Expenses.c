#include<stdio.h>

int main()

{


	int p ,d ,room;
	
	float mpg , pg , food , ie , iae,mpd,rent,mcp;
	
	float meals , roomcost, totalexp , totalgas , totalmiles,totalgasprice,gie,totalmealcost,tautocost;
	
	
	printf("\n No.oF persons : ");
	scanf("%d",&p);
	

	printf("\n No.of Days : ");
	scanf("%d",&d);
	
	printf("\n Miles Per day  : ");
	scanf("%f",&mpd);
	printf("\n Miles Per gallon  : ");
	scanf("%f",&mpg);
	
	printf("\n Price per gallon  : ");
	scanf("%f",&pg);
	
	printf("\n Room Rent per day : ");
	scanf("%f",&rent);
	
	printf("\n Meals cost per ( 1time) 1 person : ");
	scanf("%f",&mcp) ;
	
	
	room=p/4 ;  
 
 	if(room>=0.1&&room<=0.9)
	{
		room=1 ;
	}	 
	
	if(!p%4==0)
	{
	 room++ ;
	}	 	 
 	
	printf("\n ROOMS REQ : %d",room);
	 
	/* Find Automative cost */
	totalmiles=mpd*d ;
	totalgas = totalmiles/mpg ;
	totalgasprice=totalgas*pg ; 
	gie=totalgasprice*0.15 ;
	tautocost=totalgasprice+gie ;
	/*room cost*/
	roomcost=(room*rent)*d ;
	
	/*Meal Cost */
	totalmealcost=mcp*(d*3-2)*p ;
	
	ie=(roomcost+totalmealcost)*0.15 ;
	
	totalexp = roomcost+totalmealcost+tautocost+ie ;
	
	printf("\n Gas Cost                     : %.2f ",totalgasprice);
	printf("\n Gas Incidental               : %.2f ", gie);
	printf("\n Total Automative cost        : %.2f",tautocost);
	printf("\n");
	printf("\n Total Room cost              : %.2f",roomcost);
	printf("\n Total Meal Cost              : %.2f",totalmealcost);
	printf("\n Incidental Expenses          : %.2f",ie);
	printf("\n Total Expenses               : %.2f",totalexp);
	printf("\n Amount Per Person            : %.2f",totalexp/p);
	
	
	
 	
	
 
}	 

