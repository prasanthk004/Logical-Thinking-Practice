#include<stdio.h>

int main()

{

	float sal ,tot=0 ;
	int i;
	sal=1;
	
	printf("\n  Day            Salary ");
	
	for(i=1;i<=30;i++)
	{
	
	 sal=sal*2;
	 if(i>=1)
	 {
	 
	 printf("\n %4d    %15.2f",i, sal/100.0);
	 }
	 tot+=sal;
	}
	
}	 
	 

