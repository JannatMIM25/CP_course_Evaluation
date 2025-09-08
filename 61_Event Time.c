#include<stdio.h>
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,p,q,r,s;

    scanf("%*s %d",&d1);
    scanf("%d %*s %d %*s %d",&h1,&m1,&s1);


    scanf("%*s %d",&d2);
    scanf("%d%*s%d%*s%d",&h2,&m2,&s2);


    st1=(d1*(24*60*60))+(m1*60)+(h1*3600)+s1;
    st2=(d2*(24*60*60))+(m2*60)+(h2*3600)+s2;
    p=st2-st1;
    q=p/86400;
    p=p%86400;
    r=p/3600;
    p=p%3600;
    s=p/60;
    int t=p%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",q,r,s,t);

    return 0;









}
