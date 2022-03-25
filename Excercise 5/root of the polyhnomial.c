#include<stdio.h>
#include<math.h>

int main()

{
 
 	float x , res,opt ;
	do
	{
	system("cls");
	printf("\n Enter the Value of X  :  ");
	scanf("%f",&x);
	fflush(stdin);
	res = 17.0 / 3 * pow(x,17) + 4 * pow(x,8) - 0.76 * pow(x,2) - 686 ;
	
 	
	printf("\n Given X value has been applied in FORMULA \n 17.0/3 * pow(x,17) + 4 * pow(x,8) - 0.76 * pow(x,2) - 686 \n\n");
	printf("\n The Answer is : %.2f " , res );
	
	if(res==0)
	
	{
		
		printf("\n Given X value is root of the ploynomial %f " ,res) ;
	}
	
	else
	{
	
		printf("\n Given X value is not a root of the ploynomial %f " ,res) ;
	}
	
	printf("\n\n Continue (Y/N) ? " ,&opt);
	opt=getchar();
	}while(opt=='Y' || opt=='y');
	
}	 	 

