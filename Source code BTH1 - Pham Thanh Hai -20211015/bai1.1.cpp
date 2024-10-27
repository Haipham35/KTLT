# include <stdio.h>
int main(){
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;
    printf("x = %d\n", *ptr);
    int* so;
    int* a;
    
    so =&y;
    a =&z;
    printf("y = %d\n",*so);
    printf("z = %d\n",*a);
    
    return 0;
}
