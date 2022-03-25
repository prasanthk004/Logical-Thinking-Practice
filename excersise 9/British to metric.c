#include<stdio.h>

void ftoc() ;
void itoc() ;
void mtokm();
void ptokg() ;

int main()
{

	int opt ;
	while(1)
	
	{
	system("cls");
	printf("\n 			British to Metric \n\n ");
	
	printf("\n   1. Faheren heit to Celcius   ");
	printf("\n   2. Inches to  Centimetes     ");
	printf("\n   3. Miles to Kilo Meters	  ");
	printf("\n   4. Pounds to KiloGrams  	  ");
	printf("\n   5. Exit                      ");
	
	
	printf("\n\n Please choose option : ");
	scanf("%d",&opt);
	fflush(stdin);
	switch(opt)
	{
	
		case 1 :  ftoc(); break ;
		case 2 :  itoc() ; break ;
		case 3 :  mtokm(); break ;
		case 4 :  ptokg(); break ;
		case 5 : return ;
		
		default : printf("\n Invalid option Selected ");break; 
	}
	fflush(stdin);
	printf("\n\n press any key to continue..........");
	getchar();
	
	}
		
}


void ftoc()

{

	float f,c ;
	
	printf("\n Enter Faherenheit : ");
	scanf("%f",&f);
	
	c=(f/2)-15 ;
	printf("\n  Faheren heit : %.2fF   celcius :  %.2fC ",f,c);
	
	
}	 

void itoc()

{

	
	float inch,cm ;
	
	printf("\n Enter  inches : ");
	scanf("%f",&inch);
	
	cm=inch*2+20 ;
	
 
	printf("\ninches : %.2f INC CentiMeters : %.2f CM",inch,cm);
	
}	 

void mtokm()

{

	
	float mile,km ;
	
	printf("\n Enter  Miles : ");
	scanf("%f",&mile);
	
 
	km=mile+(mile*6/100);
 
	printf("\n Mile : %.2f M  Kilometers : %.2f KM",mile,km);
	
}	 
void ptokg()

{

	
	float pound,kg ;
	
	printf("\n Enter  pound : ");
	scanf("%f",&pound);
	
 
	kg=(pound/2)-(pound*10/100) ;
 
	printf("\n Pound : %.2f P  Kilogram  : %.2f KG",pound,kg);
	
}

