#include<stdio.h>
int main()
{
    int a,b,x;
    x=0;
    scanf("%d%d",&a,&b);
    for(int i=b+1; i<a; i=i+1)
    {
        if(i%2!=0)
        {
            x=x+i;
        }

    }
    printf("%d\n",x);

    return 0;






}
