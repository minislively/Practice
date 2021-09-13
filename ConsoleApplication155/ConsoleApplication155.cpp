#include <iostream>

int main()
{
    double s = 1000, x = 0, y = 0, n = 0, min = 100000;

    scanf("%lf %lf", &x, &y);

    if (s / y * x < min)
    {
        min = s / y * x;
    }

    scanf("%lf", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &x, &y);
        if (s / y * x < min)
        {
            min = s / y * x;
        }
    }
    printf("%.2lf", min);
}