#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[3];
    for(int i=0; i<=2; i=i+1)
    {
        scanf("%d",&arr[i]);

    }
    int max=INT_MIN;
    int min=INT_MAX;
    int smax=INT_MIN;
    for(int i=0; i<=2; i=i+1)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(int i=0; i<=2; i=i+1)
    {
        if(smax<arr[i]&&arr[i]!=max)
        {
            smax=arr[i];

        }



    }

    for(int i=0; i<=2; i=i+1)
    {
        if(min>arr[i])
        {
            min=arr[i];

        }

    }

    printf("%d\n%d\n%d\n\n",min,smax,max);
    for(int i=0; i<=2; i=i+1)
    {
        printf("%d\n",arr[i]);

    }

    return 0;










}
