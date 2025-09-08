#include<stdio.h>
int main()
{
    int n,a;
    a=0;
    scanf("%d",&n);

    while(a!=6)
    {
        if(n%2!=0)
        {
            a=a+1;
            printf("%d\n",n);

        }
        n=n+1;
    }
    return 0;



}
