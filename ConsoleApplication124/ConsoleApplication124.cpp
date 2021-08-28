#include <iostream>

int print(int h, int w, int n);

int main()
{
    int a;
    int h, w, n;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &h, &w, &n);

        int result = printf("%d\n", print(h, w, n));
    }
}

int print(int h, int w, int n)
{
    int sum = 0;
    int x = 0, y = 0;
    for (int i = 1; i <= w; i++) // 각 방의 개수 
    {
        for (int j = 1; j <= h; j++) // 호텔 층수 
        {
            if (sum == n)
                break;
            x = j;
            y = i;
            sum++;

        }
    }
    return (x * 100 + y);
}
