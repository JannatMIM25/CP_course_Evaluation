#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    scanf("%d",&x);
    a=x/365;
    b=x%365;
    c=b/30;
    d=b%30;
    char str[]="ano(s)";
    char atr[]="mes(es)";
    char btr[]="dia(s)";
    printf("%d %s\n%d %s\n%d %s\n",a,str,c,atr,d,btr);
    return 0;








}
