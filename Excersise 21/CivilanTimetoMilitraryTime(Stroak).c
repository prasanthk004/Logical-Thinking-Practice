#include<stdio.h>
#include<string.h>


int main()
{

 char ct[80] ; /*="02 45 PM";*/
 
 char *buff,ap[5],bkp[80] ; 
 
 int hr , min   ;
 
 
 printf("\n Enter the time Seperated by Space HH MM AM/PM : ");
 gets(ct); 

  strcpy(bkp,ct);
 
  buff=(char *)strtok(ct," ");
  hr=atoi(buff);
  buff=(char *)strtok(NULL," ");
  min=atoi(buff);
  buff=(char *)strtok(NULL," ");
  
  
  if(strcmp("PM",buff)==0)
  {
   hr+=12 ;
   }
 
  printf(" Hr=%d min= %d AM/PM = %s \n\n\n",hr,min,buff);
  
  
  printf("\n  Civilan Time  : %s ",bkp);
  
  printf("\n  Military Time : %02d%02d \n\n\n\n",hr,min); 



	
}

