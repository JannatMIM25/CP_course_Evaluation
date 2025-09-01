#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);

    int n=x*100;
    double arr[6]= {100.00,50.00,20.00,10.00,5.00,2.00};
    int brr[6];
    double crr[6]= {1.00,0.50,0.25,0.10,0.05,0.01};
    int drr[6];
    char str[]="NOTAS:";
    char btr[]="nota(s) de R$";
    char atr[]="MOEDAS:";
    char ftr[]="moeda(s) de R$";
    int i=0;
    printf("%s\n",str);
    while(i!=6)
    {
        brr[i]=n/(arr[i]*100) ;
        printf("%d %s %.2lf\n%",brr[i],btr,arr[i]);
        int f=100*arr[i];
        n=n%f;
        i++;


    }
    printf("%s\n",atr);
    int j=0;
    while(j!=6)
    {
        int d=crr[j]*100;
        drr[j]=n/d;
        printf("%d %s %.2lf\n",drr[j],ftr,crr[j]);
        n=n%d;

        j++;



    }

    return 0;



}
