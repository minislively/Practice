#include <iostream>

int main()
{
    int t, a, b, s = 1, max = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);

        while (s % a != 0 || s % b != 0)
        {
            s++;
        }
        for (int j = 1; j <= 1000; j++)
        {
            if (a % j == 0 && b % j == 0)
            {
                if (max < j)
                {
                    max = j;
                }
            }
        }
        printf("%d %d\n", s, max);
        s = 1, max = 0;
    }
}