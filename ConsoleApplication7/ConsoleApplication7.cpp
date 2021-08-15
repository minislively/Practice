#include <stdio.h>

int main()
{
    long double a, b, sum;

    printf("Garo : ");
    scanf("%Lf", &a);
    printf("Sero : ");
    scanf("%Lf", &b);

    sum = a * b;
    printf("%Lf", sum);
}