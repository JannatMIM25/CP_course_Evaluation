#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        if(i%2==0)
        {
            x=pow(i,2);
            printf("%d%c%d = %d\n",i,'^',2,x);

        }

    }
    return 0;





}
