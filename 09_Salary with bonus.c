#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    double x,y,z;;
    scanf("%lf%lf",&x,&y);
    z=y*(15/100.00) + x ;
    char arr[100]="TOTAL = R$ ";
    printf("%s%.2lf\n",arr,z);
    return 0;





}
