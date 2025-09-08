#include<stdio.h>
int main()
{
    float x,p,q;
    scanf("%f",&x);
    if(x>0&&x<=400.00)
    {
        q=(x*15)/100;
        p=q+x;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",p,q,15,'%');


    }
    if(x>=400.01&&x<=800.00)
    {
        q=(x*12)/100;
        p=q+x;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",p,q,12,'%');


    }
    if(x>=800.01&&x<=1200.00)
    {
        q=(x*10)/100;
        p=q+x;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",p,q,10,'%');


    }
    if(x>1200.01&&x<=2000.00)
    {
        q=(x*7)/100;
        p=q+x;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",p,q,7,'%');


    }
    if(x>2000.00)
    {
        q=(x*4)/100;
        p=q+x;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",p,q,4,'%');


    }



    return 0;





}
