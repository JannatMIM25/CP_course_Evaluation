#include<stdio.h>
int main(){
int arr[7]={100,50,20,10,5,2,1};
int brr[7];
int i=0;
int x;
scanf("%d",&x);
printf("%d\n",x);
char str[100]="nota(s) de R$";
while(i!=7){
    brr[i]=x/arr[i];
    x=x%arr[i];
    printf("%d %s %d%c%d%d\n",brr[i],str,arr[i],',',0,0);
        i++;

}
return 0;





}
