#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a[50];

    int i,n ;
    long sum=0;

    n=50 ;
    srand(time(0));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10+1;
        if(i%10==0) printf("\n");
        printf(" %3d ",a[i]);

    }
     printf("\n\n\n\n");
    printf("\n Number  Square");
     for(i=0;i<n;i++)
    {
        sum+=a[i]*a[i];
        printf("\n %-5d   %-6d",a[i],a[i]*a[i]);

    }

    printf("\n\n\n Sum of Square value of Array Element :  %-8ld ",sum);


    printf("\n\n\n\n");


}
