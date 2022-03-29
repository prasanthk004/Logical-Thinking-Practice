#include<stdio.h>
#include<stdlib.h>

int main()
{

 int a[100];
 
 int i,j,k=0,n; 
 
 srand(time(0));
 
 
 
 
 for(i=0;i<100;i++)
 {
 
 
  a[i]=rand()%100 ;
  
 }
 
 
 
 
 
 for(i=0;i<100;i++)
  {
   
   for(j=0;j<(100/2)-2;j++)
   {
   
     printf(" ");
   
   }
 
  printf("%02d\n",a[i]);
  }
  printf("\n");
  
  
  
  for(j=0;j<100/10;j++)
  {
  
  
  
    for(i=0;i<(100-10)/2;i++)
    {
  
      printf(" ");
     }
	 
	 for(i=0;i<10;i++,k++)
	 {
	 
	 printf(" %02d",a[k]);
	 }
	 printf("\n");
	 
}
  
  
  
  
 
  
  
  
  
  printf("\n\n\n\n");
  
 }

