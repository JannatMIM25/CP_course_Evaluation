#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    long x;
    a=0;
    b=0;
    for(int i=0; i<n; i=i+1)
    {
        scanf("%ld",&x)  ;
        if(x>=10&&x<=20)
        {
            a=a+1;
        }
        else
        {
            b=b+1;
        }

    }
    printf("%d in\n%d out\n",a,b);
    return 0;







}
