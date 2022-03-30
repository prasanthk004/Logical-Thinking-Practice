#include<stdio.h>
#include<stdlib.h>

int main()
{

 int a[100];
 
 int i,j,k=0,n; 
 
 srand(time(0));
 
 
 
 
 for(i=0;i<100;i++)
 {
 
 
  a[i]=i ;
  
 }
 


 for(i=0;i<100;i++)
 {
 
  printf("\n     %02d  %02d",a[i],a[i+1]);
  
  }
  
  printf("\n\n\n");
  
 
  
  
  for(i=0;i<50;i++)
  {
  
  
  printf("\n     %02d  %02d",a[i],a[i+51]);
  }
  
  
  printf("\n\n\n");


 
 
 for(i=0;i<100;i++)
 {
 
   printf("\n     %02d  %02d",a[i],a[100-i]);
  
 }
  
  printf("\n\n\n");
  printf("\n\n\n");
  printf("\n\n\n");
  
  
  
  for(i=0;i<100;i+=2)
  {
     printf("\n     %02d ",a[i]);
  }
  
   printf("\n\n\n");
  printf("\n\n\n");
  printf("\n\n\n");
 
  for(i=0;i<100;i++)
  {
  	if(i%10==0)
	{
	 printf("\n");
	}
  
    printf(" %02d",a[i]);
	

  }
  
  
}

