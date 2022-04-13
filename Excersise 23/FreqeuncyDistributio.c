#include<stdio.h>
#include<stdlib.h>


void AscendArray(int *a,int *n);
int main()
{
    int i , j,nc=0,n;
    int a[20];
    int num[20];
    int fr[20];
    int count ;

    int found=0;
    int cn=0 , cc=0 ;

    n=15;


    /* Getting inputs to array Using Random Numbers */

    for(i=0;i<n;i++)
    {
        a[i]=(rand()%10)+1;

    }

      AscendArray(a,&n);
     printf("\n\n\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }

    for(i=0;i<n;i++)
    {
        if(a[i]==cn)
        {
          cc++ ;
        }
        else
        {
            if(cn!=0)
            {
              num[nc]=cn ;
            fr[nc++]=cc ;
            }

            cn=a[i];
            cc=1;

        }
    }
     num[nc]=cn ;
     fr[nc]=cc ;


     printf("\n\n\n");


  printf("\n Numbers  : ");

    for(i=0;i<=nc;i++)
    {
      printf(" %-4d",num[i]);
    }

     printf("\n Frequncy : ");

    for(i=0;i<=nc;i++)
    {
      printf(" %-4d",fr[i]);
    }





    printf("\n\n\n");

}

void AscendArray(int *a,int *n)
{

    int i,j,tmp,num ;

    /* Printing Array Elements before swap*/
        num=*n ;
    printf("\n Before sorting the array \n\n ");
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);

    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;

            }

        }

    }
     printf("\n\n\n");

       printf("\n After  sorting the array \n\n ");

    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);

    }

}
