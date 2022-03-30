#include<stdio.h>
#include<stdlib.h>

int main()

{

 int a[12],i ;
 
 
  srand(time(0));
  
  for(i=0;i<12;i++)
  {
  
   a[i]=rand()%100;
   
   }
   
   
   for(i=0;i<12;i++)
   {
   
   
    if(i%4==0)
	{
	printf("\n");
	}
    printf(" %02d",a[i]);
	
   }
   
   
   
  }

