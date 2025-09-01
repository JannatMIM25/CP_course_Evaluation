#include <stdio.h>
int main()
{

    int arr[3];
    int max=-1;
    for(int i=0; i<=2; i=i+1)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d eh o maior\n",max);

    return 0;
}



