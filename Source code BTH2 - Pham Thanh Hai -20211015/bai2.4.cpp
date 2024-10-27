#include <stdio.h>

int cube(int x) {
    //# tr? v? l?p phuong c?a x
 return x*x*x;
}

//# vi?t hàm tính l?p phuong c?a m?t s? ki?u double
double cube(double f){
    return f*f*f;
}

int main() {
    int n;
    
    double f;
    scanf("%d %lf", &n, &f);
    
    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));
    
    return 0;
}
