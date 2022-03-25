#include<stdio.h>

int main()

{

	int cash , ar, supply,land ;
	
	int cs , ap , ta, tl ;
	
	cash=3200;
	ar=1300;
	supply=700;
	land=0;
	cs=5000;
	ap=2500;
	
	
	ta=cash+ar+supply+land ;
	tl=cs+ap ;
	
	land=tl-ta ;	
	ta=cash+ar+supply+land ;
 	printf("\n               		Triple Star Croporation ");
	printf("\n               			Balance  Sheet ");
	printf("\n               			Jul 20 ,2021\n ");
	printf("\n------------------------------------------------------------------");
	printf("\n Assets                  Amount    Liablities              Amount");
	printf("\n------------------------------------------------------------------");
	printf("\n %-20s  %8d    %-20s  %8d","cash",cash,"Capital Stock",cs);
	printf("\n %-20s  %8d    ","Account Receivable",ar);
	printf("\n %-20s  %8d    ","supplies",supply);
	printf("\n %-20s  %8d    %-20s  %8d","Land",land,"Account Payable",ap);
	printf("\n------------------------------------------------------------------");
	printf("\n %-20s  %8d    %-20s  %8d","Total Assets",ta,"Total Liablities",tl);
	printf("\n------------------------------------------------------------------\n");
	
	
		
}	 

