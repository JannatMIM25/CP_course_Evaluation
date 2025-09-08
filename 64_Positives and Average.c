#include<stdio.h>
int main()
{
    float arr[6];
    int q=0;
    float a=0;
    for(int i=0; i<=5; i=i+1)
    {
        scanf("%f",&arr[i]);
        int x=(int)arr[i];
        if(x>0)
        {
            q=q+1;
            a=a+arr[i];
        }

    }
    printf("%d valores positivos\n",q);
    float b=a/q;
    printf("%.1f\n",b);

    return 0;




}
