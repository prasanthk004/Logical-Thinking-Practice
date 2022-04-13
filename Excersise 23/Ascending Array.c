#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[]={7,4,3,9,1};

    int i , j,tmp,n ;

    /* Getting Random inputs with in 10 numbers "*/
    n=5;
  /* srand(time(0));
    for(i=0;i<n;i++)
    {
        a[i]=5-i;

    */


    for(i=0;i<n;i++)
    {

        printf(" %d ",a[i]);
    }
   printf("\n\n ");
    for(i=0;i<n;i++)
    {

     for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {

                 tmp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=tmp;

            }

        }


    }



    for(j=0;j<n;j++)
    {

        printf(" %d ",a[j]);
    }
     printf("\n\n\n");

    printf("\n\n\n");






}



