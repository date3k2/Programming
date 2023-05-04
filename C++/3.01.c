#include <stdio.h>
int main()
{
    float a, b, c, tong;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    tong = a + b + c;
    printf("%f", tong);
    printf("\n");
    printf("%f", tong / 3.0);
    return 0;
}