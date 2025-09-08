#include<stdio.h>
int main()
{
    int a,b,c,d,p,q;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(d<b)
    {
        p=(d+60)-b;
        c=c-1;
    }

    else if(b<=d)
    {
        p=d-b;

    }
    if(a>c)
    {
        q=24-a+c;
    }
    else if(a<=c)
    {
        q=c-a;
    }
    if(a==c&&b==d)
    {
        p=0;
        q=24;
    }










    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",q,p);
    return 0;







}
