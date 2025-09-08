#include<stdio.h>
int main()
{
    int arr[5];
    int p,q,r,s;
    p=0;
    q=0;
    r=0;
    s=0;
    for (int i=0; i<=4; i=i+1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            p=p+1;

        }
        else
        {
            q=q+1;
        }
        if(arr[i]>0)
        {
            r=r+1;
        }
        else if(arr[i]<0)
        {
            s=s+1;
        }

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",p,q,r,s);
    return 0;







}
