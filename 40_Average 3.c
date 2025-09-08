#include<stdio.h>
int main()
{
    float a,b,c,d,x,e,y,z;
    scanf("%f%f%f%f",&a,&b,&c,&d);

    int p=2;
    int q=3;
    int r=4;
    int s=1;
    int m=0;
    x=(a*p + b*q + c*r + d*s)/(p+q+r+s) ;
    printf("Media: %.1f\n",x);
    if(x>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(x<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(x>=5&&x<=6.9)
    {
        printf("Aluno em exame.\n");
        m=1;

    }
    if(m==1)
    {
        scanf("%f",&e);
        y=(x+e)/2;

        printf("Nota do exame: %.1f\n",e);
        if(y>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if(y<=4.9)
        {
            printf("Aluno reprovado.\n");
        }


        printf("Media final: %.1f\n",y);
    }

    return 0;


}
