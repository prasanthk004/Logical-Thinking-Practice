#include<stdio.h>
#include<math.h>

int main()


{

	float base , height , hy ;
	
	printf("\n Enter the CM of height : ");
	scanf("%f",&height);
	
	
	printf("\n Enter the CM of base   : ");
	scanf("%f",&base);
	
	hy=sqrt(pow(height,2)+pow(base,2));
	
	printf("\n Hypotenuse of Triangle is : %.2f CM",hy);
	
}	 
	
	

