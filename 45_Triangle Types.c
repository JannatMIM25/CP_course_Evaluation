#include<stdio.h>
int main()
{
    double x,y,z,a,b,c;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(x>=y&&x>=z)
    {
        a=x;
        b=y;
        c=z;
    }
    else
    {
        if(y>=z)
        {
            a=y;
            b=z;
            c=x;
        }
        else
        {
            a=z;
            b=x;
            c=y;

        }

    }


    double m=a*a;
    double n=b*b;
    double o=c*c;
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(m==n+o)
    {
        printf("TRIANGULO RETANGULO\n");

    }

    else  if(m>n+o)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if(m<n+o)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b&&b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a==b&&b!=c)||(b==c&&b!=a)||(a==c&&b!=c))
    {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;

}
