#include <stdio.h>
#include<math.h>

int main()
{

    double  x1,x2,y1,y2;
    scanf("%lf %lf\n%lf %lf",&x1,&y1,&x2,&y2);
    double  D=pow(x1-x2,2) +pow(y1-y2,2);
    double x=sqrt(D);
    printf("%.4f\_n",x);
    return 0;
}
