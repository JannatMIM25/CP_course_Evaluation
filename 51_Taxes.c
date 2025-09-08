#include<stdio.h>
int main()
{
    float x,p,q,r,a,b,c,d;
    scanf("%f",&x);
    if(x>=2000.00)
    {
        p=x-2000.00;

        if(p>=1000.00)
        {
            q=p-1000.00;

            if(q<=1500)
            {
                a=(1000*8)/100;
                b=(q*18)/100;
                c=a+b;
                printf("R$ %.2f\n",c);

            }


            else if(q>1500)
            {
                r=q-1500;
                a=(1000*8)/100;
                b=(1500*18)/100;
                c=(r*28)/100;
                d=a+b+c;
                printf("R$ %.2f\n",d);


            }
        }
        else
        {
            a=(p*8)/100;
            printf("R$ %.2f\n",a);
        }
    }
    else
    {
        printf("Isento\n");
    }







    return 0;





}
