#include<stdio.h>

int main()
{

	float cc , rh , ts ;
	
	int cck,rhk,tsk ;
	char opt ;
	/* 
	CC= Corbon Contents
	RH=Rockwell Hardless
	TS=Tensible Stregnth
	
	CCK= Corbon Contents  ok 
	RHK=Rockwell Hardless ok 
	TSK=Tensible Stregnth ok
	*/
	int grade ; 
    do
	{
	system("cls");	  
	printf("\n Corbon Content  : ");
	scanf("%f",&cc) ;
	
	printf("\n Rockwell Hardness : ");
	scanf("%f",&rh);
	
	printf("\n Tensible Strenghth : ");
	scanf("%f",&ts) ;
	
	/* Testing Process */
 
 	if(cc<0.67)
	{
		cck=1 ;
	}
	else
	{
		cck=0;
	}
								
	if(rh>=50)
	{
		rhk=1 ;
	}
	else
	{
		rhk=0;
	}
								
	if(ts>70000)
	{
		tsk=1 ;
	}
	else
	{
		tsk=0;
	}
	
	
 /* Find The Grade */	 	 	 	 	 	 	 


	if(cck==1&&rhk==1&&tsk==1)
	{
	
		grade=1 ;
	}
	
	else if(cck==1&&rhk==1&&tsk==0)
	{
	
		grade=9 ;
	}
	else if( cck==1&&rhk==0&&tsk==0)
	{
		grade = 8;
	}
	
	else
	{
	
		grade=7 ;
	}
	
	
				

	printf(" \n Metal Grade is  : %d ", grade);
	fflush(stdin) ;
	
	printf("\n Continue (Y/N) ?: ");
	
	opt=getchar() ;
	
	}while(opt=='y'||opt=='Y') ;
	

}

