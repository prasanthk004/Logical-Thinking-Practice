#include<stdio.h>
#include<math.h> 


int main()

{


	float t,d,g=9.81 ;
	
	printf("\n Enter the seconds taken to reach the water : ");
	scanf("%f",&t);
	
	d=1.0/2 * g * t * t ;
	
	
	printf("\n Distance of the well : %.2f meters \n\n ",d);
	
}
	

