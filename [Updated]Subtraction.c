#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int numa[8],numb[8],diff[8];
    int i,n=3;
    printf("Enter first number:");

    for(int i=0;i<=n;i++)
    {
        scanf("%d",&numa[i]);
    }
    printf("Enter second number:");

    for (int i=0;i<=n;i++)
    {
        scanf("%d",&numb[i]);
    }

    for (int i=3;i>=0;i--)
    {
        diff[i]=numa[i]-numb[i];
        if(diff[i]<0)
        {
            numa[i-1]=numa[i-1]-1;
        }
        diff[i]=fabs(diff[i]%2);
    }
    printf("\n Difference is : ");
    for (i=0;i<=n;i++)
    {
        printf("%d",diff[i]);
    }
    return 0;
}
