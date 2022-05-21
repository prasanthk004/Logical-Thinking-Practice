#include<stdio.h>

int main()
{

    int a[100],b[50];
    int i =0 ;
/* Getting input A */
    for(i=0;i<100;i++)
    {
        a[i]=i+1 ;
        if(i%10==0) printf("\n");
        printf(" %3d",a[i]);

    }
    printf("\n");
    printf("\n");
    printf("\n");

    /* Getting input B */
    for(i=0;i<50;i++)
    {
        b[i]=100+(i+1)*2-1 ;    /* (i+1)*2-1 Formula for ODD Numbers*/
      if(i%10==0) printf("\n");
        printf(" %3d",b[i]);

    }

    printf("\n");
    printf("\n");
    printf("\n");


}
