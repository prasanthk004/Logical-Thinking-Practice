#include<stdio.h>
#include<string.h>

int StrRev(char s[],char *rs);
int main()
{


 char str[80];
 
 char rev[80];
 int count;
 
  
 printf("\n Please enter the String : ");
 gets(str);
 

 
 count=  StrRev(str,rev);
 
 printf("\n Given String   : %s \n Reversed String : %s \n String Count : %d \n\n\n",str,rev,count);
 
 if(strcmp(str,rev)==0)
 {
 
  printf("\n Given String is Palindrome \n\n\n");
 }
 
 else
 {
 
   printf("\n Given String is not  Palindrome \n\n\n");
 
 }

}






int  StrRev(char s[],char *rs)
{

  int i ,n,j,strCount=0;
  
  
  char revStr[80];
  
  
  for(i=0;s[i]!='\0';i++)
  {  
  
   strCount++;
   
  
  }
  
  

  

 for(--i;i>=0;rs++,i--)
 {
 
   *rs=s[i];
 
 }
 
   *rs='\0';
 
 
 
 
return strCount;





}



