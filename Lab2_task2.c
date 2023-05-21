#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Input value a ");
    scanf("%d", &a);
    printf("Input value b ");
    scanf("%d", &b);
    printf("Input value c: ");
    scanf("%d", &c);
    int y = (a*b*c)/(a+b+c)-(a-b-c)/(a*b*c); 
    printf ("result:%d", y);
    return 0;
}