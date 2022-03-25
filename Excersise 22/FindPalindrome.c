#include<stdio.h>

int main()
{


 int number,revNum;
 
 printf("\n Enter the number :  " );
 scanf("%d",&number);
 
 revNum=revnum(number);
 
 printf("\n Reversed Number   : %d ",revNum);
 
 
 if(number==revNum)
 {
   printf("\n Given Number is palindrome Number ");
 }
 
 else
 {
   printf("\n Given Number is not  palindrome Number "); 
 }
 

 printf("\n\n\n\n");

}



 int revnum(int n)
 {
 

 int num ,rem, rev,sum=0 ;
  
  num=n ;
  
  while(n>0)
  {
   rem=n%10;
   sum=sum*10+rem ;
   n/=10;
  
  }
  
  rev=sum ;
  
  return rev;
  
  	 
}

