#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c, tong;
    double tbc;
    printf("Nhap a: ");scanf("%d",&a);
    printf("Nhap b: ");scanf("%d",&b);
    printf("Nhap c: ");scanf("%d",&c);
    
    tong=a+b+c;
    tbc= tong/3;
    printf("%d",tong);
    printf("\n%lf",tbc);
    getch();
    

}
