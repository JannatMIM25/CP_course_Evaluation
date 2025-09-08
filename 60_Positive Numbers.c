#include<stdio.h>
int main()
{
    float a;
    int p=0;
    for(int i=1; i<=6; i=i+1)
    {
        scanf("%f",&a);
        int x=(int)a ;
        if(x>0)
        {
            p=p+1;

        }
    }
    printf("%d valores positivos\n",p);
    return 0;





}
