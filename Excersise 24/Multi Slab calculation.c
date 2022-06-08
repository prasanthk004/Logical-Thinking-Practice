#include<stdio.h>
#include<stdlib.h>

int main()
{

    int slab[]={3400,2100,2100,4300};
    int tax[]={0,14,16,18};

    int gross , tmp ;

    float ttax ;


    printf("\n Enter the Gross Pay : ");
    scanf("%d",&gross);

    int i=0;

    tmp=gross;

    while(tmp>0)
    {

        if(tmp<=slab[i])
        {
                ttax=ttax+tmp*tax[i]/100;
                 printf("\n\n  s Tax : %.2f \n\n\n",ttax);
                 tmp=0;

        }
        else
        {

            ttax=ttax+slab[i]*tax[i]/100;
            tmp-=slab[i];
             printf("\n\n  e Tax : %.2f \n\n\n",ttax);
        }

        i++;
    }

    printf("\n\n Total Tax : %.2f \n\n\n",ttax);
}
