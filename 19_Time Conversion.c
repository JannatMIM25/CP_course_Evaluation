#include<stdio.h>
int main()
{
    int x,y,z,p,q;
    scanf("%d",&p);
    x=p/3600;
    q=p%3600;
    y=q/60;
    z=q%60;
    printf("%d:%d:%d\n",x,y,z);
    return 0;







}
