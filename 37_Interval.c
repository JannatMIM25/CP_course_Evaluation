#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x>=0.0&&x<=25.0)
    {
        printf("Intervalo [%d,%d]\n",0,25);
    }
    else if(x>25.0&&x<=50.0)
    {
        printf("Intervalo (%d,%d]\n",25,50);
    }
    else if(x>50.0&&x<=75.0)
    {
        printf("Intervalo (%d,%d]\n",50,75);
    }
    else if(x>75.0&&x<=100.0)
    {
        printf("Intervalo (%d,%d]\n",75,100);
    }
    else if(x<0.00||x>100.00)
    {
        printf("Fora de intervalo\n");
    }
    return 0;





}
