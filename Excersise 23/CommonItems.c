#include<stdio.h>

int main()
{

 int a[30]={1,2,3,6,2,4},b[30]={4,2,2,6,6,3,4},res[30] ;
 int i , j,x=0,found=0;
 
 for(i=0;i<6;i++)
 {
    for(j=0;j<7;j++)
	{
	/* Check a[i] is equal to b[j] */
	  if(a[i]==b[j])
	  {
  /* printf("\n %d matched jpos %d ipos %d",b[j],j,i); */
	  found=1;
 
	   
	  } 
	  
	 }
	 
	 
	 
	 
	 if(found)
	 {
	  found=0;
	  for(j=0;j<x;j++)
	  {        
		if(a[i]==res[j])
		{
		found=1;
		break;
		}    
	  
	  }
	  if(!found)
	  {
	  res[x++]=a[i] ;
	  }
 	 }
	
 
 }
 
 
 	printf("\n\n Here are matched \n ");
	
	  for(j=0;j<x;j++)
	  {
        
	 
	    printf(" \n %d   ",res[j]);
	 
		}
  
     printf("\n\n\n"); 
 
}

