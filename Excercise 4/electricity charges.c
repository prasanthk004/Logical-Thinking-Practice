#include<stdio.h>
#include<conio.h>


int main()

{

 float w1,w2,c1,c2,r=0.087*1000;
 int h ;
 
 w1=65 ; w2=100 ; h=6 ; 
 
 c1=w1*h*r/1000.0 ;
 c2=w2*h*r/1000.0 ; 
 
 printf("\n 	 	 	 	 	 	 COST ANALYSIS              \n\n");
 printf("\n WATTS         HOURS       COST/KW         COST ");
 printf("\n %-5.0f         %-5d       %-7.3f         %-7.3f",w1,h,r/1000.0,c1);
 printf("\n %-5.0f         %-5d       %-7.3f         %-7.3f",w2,h,r/1000.0,c2);
 
 
}
                   

