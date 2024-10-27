#include <stdio.h>

void rotate(int &x, int &y, int &z) {
    x=x+y+z;
    z=x-y-z;
    y=x-y-z;
    x=x-y-z;
}

int main() {
    int x, y, z;
    
    scanf("%d %d %d",&x,&y,&z);
    
    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
    
    return 0;
}
