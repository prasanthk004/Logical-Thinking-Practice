#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    int day[5], sal[5];

    int max,i,j,d ;
    int n;
    n=5 ;
    srand(time(0));


/* Input Array */
    for(i=0;i<n;i++)
    {

        day[i]=i+1 ;
        sal[i]=rand()%105+1;

    }
    max=sal[0];
    printf("\n DAY    SALES");
    for(i=0;i<n;i++)
    {
        /* Disply values */
        printf("\n %3d     %3d   ",day[i],sal[i]);

        /* Finding  Maximum Value */

        if(max<sal[i])
        {

            max=sal[i];
            d=day[i];
        }

        for(j=0;j<sal[i];j++)
        {
          printf("*");
        }

    }

    printf("\n\n\n\n\n");

    printf("\n Maximum sales is %d on day %d",max,d);

    printf("\n\n\n\n\n");

     printf("\n Graduated axis \n\n");

    for(i=1;i<=max;i++)
    {
        if(i%5==0)
        {

            printf("%d",i%10);
        }
        else
        {
            printf("-");

        }

    }

    printf("\n\n\n\n\n");

}
