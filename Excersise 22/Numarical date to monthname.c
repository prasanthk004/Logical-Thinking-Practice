#include<stdio.h>
#include<string.h>

int main()

{


  char date[30]="11/30/2022";
  
  char bkpdate[30];
  
  char *buff ;
  char month[12][25]={"January", "February", "March"," April", "May", "June", "July", "August","September","October", "November","December"};
  char output[80];
  int day,mon,year;
  
  strcpy(bkpdate,date);
  
  buff=(char*)strtok(date,"/");
  mon=atoi(buff);
  
  
  
  buff=(char*)strtok(NULL,"/");
  day=atoi(buff);
  
  buff=(char*)strtok(NULL,"/");
  year=atoi(buff);
  
  printf(" \n Month = %d Day = %d  Year = %d" , mon , day , year);
  
  sprintf(output,"%s, %d  %d",month[mon-1],day,year);
  
  
   printf("\n\n Numeric  Date          : \n\n %s",bkpdate);

  printf("\n\n\n Converted   MonthName : \n\n %s \n\n\n",output);
  
  
  
     

}


