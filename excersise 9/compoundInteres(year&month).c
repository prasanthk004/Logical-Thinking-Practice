#include<stdio.h>
#include<math.h>
int main()
{

	float p , r, c1,c2 ;
	int t,n1,n2 ;
	
	printf("\n Priciple : ");
	scanf("%f",&p);
	
	printf("\n Rate of Interest : ");
	scanf("%f",&r);
	
	printf("\n No.OF Years : ");
	scanf("%d",&t) ;
	
	r=r/100 ;
	
	n1=1 ;
	n2=12 ;
	
	c1=p*pow((1+r/n1),(t*n1)) ;
	c2=p*pow((1+r/n2),(t*n2)) ;	  


	printf("\n Interest Amount If compounded yearly once : %.2f \n\n",c1);
	printf("\n Interest Amount If compounded monthly once : %.2f \n\n",c2);
	
	if(c2>c1)
	{
		printf("\n Interest Amount : %.2f ",c2-p);
		printf("\n Monthly compounding Suggested \n");
	}
	
	else
	{
		printf("\n Interest Amount : %.2f ",c2-p);
		printf("\n Yearly compounding Suggested \n");
	}
	printf("\n\n");

}

