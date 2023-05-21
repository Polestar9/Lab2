#include <stdio.h>

int main() 
{
    int a, b;
    printf("Input value a: ");
    scanf("%d", &a);
    printf("Input value b: ");
    scanf("%d", &b);
    int remainder = b % a;
    int quotient = a / b;
    int product = a * b;
    printf("Remainder: %d\n", remainder); //Залишок
    printf("Quotient: %d\n", quotient); //Ціла частина
    printf("Product: %d\n", product); //Добуток
    return 0;
}