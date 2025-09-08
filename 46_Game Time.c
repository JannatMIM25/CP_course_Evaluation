#include<stdio.h>
int main()
{
    int a,c,q;
    scanf("%d%d",&a,&c);

    if(a>c)
    {
        q=24-a+c;
    }
    else if(a<=c)
    {
        q=c-a;
    }
    if(a==c)
    {
        q=24;
    }


    printf("O JOGO DUROU %d HORA(S)\n",q);
    return 0;


}
