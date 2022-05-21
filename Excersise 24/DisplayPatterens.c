#include<stdio.h>

int main()
{

    int i=0 , j=0 ;

    int n=10 ;

    for(i=0;i<n;i++)
    {

        for(j=1;j<=n-i;j++)
        {
               printf(" %3d",j);
        }
        printf("\n");
    }


 printf("\n\n\n\n");

 for(i=1;i<=n;i++)
 {

     for(j=1;j<=n;j++)
     {
        if(j>=i)
        {
            printf("%3d",j);

        }
        else
        {
            printf("   ");
        }

     }
      printf("\n");
 }

  printf("\n\n\n\n");

  for(i=1;i<=n;i++)
  {

     for(j=n;j>=i;j--)
     {
          printf("%3d",j);
     }
     printf("\n");

  }

  printf("\n\n\n\n");

  for(i=1;i<=n;i++)
  {

     for(j=1;j<=i;j++)
     {
          printf("%3d",n-j+1);
     }
     printf("\n");

  }

printf("\n\n\n\n");

 for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {

        printf("   ");
    }
    for(j=i;j>=1;j--)
    {
        printf("%3d",j);
    }
     printf("\n");


}


for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {

        printf("   ");
    }
    for(j=i;j>=1;j--)
    {
        printf("%3d",j);
    }
     printf("\n");


}







    printf("\n\n\n\n");
}
