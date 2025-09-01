#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,y,z,m;
    scanf("%lf%lf%lf",&a,&b,&c);
    x = b*b - 4*a*c ;
    if(a>0&&x>-1)
    {
        y=sqrt(x);
        z=(-b+y)/(2*a) ;
        m=(-b-y)/(2*a) ;
        printf("R1 = %.5lf\nR2 = %.5lf\n",z,m);

    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
