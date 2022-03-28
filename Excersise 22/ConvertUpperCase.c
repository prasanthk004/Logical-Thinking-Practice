#include<stdio.h>
#include<string.h>

void ConvertToUpper(char s[]);


int main()
{

  char str[80], u[80];
  
  printf("\n Enter the Sentence : ");
  gets(str);
  
  
  strcpy(u,str);
  
  ConvertToUpper(u);
  
  printf("\n Given Sentence : \n %s \n\n\n ",str);
  
  printf("\n Converted : \n %s \n\n\n ",u);
  
 
 

}




void ConvertToUpper(char s[])
{

 int i ; 
 
 
 for(i=0;s[i]!='\0';i++)
 {
 
   if(s[i]>='a'&&s[i]<='z')
   {
      s[i]-=32;
	 
   
   }   
   
 
 
 }
 
   s[i]='\0';
 
 


}
	

