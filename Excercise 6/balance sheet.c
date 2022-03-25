int main()

{

	int cash , ar , suplies ,land , building , machine , patents ;
	int ap , cb , ta , tl ;
	
	cash = 3500 ;
	ar   = 500 ;
	suplies = 100 ;
	land=2000 ; 
	building = 10000 ;
	machine = 3000 ;
	patents = 2000 ;
	ap=3000 ;
	cb=18100 ;
	
	ta=cash+ar+suplies+land+building+machine+patents;
	tl=ap+cb ;
	
	
	printf("\n               			 XYZ  Corporation   	    \n");
	printf("\n               			  Balance Sheet         	\n");
	printf("\n               			 June 24 , 2015             \n");
	printf("\n -----------------------------------------------------------------");
	printf("\n Assets                  Amount    Liablities              Amount");
	printf("\n -----------------------------------------------------------------");
	printf("\n %-20s  %8d    %-20s  %8d","Cash",cash,"Account Payable",ap);
	printf("\n %-20s  %8d    ","Account Receivable",ar);
	printf("\n %-20s  %8d    %-20s  %8d","Supplies",suplies,"Capital Block",cb);
	printf("\n %-20s  %8d    ","Land",land);
	printf("\n %-20s  %8d    ","Buildings",building);
	printf("\n %-20s  %8d    ","Machine and Equip",machine);
	printf("\n %-20s  %8d    ","Patents",patents);
	printf("\n -----------------------------------------------------------------");
	printf("\n %-20s  %8d    %-20s  %8d","Total Assets",ta,"Total Liablities",tl);
	printf("\n -----------------------------------------------------------------\n\n");

	
	
}	 

