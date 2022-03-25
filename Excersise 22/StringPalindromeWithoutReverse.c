#include<stdio.h>
#include<string.h>
int main()

{

  char s[30] ;
  
  int i , j, pflag=1,l ;
  
  
  printf("\n Enter the String : ");
  gets(s);
  
  l=strlen(s);
  
  printf("\n%d %d",l,l/2);
  
  for(i=0,j=l-1;i<l/2;i++,j--)
  {
  
  	if(s[i]!=s[j])
	{
		pflag=0;
		break;
	}
	
  }
  
  
  
  if(pflag==1)
  {
  
  printf("\n Given String is palindrome \n\n\n");
  }
  else
  {
  
  printf("\n Given String is not a palindrome \n\n\n");
  }
  
  
  }
  
  

