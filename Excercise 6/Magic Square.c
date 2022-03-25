#include <stdio.h>

int main()


{

	int x,y,z;
	
	printf("\n Enter the value of X : ");
	scanf("%d",&x);
	
	printf("\n Enter the value of Y : ");
	scanf("%d",&y);
	
	printf("\n Enter the value of Z : ");
	scanf("%d",&z);
	
	
	printf("\n %3d    %3d    %3d ",x-z,x+z-y,x+y);
	printf("\n %3d    %3d    %3d ",x+y+z,x,x-y-z);
	printf("\n %3d    %3d    %3d ",x-y,x+y-z,x+z);
	
}	 
	

