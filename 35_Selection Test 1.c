#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a+b;
    y=c+d;
    char str[]="Valores aceitos";
    char atr[]="Valores nao aceitos";
    if(a%2==0 && b>c && d>a && c>0 && d>0 && y>x)
    {
        printf("%s\n",str);

    }


    else
    {
        printf("%s\n",atr);

    }
    return 0;





}
