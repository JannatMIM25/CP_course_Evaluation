#include<stdio.h>
int main()
{
    int arr[5];
    int p=0;
    for(int i=0; i<=4; i=i+1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            p=p+1;

        }
    }

    printf("%d valores pares\n",p);
    return 0;





}
