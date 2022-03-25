#include<stdio.h>

int main()

{
	
	float r1,r2,r3,r4,r ;
	
	printf("\n Enter resitance of R1 : ");
	scanf("%f",&r1);
	
	printf("\n Enter resitance of R2 : ");
	scanf("%f",&r2);
	
	printf("\n Enter resitance of R3 : ");
	scanf("%f",&r3);
	
	printf("\n Enter resitance of R4 : ");
	scanf("%f",&r4);
 
 
	
	r = 1/r1+1/r2+1/r3+1/r4 ;
	 
    r = 1/r ;
	
	printf("\n\n R1 = %.3f  R2=%.3f R3=%.3f R4= %.3f\n\n\n ",r1,r2,r3,r4);
	printf("\n OverAll Resistance is  %.3f _()_ ohms",r);
	
}	 

