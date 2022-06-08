#include<stdio.h>

int main()
{

    float a[3][4],b[3][4];

    int i,j;

    float val=1 ;
    float amt=500;

    /*Input Array */

    for(i=0;i<3;i++)
    {
        val=i+1;
        for(j=0;j<4;j++)
        {

            a[i][j]=val ;
            b[i][j]=val*10;
            val+=4;
        }
    }

/*
     for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

        printf("%4.1f ",a[i][j]);
        }
        printf("     ");
           printf(" %3.2f",amt);
         for(j=0;j<3;j++)
        {

        printf(" %3.f ",b[i][j]);
        }

        printf("\n");
    */


    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

        printf("%4.1f ",a[i][j]);
        printf("%3.f ",b[i][j]);
        }




        printf("\n");
    }
}
