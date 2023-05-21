#include <stdio.h>

int main() {
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    double f1 = x*x + x*y - y*y;
    double f2 = 1 + x*x + y*y;
    double f = f1/f2;
    printf("f = %.2f", f);
    return 0;
}