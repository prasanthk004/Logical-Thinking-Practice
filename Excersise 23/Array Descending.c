#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a[5]={1,5,7,4,8};

    int i , j,tmp ;

    printf("\n Values before ordering to descending ");
  printf("\n\n");
    for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);

    }
  printf("\n\n");
    for(int i=0; i<5 ; i++)
    {
        for(j=0; j<5-i ; j++)
        {
            if(a[j]<a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;

                printf("%d ",j);


            }


        }
        printf("\n");
    }

  printf("\n\n");
    printf("\n Values after ordering to descending ");
  printf("\n\n");
      for(i=0;i<5;i++)
    {
        printf(" %d ",a[i]);

    }

    printf("\n\n\n\n\n");

}
