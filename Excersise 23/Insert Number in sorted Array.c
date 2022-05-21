#include<stdio.h>

int main()
{
    int a[11]={10,20,30,40,50,60,70,80,90};
    int i,n,pos ;

    n=23 ;
    for(i=0;i<10;i++)
    {

        printf(" %d",a[i]);
    }

    for(i=0;i<10;i++)
    {
     if(a[i]>n)
     {
        pos=i ;
        break;

     }
    }
    printf("\n\n\n\n");

    for(i=9;i>=pos;i--)
    {
         a[i]=a[i-1];

    }

    a[pos]=n;



     for(i=0;i<10;i++)
    {

        printf(" %d",a[i]);
    }

    printf("\n\n\n\n");
}
