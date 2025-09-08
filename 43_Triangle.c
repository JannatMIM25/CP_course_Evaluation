#include<stdio.h>
int main()
{
    float x,y,z,a,b,c,p,q;
    scanf("%f%f%f",&x,&y,&z);
    a=x+y;
    b=y+z;
    c=z+x;
    if(a>z&&b>x&&c>y)
    {
        p=x+y+z;
        printf("Perimetro = %.1f\n",p);
    }
    else
    {
        q=(x+y)*z/2;
        printf("Area = %.1f\n",q);

    }
    return 0;





}
